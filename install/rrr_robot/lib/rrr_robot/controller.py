#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRMode ,RRRTeleop

from geometry_msgs.msg import PoseStamped

import numpy as np
from math import pi 


class ControllerNode(Node):
    def __init__(self):
        super().__init__('Controller_node')

        # Service server
        self.create_service(RRRMode ,'/robot_mode' ,self.mode_callback)

        # Service client
        self.teleop_call= self.create_client(RRRTeleop ,'/teleop_mode')

        # self.auto_call= self.create_client(RRRTeleop ,'/teleop_mode')

        # Variable
        self.mode = ''
        self.teleop_ref = ['base','hand']
        self.goal_pos = [0.0 ,0.0 ,0.0]

        # Display key for call mode
        self.get_logger().info(f'Mode key :\nTele-operation Mode : Teleop\nAutonomous Mode : Auto')

    def auto_mode(self):
        pass

    def teleop_mode(self, call):
        teleop_msg = RRRTeleop.Request()
        teleop_msg.teleop_run = call
        teleop_msg.frame_ref = self.teleop_ref[0]
        self.teleop_call.call_async(teleop_msg)

    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call
        if self.mode == 'Teleop':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

            self.teleop_mode(True)

        elif self.mode == 'Auto':
            self.get_logger().info(f'Mode call : {self.mode}')    
            response.mode_change = True

            self.teleop_mode(False)
            
        else:
            self.get_logger().info(f'Mode call : {self.mode} not found')
            response.mode_change = False

            self.mode = ''
            self.teleop_mode(False)

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
