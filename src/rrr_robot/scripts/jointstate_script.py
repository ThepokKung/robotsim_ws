#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rrr_robot_interfaces.srv import *

from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped , Twist , Point 

import roboticstoolbox as rtb
from spatialmath import *
from math import pi
import numpy as np 

class JointstatePublisher(Node):
    def __init__(self):
        super().__init__('jointstate_publisher')

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.current_pose_pub = self.create_publisher(Point, "/current_pose", 10)

        # Sub Topic
        self.create_subscription(Twist, '/cmd_vel', self.cmd_callback, 10)
        self.create_subscription(PoseStamped, '/end_effector', self.target_callback, 10)

        # Service server
        self.create_service(RRRTeleop ,'/teleop_mode' ,self.teleop_callback)
        self.create_service(RRRAuto ,'/auto_mode' ,self.auto_callback)

        # Service client
        self.ink_call_group = MutuallyExclusiveCallbackGroup()
        self.ink_calcalate = self.create_client(RRRInvertKinematics ,'/ink_calculate' ,callback_group = self.ink_call_group)
        self.target_call_group = MutuallyExclusiveCallbackGroup()
        self.target_call = self.create_client(RRRTargetPath ,'/call_path' ,callback_group = self.target_call_group)
        
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

        self.auto_run = False

        self.robot_run = False

        self.q = [0.0 ,pi/2 ,pi/2]
        self.cmd_vel = [0.0 ,0.0 ,0.0]

        self.q_goal = [0.0 ,0.0 ,0.0]
        self.goal_pose = [0.0 ,0.0 ,0.0]

        self.name = ["joint_1" ,"joint_2" ,"joint_3"]

        # Display Node start
        self.get_logger().info(f'JointState publisher Start Node')

    def call_target(self):
        call_msg = RRRTargetPath.Request()
        call_msg.call_path = True

        result = self.target_call.call(call_msg)

        if result.all_done:
            pass

    def auto_callback(self, request:RRRAuto.Request, response:RRRAuto.Response):
        self.auto_run = request.auto_run
        if self.auto_run:
            self.call_target()
        return response

    def teleop_callback(self, request:RRRTeleop.Request, response:RRRTeleop.Response):
        if self.auto_run == False:
            self.teleop_run = request.teleop_run
        self.get_logger().info(f'Teleop run : {self.teleop_run}')
        if self.teleop_run:
            self.teleop_ref = request.frame_ref
            self.get_logger().info(f'Jacobian ref by frame : {self.teleop_ref}')

        return response

    def cmd_callback(self, msg : Twist):
        if self.teleop_run:
            self.cmd_vel[0] = msg.linear.x
            self.cmd_vel[1] = msg.linear.y
            self.cmd_vel[2] = msg.linear.z

    def target_callback(self, msg :PoseStamped):
        if self.auto_run and self.robot_run == False:
            self.goal_pos[0] = msg.pose.position.x
            self.goal_pos[1] = msg.pose.position.y
            self.goal_pos[2] = msg.pose.position.z

            self.get_logger().info(f'Auto target : {self.goal_pose}')

            ink_target = RRRInvertKinematics.Request()
            ink_target.goal_pos.x = self.goal_pose[0]
            ink_target.goal_pos.y = self.goal_pose[1]
            ink_target.goal_pos.z = self.goal_pose[2]

            result = self.ink_calcalate.call(ink_target)

            self.get_logger().info(f'Invert Kinematic check : {result.ikn_check}')
             
            if result.ikn_check:
                self.q_goal[0] = result.q1
                self.q_goal[1] = result.q2
                self.q_goal[2] = result.q3

            self.robot_run = True

    def sim_loop(self):
        # Set header pub message
        joint_msg = JointState()
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        # calculate q value
        if self.teleop_run:
            if self.teleop_ref == 'base':
                J = self.robot.jacob0([self.q[0],self.q[1],self.q[2],0])
            elif self.teleop_ref == 'hand':
                J = self.robot.jacobe([self.q[0],self.q[1],self.q[2],0])
            j_reduce = J[:3, :3]

            q_dot = np.linalg.inv(j_reduce) @ np.array(self.cmd_vel)

            if np.linalg.det(j_reduce) < 0.01 :
                q_dot = [0,0,0,0]
                self.get_logger().info(f'Singurality Stop!!!')

        elif self.auto_run:
            k = 1.5

            delta_q = [0.0 ,0.0 ,0.0]
            delta_q[0] = self.q_goal[0] - self.q[0]
            delta_q[1] = self.q_goal[1] - self.q[1]
            delta_q[2] = self.q_goal[2] - self.q[2]

            q_dot[0] = delta_q[0] * self.dt *k
            q_dot[1] = delta_q[1] * self.dt *k
            q_dot[2] = delta_q[2] * self.dt *k

        else:
            q_dot = [0,0,0,0]

        self.q[0] = self.q[0] + q_dot[0]
        self.q[1] = self.q[1] + q_dot[1]
        self.q[2] = self.q[2] + q_dot[2]

        for i in range(len(self.q)): 
            joint_msg.position.append(self.q[i])
            joint_msg.name.append(self.name[i])

        current_pos = self.robot.fkine([self.q[0],self.q[1],self.q[2],0])

        if self.auto_run:
            pos_check = self.goal_pose - current_pos.t
            if pos_check[0] < 0.1 and pos_check[1] < 0.1 and pos_check[2] < 0.1:
                self.robot_run = False
                self.call_target()


        pose_msg = Point()
        pose_msg.x = current_pos.t[0]
        pose_msg.y = current_pos.t[1]
        pose_msg.z = current_pos.t[2]

        self.current_pose_pub.publish(pose_msg)
        self.joint_pub.publish(joint_msg)

        
def main(args=None):
    rclpy.init(args=args)
    node = JointstatePublisher()
    # rclpy.spin(node)
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
