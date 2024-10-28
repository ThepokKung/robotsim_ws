#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRTeleop

from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped , Twist

import roboticstoolbox as rtb
from spatialmath import *
from math import pi
import numpy as np 

class JointstatePublisher(Node):
    def __init__(self):
        super().__init__('jointstate_publisher')

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.end_effector_pub = self.create_publisher(PoseStamped, "/end_effector", 10)

        # Sub Topic
        self.create_subscription(Twist, '/cmd_vel', self.cmd_callback, 10)

        # Service server
        self.create_service(RRRTeleop ,'/teleop_mode' ,self.teleop_callback)
        
        # Timmer 
        self.dt = 0.01
        self.create_timer(self.dt, self.sim_loop)

        # Defind DH-Table
        self.robot = rtb.DHRobot([
                rtb.RevoluteMDH(d = 200), # joint 1
                rtb.RevoluteMDH(alpha = -pi/2 ,d = -120 ,offset = -pi/2), # joint 2
                rtb.RevoluteMDH(a = 250 ,d = 100 ,offset = pi/2), # joint 3
                rtb.RevoluteMDH(alpha = pi/2, d = 280), # End-effector
            ],
            name = "3R_Robot"
        )

        # Variable
        self.teleop_run = False
        self.teleop_ref = ''

        self.q = [0.0 ,0.0 ,0.5]
        self.cmd_vel = [0.0 ,0.0 ,0.0]

        self.name = ["joint_1" ,"joint_2" ,"joint_3"]

        # Display Node start
        self.get_logger().info(f'JointState publisher Start Node')

    def teleop_callback(self, request:RRRTeleop.Request, response:RRRTeleop.Response):
        self.teleop_run = request.teleop_run
        if self.teleop_run:
            self.teleop_ref = request.frame_ref
            self.get_logger().info(f'Jacobian ref by frame : {self.teleop_ref}')

        return response

    def cmd_callback(self, msg : Twist):
        if self.teleop_run:
            self.cmd_vel[0] = msg.linear.x
            self.cmd_vel[1] = msg.linear.y
            self.cmd_vel[2] = msg.linear.z

    def sim_loop(self):
        # Set header pub message
        joint_msg = JointState()
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        end_effector_msg = PoseStamped()
        end_effector_msg.header.stamp = self.get_clock().now().to_msg()
        end_effector_msg.header.frame_id = 'link_0'

        # calculate q value
        if self.teleop_run:
            if self.teleop_ref == 'base':
                J = self.robot.jacob0([self.q[0],self.q[1],self.q[2],0])
            elif self.teleop_ref == 'hand':
                J = self.robot.jacobe([self.q[0],self.q[1],self.q[2],0])
            j_reduce = J[:3, :3]

            q_dot = np.linalg.inv(j_reduce) @ np.array(self.cmd_vel)

            if np.linalg.det(j_reduce) < 0.1 :
                q_dot = [0,0,0,0]
                self.get_logger().info(f'Singurality Stop!!!')
        else:
            q_dot = [0,0,0,0]

        self.q[0] = self.q[0] + q_dot[0]
        self.q[1] = self.q[1] + q_dot[1]
        self.q[2] = self.q[2] + q_dot[2]

        for i in range(len(self.q)):
            joint_msg.position.append(self.q[i])
            joint_msg.name.append(self.name[i])

        # end effector pose
        current_pos = self.robot.fkine([self.q[0],self.q[1],self.q[2],0])
        end_effector_msg.pose.position.x = current_pos.t[0]/1000
        end_effector_msg.pose.position.y = current_pos.t[1]/1000
        end_effector_msg.pose.position.z = current_pos.t[2]/1000

        self.end_effector_pub.publish(end_effector_msg)

        self.joint_pub.publish(joint_msg)

        
def main(args=None):
    rclpy.init(args=args)
    node = JointstatePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
