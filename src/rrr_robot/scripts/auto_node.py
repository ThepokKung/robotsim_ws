#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node

from rclpy.executors import MultiThreadedExecutor
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup

from std_msgs.msg import Bool

from rrr_robot_interfaces.srv import RRRAuto , RRRInvertKinematics , RRRPubq


class AutoNode(Node):
    def __init__(self):
        super().__init__('auto_node')

        # Service server
        self.create_service(RRRAuto, '/auto_call', self.call_auto_callback)

        # Service client
        self.ink_result = MutuallyExclusiveCallbackGroup()
        self.ink_calcalate = self.create_client(RRRInvertKinematics ,'/ink_calculate' ,callback_group = self.ink_result)

        self.q_state = MutuallyExclusiveCallbackGroup()
        self.q_call = self.create_client(RRRPubq ,'/q_state' ,callback_group = self.q_state)

        self.random_target = MutuallyExclusiveCallbackGroup()
        self.target_call = self.create_client(RRRAuto ,'/random' ,callback_group = self.random_target)

        # Sub Topic
        self.create_subscription(Bool, '/robot_ready', self.robot_ready_callback, 10)

        # Variable
        self.mode_call = False
        self.auto_target = [0.0 ,0.0 ,0.0]
        self.q = [0.0 ,0.0 ,0.0]
        self.invert_find = False
        self.ready = False

    def robot_ready_callback(self,msg:Bool):
        self.ready = msg.data

        if self.mode_call and self.ready:
            call_target = RRRAuto.Request()
            call_target.target_call = True

            target = self.target_call.call(call_target)

            self.auto_target[0] = target.random_target_x
            self.auto_target[1] = target.random_target_y
            self.auto_target[2] = target.random_target_z

            self.get_logger().info(f'Auto target : {self.auto_target}')

            goal_pos = RRRInvertKinematics.Request()
            goal_pos.goal_pos.x = self.auto_target[0]
            goal_pos.goal_pos.y = self.auto_target[1]
            goal_pos.goal_pos.z = self.auto_target[2]

            result = self.ink_calcalate.call(goal_pos)

            q_pub = RRRPubq.Request()
            q_pub.goal_pos.x = self.auto_target[0]
            q_pub.goal_pos.y = self.auto_target[1]
            q_pub.goal_pos.z = self.auto_target[2]
            q_pub.q1 = result.q1
            q_pub.q2 = result.q2
            q_pub.q3 = result.q3

            self.q_call.call_async(q_pub) 

    def call_auto_callback(self ,request:RRRAuto.Request ,response:RRRAuto.Response):
        if request.auto_call:
            self.mode_call = True
            self.get_logger().info(f'Mode Auto Start')
        elif self.mode_call:
            self.mode_call = False
            self.get_logger().info(f'Mode Auto Stop')
        return response


def main(args=None):
    rclpy.init(args=args)
    node = AutoNode()

    # rclpy.spin(node)
    executor = MultiThreadedExecutor()
    executor.add_node(node)
    executor.spin()

    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
