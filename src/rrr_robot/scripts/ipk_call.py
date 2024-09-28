#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRIPK


class IPKNode(Node):
    def __init__(self):
        super().__init__('ipk_node')

        # Service server
        self.create_service(RRRIPK, '/ipk', self.ipk_callback)

    def ipk_callback(self,request:RRRIPK.Request, response:RRRIPK.Response):
        if request.ipk_mode.header.frame_id == '0':
            response.ipk_check = True
            print(response.ipk_check)
            self.get_logger().info(f'Service IPK Run')
        return response
    
def main(args=None):
    rclpy.init(args=args)
    node = IPKNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
