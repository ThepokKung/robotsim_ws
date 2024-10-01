#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRIPK


class IPKNode(Node):
    def __init__(self):
        super().__init__('ipk_node')

        # Service server
        self.create_service(RRRIPK, '/ipk_call', self.call_ipk_callback)
        self.create_service(RRRIPK, '/ipk_target', self.ipk_target_callback)

        # Variable
        self.mode_call = False
        self.ipk_target = [0.0 ,0.0 ,0.0]

    def ipk_target_callback(self ,request:RRRIPK.Request ,response:RRRIPK.Response):
        if self.mode_call:
            self.ipk_target[0] = request.ipk_target_x
            self.ipk_target[1] = request.ipk_target_y
            self.ipk_target[2] = request.ipk_target_z
            self.get_logger().info(f'IPK Target : {self.ipk_target}')

        return response
    def call_ipk_callback(self ,request:RRRIPK.Request ,response:RRRIPK.Response):
        if request.ipk_call:
            self.mode_call = True
            self.get_logger().info(f'Mode IPK Start')
        else :
            self.mode_call = False
            self.get_logger().info(f'Mode IPK Stop')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = IPKNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
