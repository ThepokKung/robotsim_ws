#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from rrr_robot_interfaces.srv import RRRIPK , RRRInvertKinematics

from functools import partial
from threading import Event


class IPKNode(Node):
    def __init__(self):
        super().__init__('ipk_node')

        # Service server
        self.create_service(RRRIPK, '/ipk_call', self.call_ipk_callback)
        self.create_service(RRRIPK, '/ipk_target', self.ipk_target_callback)

        # Service client
        self.ink_result = MutuallyExclusiveCallbackGroup()
        self.ink_calcalate = self.create_client(RRRInvertKinematics ,'/ink_calculate' ,callback_group = self.ink_result)

        # Variable
        self.mode_call = False
        self.ipk_target = [0.0 ,0.0 ,0.0]
        self.q = [0.0 ,0.0 ,0.0]
        self.invert_find = False


    def ipk_target_callback(self ,request:RRRIPK.Request ,response:RRRIPK.Response):
        if self.mode_call:
            self.ipk_target[0] = request.ipk_target.x
            self.ipk_target[1] = request.ipk_target.y
            self.ipk_target[2] = request.ipk_target.z
            self.get_logger().info(f'IPK Target : {self.ipk_target}')

            goal_pos = RRRInvertKinematics.Request()
            goal_pos.goal_pos.x = self.ipk_target[0]
            goal_pos.goal_pos.y = self.ipk_target[1]
            goal_pos.goal_pos.z = self.ipk_target[2]

            result = self.ink_calcalate.call(goal_pos)          

            self.get_logger().info(f'response : {result.ikn_check}')

            response.ipk_check = result.ikn_check
            response.ipk_q1 = result.q1
            response.ipk_q2 = result.q2
            response.ipk_q3 = result.q3
            self.get_logger().info(f'q_response : {result}')  

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

    # rclpy.spin(node)
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
