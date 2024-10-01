#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRInvertKinematics

import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np
from math import pi 

class InvertKinmatics(Node):
    def __init__(self):
        super().__init__('invert_kinematics')

        # Service server
        self.create_service(RRRInvertKinematics, '/ink_calculate', self.invert_kinematics_callback)

        # Defind DH-Table
        self.robot = rtb.DHRobot([
                rtb.RevoluteMDH(d = 200), # joint 1
                rtb.RevoluteMDH(alpha = -pi/2 ,d = -120 ,offset = -pi/2), # joint 2
                rtb.RevoluteMDH(a = 250 ,d = 100 ,offset = pi/2), # joint 3
                rtb.RevoluteMDH(alpha = pi/2, d = 280), # End-effector
            ],
            name = "3R_Robot"
        )



    def invert_kinematics_callback(self ,request:RRRInvertKinematics.Request ,response:RRRInvertKinematics.Response):
        goal_x = request.goal_pos.x
        goal_y = request.goal_pos.y
        goal_z = request.goal_pos.z
        
        T_goal = SE3(goal_x,goal_y,goal_z)

        q_sol = self.robot.ikine_LM(T_goal, q0=np.random.uniform(-pi,pi,size=4), mask=[1, 1, 1, 0, 0, 0])

        self.get_logger().info(f'Success to find q_sol : {q_sol.success}')
        response.ikn_check = q_sol.success

        if q_sol.success:
                response.q1 = q_sol.q[0]
                response.q2 = q_sol.q[1]
                response.q3 = q_sol.q[2]
                self.get_logger().info(f'q : {q_sol.q}')
        
        return response

def main(args=None):
    rclpy.init(args=args)
    node = InvertKinmatics()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
