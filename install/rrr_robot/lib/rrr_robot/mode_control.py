#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRService
from geometry_msgs.msg import PoseStamped
from functools import partial 


class ModeControl(Node):
    def __init__(self):
        super().__init__('mode_control')
        
        self.get_logger().info(f'Mode key :\n \
                               Inverse Pose Kinematics Mode : IPK\n \
                               Tele-operation Mode : Teleop\n \
                               Autonomous Mode : Auto')
        # Service server
        self.create_service(RRRService, '/robot_mode', self.mode_callback)
        self.create_service(RRRService, '/target_ipk', self.target_ipk_callback)

        # Service client
        self.ipk = self.create_client(RRRService, '/ipk')

        self.mode = ''
        self.target = PoseStamped()

    def call_mode_IPK(self):
        self.get_logger().info(f'Mode IPK Run')
        gold_pos = RRRService.Request()
        gold_pos.ipk_mode.pose = self.target.pose
        self.repon = self.ipk.call_async(gold_pos)
        self.repon.add_done_callback(partial(self.ipk_callback))
    
    def ipk_callback(self, repon):
        try:
            response = repon.result()
            print(response.ipk_check)
        except Exception as e:
            self.get_logger().info(f'Service call failed {e}')


    def target_ipk_callback(self,request:RRRService.Request, response:RRRService.Response):
        if self.mode == 'IPK':
            self.target = request.target
            self.call_mode_IPK()
        else:
            self.get_logger().info(f'No Mode call')
        return response

    def mode_callback(self, request:RRRService.Request, response:RRRService.Response):
        self.mode = request.mode_call
        if self.mode == 'IPK':
            self.get_logger().info(f'Mode call : {self.mode}')
        else:
            self.get_logger().info(f'Mode call : Fail')
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ModeControl()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
