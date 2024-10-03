#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRTargetPub , RRRTeleop

from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped , Twist
from std_msgs.msg import Float64MultiArray

import roboticstoolbox as rtb
from math import pi
import numpy as np

class JointstatePublisher(Node):
    def __init__(self):
        super().__init__('jointstate_publisher')

        # Service server
        self.create_service(RRRTargetPub ,'/target_send' ,self.target_callback)

        # Service client
        self.run_end = self.create_client(RRRTargetPub ,'/robot_ready')

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.end_effector_pub = self.create_publisher(PoseStamped, "/end_effector", 10)
        self.velo_pub = self.create_publisher(Float64MultiArray, "velocity_controllers/commands", 10)

        # Sub Topic
        self.create_subscription(Twist, "/cmd_vel", self.teleop_keyboard_callback, 10)
        
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
        self.q_goal = [0.0 ,0.0 ,0.0]
        self.goal_pos = [0.0 ,0.0 ,0.0]
        
        self.q = [0.0 ,0.0 ,0.0]
        self.cmd_vel = [0.0 ,0.0 ,0.0]

        self.name = ["joint_1" ,"joint_2" ,"joint_3"]
        self.kp = 1.5

        self.ready = True
        self.teleop_on = False

        # Display Node start
        self.get_logger().info(f'JointState publisher Start Node')

    def sim_loop(self):
        joint_msg = JointState()
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        end_effector_msg = PoseStamped()
        end_effector_msg.header.frame_id = 'link_0'
        end_effector_msg.header.stamp = self.get_clock().now().to_msg()

        dq = [0.0 ,0.0 ,0.0]
        dq[0] = self.q_goal[0] - self.q[0]
        dq[1] = self.q_goal[1] - self.q[1]
        dq[2] = self.q_goal[2] - self.q[2]

        self.q[0] = self.q[0] + (dq[0] * self.dt * self.kp)
        self.q[1] = self.q[1] + (dq[1] * self.dt * self.kp)
        self.q[2] = self.q[2] + (dq[2] * self.dt * self.kp)

        for i in range(len(self.q)):
            joint_msg.position.append(self.q[i])
            joint_msg.name.append(self.name[i])

        current_pos = self.robot.fkine([self.q[0],self.q[1],self.q[2],0])
        pos_check = self.goal_pos - current_pos.t

        if pos_check[0] <= 0.1 and pos_check[1] <= 0.1 and pos_check[2] <= 0.1 and self.ready == False:
            self.ready = True

            ready_msg = RRRTargetPub.Request()
            ready_msg.run_end = True
            self.run_end.call_async(ready_msg)

        end_effector_msg.pose.position.x = current_pos.t[0]/1000
        end_effector_msg.pose.position.y = current_pos.t[1]/1000
        end_effector_msg.pose.position.z = current_pos.t[2]/1000

        if self.teleop_on:
            cmd_msg = Float64MultiArray()
            
            J = self.robot.jacob0(self.q)
            j_reduce = J[:3, :3]
            qd = np.linalg.inv(j_reduce) @ np.array(self.cmd_vel)

            cmd_msg.data.append(qd[0])
            cmd_msg.data.append(qd[1])
            cmd_msg.data.append(qd[2])
            self.velo_pub.publish(cmd_msg)
            
        self.joint_pub.publish(joint_msg)
        self.end_effector_pub.publish(end_effector_msg)

    def teleop_keyboard_callback(self ,msg:Twist):
        if self.teleop_on:
            self.cmd_vel[0] = msg.linear.x
            self.cmd_vel[1] = msg.linear.y
            self.cmd_vel[2] = msg.linear.z

    def target_callback(self ,request:RRRTargetPub.Request ,response:RRRTargetPub.Response):
        if self.ready:
            self.goal_pos[0] = request.goal_pos.x
            self.goal_pos[1] = request.goal_pos.y
            self.goal_pos[2] = request.goal_pos.z

            self.q_goal[0] = request.q1
            self.q_goal[1] = request.q2
            self.q_goal[2] = request.q3

            self.get_logger().info(f'goal pos : {self.goal_pos}')
            self.get_logger().info(f'q goal : {self.q_goal}')

            self.ready = False
            if request.teleop_on:
                self.teleop_on = True
            else:
                self.teleop_on = False

        return response
        
def main(args=None):
    rclpy.init(args=args)
    node = JointstatePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
