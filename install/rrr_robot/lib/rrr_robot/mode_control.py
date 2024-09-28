#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRMode , RRRIPK 
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
        self.create_service(RRRMode, '/robot_mode', self.mode_callback)
        self.create_service(RRRIPK, '/ipk_target', self.ipk_target_callback)

        # Service client
        self.ipk = self.create_client(RRRIPK, '/ipk')

        self.mode = ''
        # self.ipk_target = PoseStamped()

    def call_mode_IPK(self):
        self.get_logger().info(f'Mode IPK Run')
        goal_pos = RRRIPK.Request()
        goal_pos = self.ipk_target
        self.get_logger().info(f'goal pos : {goal_pos}')
        self.ipk_responce = self.ipk.call_async(goal_pos)
        self.ipk_responce.add_done_callback(partial(self.ipk_callback))
        

    def ipk_callback(self, ipk_responce):
        try:
            response = ipk_responce.result()
            print(response.ipk_check)
        except Exception as e:
            self.get_logger().info(f'Service call failed {e}')
        return



    def ipk_target_callback(self,request:RRRIPK.Request,  response:RRRIPK.Response):
        if self.mode == 'IPK':
            self.ipk_target = request.ipk_target
            self.call_mode_IPK()
        else:
            self.get_logger().info(f'IPK Mode not run')
        return response

    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call
        if self.mode == 'IPK':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True
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
