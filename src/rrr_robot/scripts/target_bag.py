#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from geometry_msgs.msg import PoseStamped , Point

from rrr_robot_interfaces.srv import RRRTargetPath

class TargetBagNode(Node):
    def __init__(self):
        super().__init__('target_bag_node')

        # Service server
        self.create_service(RRRTargetPath ,'/save_path' ,self.save_path_callback)
        self.create_service(RRRTargetPath ,'/call_path' ,self.call_path_callback)

        # Pub Topic
        self.end_effector_pub = self.create_publisher(PoseStamped, "/end_effector", 10)

        # Sub Topic
        self.create_subscription(Point, '/current_pose', self.current_pose_callback, 10)

        # Timmer 
        self.dt = 0.01
        self.create_timer(self.dt, self.sim_loop)
        self.save = False
        self.call_path = False
        self.save_path = []
        self.path_msg = [0.0 , 0.0 ,0.0]

    def current_pose_callback(self, msg:Point):
        if self.save:
            self.save_path.append([msg.x,msg.y,msg.z])
            self.save = False
    
    def save_path_callback(self, request:RRRSavePath.Request, response:RRRSavePath.Response):
        self.save = request.save_path

        return response
        
    def call_path_callback(self, request:RRRSavePath.Request, response:RRRSavePath.Response):
        self.call_path = request.call_path
        if len(self.save_path) > 0:
            self.path_msg[0] = self.save_path.pop(0)[0]
            self.path_msg[1] = self.save_path.pop(0)[1]
            self.path_msg[2] = self.save_path.pop(0)[2]
        else:
            response.all_done = True
        return response

    def sim_loop(self):
        end_effector_msg = PoseStamped()
        end_effector_msg.header.stamp = self.get_clock().now().to_msg()
        end_effector_msg.header.frame_id = 'link_0'

        end_effector_msg.pose.position.x = self.path_msg[0]
        end_effector_msg.pose.position.y = self.path_msg[1]
        end_effector_msg.pose.position.z = self.path_msg[2]

        self.end_effector_pub.publish(end_effector_msg)

def main(args=None):
    rclpy.init(args=args)
    node = TargetBagNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
