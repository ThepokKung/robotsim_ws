#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRIPK
import roboticstoolbox as rtb
from spatialmath import SE3
import numpy as np
from math import pi


class IPKNode(Node):
    def __init__(self):
        super().__init__('ipk_node')

        # Service server
        self.create_service(RRRIPK, '/ipk', self.ipk_callback)

        # Defind DH-Table
        self.robot = rtb.DHRobot([
                rtb.RevoluteMDH(d = 200), # joint 1
                rtb.RevoluteMDH(alpha = -pi/2 ,d = -120 ,offset = -pi/2), # joint 2
                rtb.RevoluteMDH(a = 250 ,d = 100 ,offset = pi/2), # joint 3
                rtb.RevoluteMDH(a = 280 , alpha = pi/2), # End-effector
            ],
            name = "3R_Robot"
        )
        

    def ipk_callback(self,request:RRRIPK.Request, response:RRRIPK.Response):
        self.get_logger().info(f'Service IPK Run')

        taskspace = SE3(request.ipk_mode.pose.position.x,request.ipk_mode.pose.position.y,request.ipk_mode.pose.position.z)
        taskspace = taskspace @ SE3.Rx(request.ipk_mode.pose.orientation.x)
        taskspace = taskspace @ SE3.Ry(request.ipk_mode.pose.orientation.y)
        taskspace = taskspace @ SE3.Rz(request.ipk_mode.pose.orientation.z)

        initial_joint_angles = np.random.uniform(low=-np.pi, high=np.pi, size=4)
        
        print(taskspace)

        q_sol = self.robot.ikine_LM(taskspace,q0=initial_joint_angles)

        self.get_logger().info(f'q sol : {q_sol}')
        response.ipk_q1 = q_sol.q[0]
        response.ipk_q2 = q_sol.q[1]
        response.ipk_q3 = q_sol.q[2]


        if q_sol.success:
            response.ipk_check = True
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = IPKNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
