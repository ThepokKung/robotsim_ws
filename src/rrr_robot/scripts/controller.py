#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rrr_robot_interfaces.srv import RRRMode ,RRRIPK ,RRRInvertKinematics ,RRRTargetPub ,RRRRandomTarget , RRRTeleop

from geometry_msgs.msg import PoseStamped ,Twist

import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np
from math import pi 


class ControllerNode(Node):
    def __init__(self):
        super().__init__('Controller_node')

        # Service server
        self.create_service(RRRMode ,'/robot_mode' ,self.mode_callback)
        self.create_service(RRRTargetPub ,'/robot_ready' ,self.robot_state_callback)
        self.create_service(RRRIPK ,'/ipk_target' ,self.ipk_target_callback)
        self.create_service(RRRTeleop ,'/teleop_target' ,self.teleop_target_callback)

        # Service client
        self.ink_call_group = MutuallyExclusiveCallbackGroup()
        self.ink_calcalate = self.create_client(RRRInvertKinematics ,'/ink_calculate' ,callback_group = self.ink_call_group)

        self.taget_pub_call_group = MutuallyExclusiveCallbackGroup()
        self.target_send = self.create_client(RRRTargetPub ,'/target_send' ,callback_group = self.taget_pub_call_group )

        self.random_taget_call_group = MutuallyExclusiveCallbackGroup()
        self.random_target_call = self.create_client(RRRRandomTarget ,'/random' ,callback_group = self.random_taget_call_group )

        # Sub Topic
        self.create_subscription(PoseStamped, '/target', self.random_target_callback, 10)

        # Variable
        self.mode = ''
        self.robot_ready = True

        self.goal_pos = [0.0 ,0.0 ,0.0]
        self.cmd_vel = [0.0 ,0.0 ,0.0]

        # Display key for call mode
        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')

    def teleop_target_callback(self ,request:RRRTeleop.Request ,response:RRRTeleop.Response):
        if self.mode == 'Teleop' and self.robot_ready:
            if request.ref_frame == 'end' or request.ref_frame == 'base':
                self.get_logger().info(f'Teleop reference frame : {request.ref_frame}')

                self.goal_pos[0] = request.teleop_target.x
                self.goal_pos[1] = request.teleop_target.y
                self.goal_pos[2] = request.teleop_target.z
                self.get_logger().info(f'Teleop Goal_pos : {self.goal_pos}')

                ink_target = RRRInvertKinematics.Request()
                ink_target.goal_pos.x = self.goal_pos[0]
                ink_target.goal_pos.y = self.goal_pos[1]
                ink_target.goal_pos.z = self.goal_pos[2]

                result = self.ink_calcalate.call(ink_target)

                self.get_logger().info(f'Invert Kinematic check : {result.ikn_check}')

                if result.ikn_check:
                    # self.get_logger().info(f'q1 : {result.q1} , q2 : {result.q2} , q3 : {result.q3}')
                    
                    target = RRRTargetPub.Request()
                    target.teleop_on = True
                    target.goal_pos.x = self.goal_pos[0]
                    target.goal_pos.y = self.goal_pos[1]
                    target.goal_pos.z = self.goal_pos[2]
                    target.q1 = result.q1
                    target.q2 = result.q2
                    target.q3 = result.q3

                    self.robot_ready = False
                    self.start_time = self.get_clock().now().nanoseconds
                    self.target_send.call(target)   
                
            else:
                self.get_logger().info(f'Teleop not find reference frame : {request.ref_frame}')
        
        return response

    def random_target_callback(self,msg :PoseStamped):
        if self.mode == 'Auto' and self.robot_ready:
            self.call_random_target()

            self.get_logger().info(f'Random Goal_pos : {self.goal_pos}')

            ink_target = RRRInvertKinematics.Request()
            ink_target.goal_pos.x = self.goal_pos[0]
            ink_target.goal_pos.y = self.goal_pos[1]
            ink_target.goal_pos.z = self.goal_pos[2]

            result = self.ink_calcalate.call(ink_target)

            self.get_logger().info(f'Invert Kinematic check : {result.ikn_check}')

            if result.ikn_check:
                # self.get_logger().info(f'q1 : {result.q1} , q2 : {result.q2} , q3 : {result.q3}')
                
                target = RRRTargetPub.Request()
                target.goal_pos.x = self.goal_pos[0]
                target.goal_pos.y = self.goal_pos[1]
                target.goal_pos.z = self.goal_pos[2]
                target.q1 = result.q1
                target.q2 = result.q2
                target.q3 = result.q3

                self.robot_ready = False
                self.start_time = self.get_clock().now().nanoseconds
                self.target_send.call(target)            
    
    def call_random_target(self):
        call_random = RRRRandomTarget.Request()
        call_random.target_call = True
        target = self.random_target_call.call(call_random)

        self.goal_pos[0] = target.random_target.x
        self.goal_pos[1] = target.random_target.y
        self.goal_pos[2] = target.random_target.z

    def ipk_target_callback(self ,request:RRRIPK.Request ,response:RRRIPK.Response):
        if self.mode == 'IPK' and self.robot_ready:
            self.goal_pos[0] = request.ipk_target.x
            self.goal_pos[1] = request.ipk_target.y
            self.goal_pos[2] = request.ipk_target.z

            self.get_logger().info(f'IPK Goal_pos : {self.goal_pos}')

            ink_target = RRRInvertKinematics.Request()
            ink_target.goal_pos.x = self.goal_pos[0]
            ink_target.goal_pos.y = self.goal_pos[1]
            ink_target.goal_pos.z = self.goal_pos[2]

            result = self.ink_calcalate.call(ink_target)

            self.get_logger().info(f'Invert Kinematic check : {result.ikn_check}')

            response.ipk_check = result.ikn_check

            if result.ikn_check:
                # self.get_logger().info(f'q1 : {result.q1} , q2 : {result.q2} , q3 : {result.q3}')

                response.ipk_q1 = result.q1
                response.ipk_q2 = result.q2
                response.ipk_q3 = result.q3
                
                target = RRRTargetPub.Request()
                target.goal_pos.x = self.goal_pos[0]
                target.goal_pos.y = self.goal_pos[1]
                target.goal_pos.z = self.goal_pos[2]
                target.q1 = result.q1
                target.q2 = result.q2
                target.q3 = result.q3

                self.robot_ready = False
                self.start_time = self.get_clock().now().nanoseconds
                self.target_send.call(target)

        elif self.mode == 'IPK':
            self.get_logger().info(f'Robot is running waite for run end')

        return response
    
    def robot_state_callback(self, request:RRRTargetPub.Request, response:RRRTargetPub.Response):
        if request.run_end:
            self.robot_ready = request.run_end
            self.get_logger().info(f'Robot run end')
            self.get_logger().info(f'Robot run time : {round((self.get_clock().now().nanoseconds - self.start_time) * 10**-9,4)} sec')

        return response
    
    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call

        if self.robot_ready:
            if self.mode == 'IPK':
                self.get_logger().info(f'Mode call : {self.mode}')
                response.mode_change = True

            elif self.mode == 'Teleop':
                self.get_logger().info(f'Mode call : {self.mode}')
                self.get_logger().info(f'Teleop Mode frame Reference :\nReference frame End effectoe : end\nReference fram Base : base')
                response.mode_change = True

            elif self.mode == 'Auto':
                self.get_logger().info(f'Mode call : {self.mode}') 
                response.mode_change = True
                
            else:
                self.get_logger().info(f'Mode call : {self.mode} not found')
                response.mode_change = False
                self.mode = ''
        else:
            self.get_logger().info(f'Chnage mode to {self.mode} after robot run end')
            response.mode_change = False

        return response

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()

    # rclpy.spin(node)
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
