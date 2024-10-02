#!/usr/bin/python3

import rclpy
from rclpy.node import Node

from rrr_robot_interfaces.srv import RRRTargetPub

from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

import roboticstoolbox as rtb
from math import pi 

class JointstatePublisher(Node):
    def __init__(self):
        super().__init__('jointstate_publisher')

        # Service server
        self.create_service(RRRTargetPub ,'/target_send' ,self.target_callback)

        # Service client
        self.run_end = self.create_client(RRRTargetPub ,'/robot_ready')

        # Pub Topic
        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)
        self.end_effector_pub = self.create_publisher(PoseStamped, "/end_effector", 10)
        
        # Timmer 
        self.dt = 0.01
        self.create_timer(self.dt, self.sim_loop)

        # Defind DH-Table
        self.robot = rtb.DHRobot([
                rtb.RevoluteMDH(d = 200), # joint 1
                rtb.RevoluteMDH(alpha = -pi/2 ,d = -120 ,offset = -pi/2), # joint 2
                rtb.RevoluteMDH(a = 250 ,d = 100 ,offset = pi/2), # joint 3
                rtb.RevoluteMDH(alpha = pi/2, d = 280), # End-effector
            ],
            name = "3R_Robot"
        )

        # Variable
        self.q_goal = [0.0 ,0.0 ,0.0]
        self.goal_pos = [0.0 ,0.0 ,0.0]
        
        self.q = [0.0 ,0.0 ,0.0]
        self.cmd_vel = [0.0 ,0.0 ,0.0]

        self.name = ["joint_1" ,"joint_2" ,"joint_3"]
        self.kp = 1.5

        self.ready = True

        # Display Node start
        self.get_logger().info(f'JointState publisher Start Node')

    def sim_loop(self):
        joint_msg = JointState()
        joint_msg.header.stamp = self.get_clock().now().to_msg()

        end_effector_msg = PoseStamped()
        end_effector_msg.header.stamp = self.get_clock().now().to_msg()
        end_effector_msg.header.frame_id = 'link_0'

        q_d = [0.0 ,0.0 ,0.0]
        q_d[0] = self.q_goal[0] - self.q[0]
        q_d[1] = self.q_goal[1] - self.q[1]
        q_d[2] = self.q_goal[2] - self.q[2]

        self.q[0] = self.q[0] + (q_d[0] * self.dt * self.kp)
        self.q[1] = self.q[1] + (q_d[1] * self.dt * self.kp)
        self.q[2] = self.q[2] + (q_d[2] * self.dt * self.kp)

        for i in range(len(self.q)):
            joint_msg.position.append(self.q[i])
            joint_msg.name.append(self.name[i])

        current_pos = self.robot.fkine([self.q[0],self.q[1],self.q[2],0])
        pos_check = self.goal_pos - current_pos.t

        if pos_check[0] <= 0.1 and pos_check[1] <= 0.1 and pos_check[2] <= 0.1 and self.ready == False:
            self.ready = True

            ready_msg = RRRTargetPub.Request()
            ready_msg.run_end = True
            self.run_end.call_async(ready_msg)

        end_effector_msg.pose.position.x = current_pos.t[0]/1000
        end_effector_msg.pose.position.y = current_pos.t[1]/1000
        end_effector_msg.pose.position.z = current_pos.t[2]/1000

        self.end_effector_pub.publish(end_effector_msg)
        self.joint_pub.publish(joint_msg)

    def target_callback(self ,request:RRRTargetPub.Request ,response:RRRTargetPub.Response):
        if self.ready:
            self.goal_pos[0] = request.goal_pos.x
            self.goal_pos[1] = request.goal_pos.y
            self.goal_pos[2] = request.goal_pos.z

            self.q_goal[0] = request.q1
            self.q_goal[1] = request.q2
            self.q_goal[2] = request.q3

            self.get_logger().info(f'goal pos : {self.goal_pos}')
            self.get_logger().info(f'q goal : {self.q_goal}')

            self.ready = False

        return response
        
def main(args=None):
    rclpy.init(args=args)
    node = JointstatePublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__=='__main__':
    main()
