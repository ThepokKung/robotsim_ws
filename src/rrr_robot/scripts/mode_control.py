#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRMode


class ModeNode(Node):
    def __init__(self):
        super().__init__('mode_node')

        # Service server
        self.create_service(RRRMode, '/robot_mode', self.mode_callback)

        # Variable
        self.mode = ''

        # Display all mode can call
        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')

    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call
        response.mode_change = False
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
            self.get_logger().info(f'Mode {self.mode} not found')
            self.mode = ''
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ModeNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
