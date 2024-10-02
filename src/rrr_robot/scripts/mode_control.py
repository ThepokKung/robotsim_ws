#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRMode , RRRIPK ,RRRAuto


class ModeNode(Node):
    def __init__(self):
        super().__init__('mode_node')

        # Service server
        self.create_service(RRRMode, '/robot_mode', self.mode_callback)

        # Service client
        self.call_ipk = self.create_client(RRRIPK, '/ipk_call')
        self.call_auto = self.create_client(RRRAuto, '/auto_call')

        # Variable
        self.mode = ''

        # Display all mode can call
        self.get_logger().info(f'Mode key :\n Inverse Pose Kinematics Mode : IPK\n Tele-operation Mode : Teleop\n Autonomous Mode : Auto')
    

    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call
        response.mode_change = False

        # Defind msg for call Mode
        msg_ipk = RRRIPK.Request()
        msg_auto = RRRAuto.Request()

        if self.mode == 'IPK':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

            # Start IPK Node
            msg_ipk.ipk_call = True
            self.call_ipk.call_async(msg_ipk)

            # Stop Auto Mode
            msg_auto.auto_call = False
            self.call_auto.call_async(msg_auto)

        elif self.mode == 'Teleop':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

            # Stop IPK Node
            msg_ipk.ipk_call = False
            self.call_ipk.call_async(msg_ipk)

            # Stop Auto Mode
            msg_auto.auto_call = False
            self.call_auto.call_async(msg_auto)


        elif self.mode == 'Auto':
            self.get_logger().info(f'Mode call : {self.mode}')    
            response.mode_change = True

            # Start Auto Mode
            msg_auto.auto_call = True
            self.call_auto.call_async(msg_auto)

            # Stop IPK Node
            msg_ipk.ipk_call = False
            self.call_ipk.call_async(msg_ipk)

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
