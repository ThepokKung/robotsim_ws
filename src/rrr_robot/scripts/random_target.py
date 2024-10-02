#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRRandomTarget

from geometry_msgs.msg import PoseStamped

from ament_index_python.packages import get_package_share_directory

import numpy as np
import os


class RandomTarget(Node):
    def __init__(self):
        super().__init__('random_target')

        # Service server
        self.create_service(RRRRandomTarget, '/random', self.random_target_callback)

        # Pub Topic
        self.target_pub = self.create_publisher(PoseStamped, '/target', 10)

        # Timmer 
        self.dt = 0.01
        self.create_timer(self.dt, self.timer_callback)
        
        # Find the path to the package
        path = os.path.join(
            get_package_share_directory('rrr_robot'),
            'config',
            'workspace_pos.npy'
        )

        # Load the numpy file
        self.workspace = np.load(path)
        
        # Variable
        self.target = PoseStamped()

        self.get_logger().info(f'Random Target Start Node')

    def random_target_callback(self,request:RRRRandomTarget.Request, response:RRRRandomTarget.Response):
        if request.target_call:

            workspace_index = np.random.randint(len(self.workspace))
            target = self.workspace[workspace_index]

            self.get_logger().info(f'target : {target}')

            response.random_target_x = target[0]
            response.random_target_y = target[1]
            response.random_target_z = target[2]

            self.target.header.frame_id = 'link_0'
            self.target.pose.position.x = target[0]/1000
            self.target.pose.position.y = target[1]/1000
            self.target.pose.position.z = target[2]/1000

        return response
    
    def timer_callback(self):
        self.target_pub.publish(self.target)
    

def main(args=None):
    rclpy.init(args=args)
    node = RandomTarget()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()