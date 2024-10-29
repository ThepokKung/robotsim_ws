#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped, Point

from rrr_robot_interfaces.srv import RRRTargetPath

import numpy as np
import yaml
import os
from ament_index_python import get_package_share_directory


class TargetBagNode(Node):
    def __init__(self):
        super().__init__('target_bag_node')

        # Yaml path
        self.declare_parameter('file', 'target_log.yaml')
        pkg_name = 'rrr_robot'

        target_log_path = get_package_share_directory(pkg_name)
        ws_path, w = target_log_path.split('install')

        file = self.get_parameter('file').value
        self.target_log_path = os.path.join(ws_path, 'src', pkg_name, 'config', file)

        # Test only
        self.get_logger().info(f'Save target log as : {self.target_log_path}')

        # Service server
        self.create_service(RRRTargetPath, '/SavePath', self.save_path_callback)
        self.create_service(RRRTargetPath, '/call_path', self.call_path_callback)

        # Pub Topic
        self.end_effector_pub = self.create_publisher(PoseStamped, "/end_effector", 10)

        # Sub Topic
        self.create_subscription(Point, '/current_pose', self.current_pose_callback, 10)

        # Timmer
        self.dt = 0.01
        # self.create_timer(self.dt, self.sim_loop)
        self.save = False
        self.call_path = False
        self.save_path = []
        self.path_msg = [0.0, 0.0, 0.0]

    def current_pose_callback(self, msg: Point):
        if self.save:
            self.save_path.append([msg.x, msg.y, msg.z])
            self.save_to_yaml()
            self.save = False

    """ START YAML """

    def save_to_yaml(self):
        try:
            with open(self.target_log_path, 'w') as file:
                yaml.dump({'target': self.save_path}, file)
        except Exception as e:
            self.get_logger().error(f'Failed to save path: {e}')

    def load_from_yaml(self):
        try:
            with open(self.target_log_path, 'r') as file:
                data = yaml.safe_load(file)
                self.save_path = data.get('target', [])
        except Exception as e:
            self.get_logger().error(f'Failed to load path: {e}')

    def update_yaml(self):
        try:
            with open(self.target_log_path, 'w') as file:
                yaml.dump({'target': self.save_path}, file)
        except Exception as e:
            self.get_logger().error(f'Failed to update YAML file: {e}')

    """ END YAML """

    def save_path_callback(self, request: RRRTargetPath.Request, response: RRRTargetPath.Response):
        self.save = request.save_path
        response.message = f'save path is : {self.save}'
        response.all_done = True
        return response

    def call_path_callback(self, request: RRRTargetPath.Request, response: RRRTargetPath.Response):
        self.call_path = request.call_path

        if self.call_path == True:
            # Check save_path Again if not value
            if not self.save_path:
                self.load_from_yaml()

            if len(self.save_path) > 0:
                # Sent here
                msg = PoseStamped()
                msg.header.stamp = self.get_clock().now().to_msg()
                msg.header.frame_id = "link_0"

                msg.pose.position.x = self.save_path[0][0]
                msg.pose.position.y = self.save_path[0][1]
                msg.pose.position.z = self.save_path[0][2]

                self.end_effector_pub.publish(msg)

                # remove data
                self.path_msg[0] = self.save_path.pop(0)

                # remove data on yaml
                self.update_yaml()

                response.message = "Target pub"
                response.all_done = False
            else:
                response.message = "Out of Target"
                response.all_done = True
            return response
        else:
            response.message = "Don't call path"
            response.all_done = False
            return response

def main(args=None):
    rclpy.init(args=args)
    node = TargetBagNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
