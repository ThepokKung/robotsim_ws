#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rrr_robot_interfaces.srv import RRRMode ,RRRIPK ,RRRInvertKinematics ,RRRTargetPub

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

        # Service client
        self.ink_call_group = MutuallyExclusiveCallbackGroup()
        self.ink_calcalate = self.create_client(RRRInvertKinematics ,'/ink_calculate' ,callback_group = self.ink_call_group)

        self.taget_pub_call_group = MutuallyExclusiveCallbackGroup()
        self.target_send = self.create_client(RRRTargetPub ,'/target_send' ,callback_group = self.taget_pub_call_group )

        # Variable
        self.mode = ''
        self.robot_ready = True

        self.goal_pos = [0.0 ,0.0 ,0.0]

        # Display key for call mode
        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')

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
                self.get_logger().info(f'q1 : {result.q1} , q2 : {result.q2} , q3 : {result.q3}')

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
                self.target_send.call(target)

        elif self.mode == 'IPK':
            self.get_logger().info(f'Robot is running waite for run end')

        return response
    
    def robot_state_callback(self, request:RRRTargetPub.Request, response:RRRTargetPub.Response):
        if request.run_end:
            self.robot_ready = request.run_end
            self.get_logger().info(f'Robot run end')
        
        return response
    
    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call

        if self.mode == 'IPK':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

        elif self.mode == 'Teleop':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

        elif self.mode == 'Auto':
            self.get_logger().info(f'Mode call : {self.mode}')    
            response.mode_change = True
            
        else:
            self.get_logger().info(f'Mode call : {self.mode} not found')
            response.mode_change = False
            self.mode = ''

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
