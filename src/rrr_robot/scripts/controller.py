#!/usr/bin/python3

import rclpy
from rclpy.node import Node
from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rrr_robot_interfaces.srv import RRRMode ,RRRTeleop ,RRRAuto


class ControllerNode(Node):
    def __init__(self):
        super().__init__('Controller_node')

        # Service server
        self.create_service(RRRMode ,'/Mode' ,self.mode_callback )
        self.create_service(RRRTeleop ,'/Ref' ,self.ref_callback )

        # Service client
        self.teleop_call_group = MutuallyExclusiveCallbackGroup()
        self.teleop_call= self.create_client(RRRTeleop ,'/teleop_mode',callback_group = self.teleop_call_group)
        self.auto_call_group = MutuallyExclusiveCallbackGroup()
        self.auto_call= self.create_client(RRRAuto ,'/auto_mode',callback_group = self.auto_call_group)

        # Variable
        self.mode = ''
        self.teleop_ref = ['base','hand']
        self.teleop_select = 0
        self.goal_pos = [0.0 ,0.0 ,0.0]

        # Display key for call mode
        self.get_logger().info(f'Mode key :\nTele-operation Mode : Teleop\nAutonomous Mode : Auto')

    def auto_mode(self,call):
        auto_msg = RRRAuto.Request()
        auto_msg.auto_run = call
        self.auto_call.call_async(auto_msg)

    def teleop_mode(self, call):
        teleop_msg = RRRTeleop.Request()
        teleop_msg.teleop_run = call
        teleop_msg.frame_ref = self.teleop_ref[self.teleop_select]
        self.teleop_call.call_async(teleop_msg)

    def mode_callback(self, request:RRRMode.Request, response:RRRMode.Response):
        self.mode = request.mode_call
        ref = request.ref
        if self.mode == 'Teleop':
            self.get_logger().info(f'Mode call : {self.mode}')
            response.mode_change = True

            self.teleop_mode(True)
            self.auto_mode(False)

        elif self.mode == 'Auto':
            self.get_logger().info(f'Mode call : {self.mode}')    
            response.mode_change = True

            self.teleop_mode(False)
            self.auto_mode(True)
            
        else:
            self.get_logger().info(f'Mode call : {self.mode} not found')
            response.mode_change = False

            self.mode = ''
            self.teleop_mode(False)
            self.auto_mode(False)

        return response
    
    def ref_callback(self,request:RRRTeleop.Request , response:RRRTeleop.Response):
        ref_select = request.frame_ref
        if self.mode == 'Teleop':
            if ref_select == 'base':
                self.teleop_select = 0
            elif ref_select == 'hand':
                self.teleop_select = 1
            self.teleop_mode(True)
        return response

def main(args=None):
    rclpy.init(args=args)
    node = ControllerNode()

    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()
    
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
