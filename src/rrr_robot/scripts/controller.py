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

        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')
    
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
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
