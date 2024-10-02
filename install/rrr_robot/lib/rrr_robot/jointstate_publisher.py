#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import JointState
from std_msgs.msg import Bool

from rrr_robot_interfaces.srv import RRRPubq

import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np
from math import pi 


class JointstatePublisher(Node):
    def __init__(self):
        super().__init__('jointstate_publisher')

        # Service server
        self.create_service(RRRPubq, '/q_state', self.q_state_callback)

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.ready_pub = self.create_publisher(Bool, "/robot_ready", 10)

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
        
        # Variable
        self.name = ["joint_1", "joint_2", "joint_3"]
        self.q = [0.0, 0.0, 0.0]
        self.q_goal = [0.0 , 0.0 , 0.0]
        self.goal_pos = [0.0 , 0.0 , 0.0]
        self.k = 1

        self.ready = True

    def sim_loop(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        msg_ready = Bool()

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
        pos_check = self.goal_pos - current_pos.t

        if pos_check[0] <= 0.1 and pos_check[1] <= 0.1 and pos_check[2] <= 0.1 and self.ready == False:
            self.ready = True
            self.get_logger().info(f'Stop Run')

        msg_ready.data = self.ready
        self.ready_pub.publish(msg_ready)

    def q_state_callback(self ,request:RRRPubq.Request ,response:RRRPubq.Response):
        if self.ready:
            self.goal_pos[0] = request.goal_pos.x
            self.goal_pos[1] = request.goal_pos.y 
            self.goal_pos[2] = request.goal_pos.z 

            self.q_goal[0] = request.q1
            self.q_goal[1] = request.q2
            self.q_goal[2] = request.q3

            self.ready = False
            self.get_logger().info(f'Start Run')

            # response.run_check = True

        return response

def main(args=None):
    rclpy.init(args=args)
    node = JointstatePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
