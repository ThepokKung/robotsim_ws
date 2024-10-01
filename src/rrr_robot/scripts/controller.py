#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRMode , RRRIPK , RRRAuto
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped
from functools import partial
import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np
from math import pi 


class ControllerNode(Node):
    def __init__(self):
        super().__init__('Controller_node')

        # Service server
        self.create_service(RRRMode, '/robot_mode', self.mode_callback)
        self.create_service(RRRIPK, '/ipk', self.ipk_callback)
        self.create_service(RRRIPK, '/ipk', self.ipk_callback)

        # Service client
        self.random = self.create_client(RRRAuto, '/random')

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        # self.end_effector_pub = self.create_publisher(JointState, "/joint_states", 10)

        # Sub Topic
        self.create_subscription(PoseStamped, '/target', self.random_target_callback, 10)

        # Timmer
        self.dt = 0.01
        self.create_timer(self.dt,self.sim_loop)

        # Defind DH-Table
        self.robot = rtb.DHRobot([
                rtb.RevoluteMDH(d = 200), # joint 1
                rtb.RevoluteMDH(alpha = -pi/2 ,d = -120 ,offset = -pi/2), # joint 2
                rtb.RevoluteMDH(a = 250 ,d = 100 ,offset = pi/2), # joint 3
                rtb.RevoluteMDH(alpha = pi/2, d = 280), # End-effector
            ],
            name = "3R_Robot"
        )

        self.mode = ''
        self.run = False

        self.name = ["joint_1", "joint_2", "joint_3"]
        self.q = [1.0, 1.5, 2.0]
        self.q_goal = [0.0 , 0.0 , 0.0]
        self.pos_goal = [0.0 , 0.0 , 0.0]
        self.k = 1

        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')
        
    def sim_loop(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        for i in range(len(self.q)):
            
            dq = self.q_goal[i] - self.q[i]

            if abs(dq) > (self.k * self.dt):
                if dq > 0:
                    self.q[i] += self.k * self.dt
                else:
                    self.q[i] -= self.k * self.dt
            else:
                self.q[i] = self.q_goal[i]

            msg.position.append(self.q[i])
            msg.name.append(self.name[i])
        
        self.joint_pub.publish(msg)
        current_pos = self.robot.fkine([self.q[0],self.q[1],self.q[2],0])
        # self.get_logger().info(f'Current Pos : {current_pos.t}')
        pos_check = self.pos_goal - current_pos.t
        if pos_check[0] <= 0.1 and pos_check[1] <= 0.1 and pos_check[2] <= 0.1 and self.mode != '' and self.run:
            self.run = False
            self.get_logger().info(f'Stop Run')


    def invert_kinematic(self,goal_x,goal_y,goal_z):
        T_goal = SE3(goal_x,goal_y,goal_z)

        q_sol = self.robot.ikine_LM(T_goal, q0=np.random.uniform(-pi,pi,size=4), mask=[1, 1, 1, 0, 0, 0])

        self.get_logger().info(f'Success to find q_sol : {q_sol.success}')
        if q_sol.success:
                self.q_goal[0] = q_sol.q[0]
                self.q_goal[1] = q_sol.q[1]
                self.q_goal[2] = q_sol.q[2]
                self.pos_goal [0] = goal_x
                self.pos_goal [1] = goal_y
                self.pos_goal [2] = goal_z
                # self.get_logger().info(f'q : {self.q }')
        
        return q_sol.success

    def ipk_callback(self, request:RRRIPK.Request, response:RRRIPK.Response):
        if self.mode == 'IPK' and self.run == False:
            goal_x = request.ipk_target_x
            goal_y = request.ipk_target_y
            goal_z = request.ipk_target_z
            inpk_check = self.invert_kinematic(goal_x,goal_y,goal_z)
            if inpk_check:
                self.run = True
                response.ipk_check = inpk_check
                response.ipk_q1 = self.q_goal[0]
                response.ipk_q2 = self.q_goal[1]
                response.ipk_q3 = self.q_goal[2]
                self.get_logger().info(f'Start Run')
        return response

    def random_target_callback(self,msg :PoseStamped):
        if self.mode == 'Auto' and self.run == False:
            self.call_random_target()
            goal_x = msg.pose.position.x * 1000
            goal_y = msg.pose.position.y * 1000
            goal_z = msg.pose.position.z * 1000
            auto_check = self.invert_kinematic(goal_x,goal_y,goal_z)
            if auto_check:
                self.run = True
                self.get_logger().info(f'Start Run')

    def call_random_target(self):
        call_random = RRRAuto.Request()
        call_random.target_call = True
        self.random.call_async(call_random)
    
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
            self.mode = ''
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
