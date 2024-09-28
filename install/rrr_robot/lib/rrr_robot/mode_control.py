#!/usr/bin/python3

from rrr_robot.dummy_module import dummy_function, dummy_var
import rclpy
from rclpy.node import Node
from rrr_robot_interfaces.srv import RRRMode , RRRIPK ,RRRIPKTarget
from sensor_msgs.msg import JointState
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
        self.create_service(RRRIPKTarget, '/ipk_target', self.ipk_target_callback)

        # Service client
        self.ipk = self.create_client(RRRIPK, '/ipk')

        self.joint_pub = self.create_publisher(JointState, "/joint_states", 10)

        self.dt = 0.01
        self.create_timer(self.dt,self.sim_loop)

        self.mode = ''
        self.ipk_target = RRRIPK.Request()

        self.q = [1.0, 1.5, 2.0]
        self.q_goal = [0.0 , 0.0 , 0.0]
        self.name = ["joint_1", "joint_2", "joint_3"]

    def call_mode_IPK(self):
        self.get_logger().info(f'Mode IPK Run')
        self.ipk_responce = self.ipk.call_async(self.ipk_target)
        self.ipk_responce.add_done_callback(partial(self.ipk_callback))
        

    def ipk_callback(self, ipk_responce):
        try:
            response = ipk_responce.result()
            check = response.ipk_check
            q = [0,0,0]
            q[0] = response.ipk_q1
            q[1] = response.ipk_q2
            q[2] = response.ipk_q3
            self.get_logger().info(f'IPK Check : {check}')
            if check:
                self.get_logger().info(f'Q sol : {q}')
                self.q = q
        except Exception as e:
            self.get_logger().info(f'Service call failed {e}')
        return

    def ipk_target_callback(self,request:RRRIPKTarget.Request,  response:RRRIPKTarget.Response):
        if self.mode == 'IPK':
            self.ipk_target.ipk_mode = request.ipk_target
            self.call_mode_IPK()
        else:
            self.get_logger().info(f'IPK Mode not run')
        return response
    
    def sim_loop(self):
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()

        for i in range(len(self.q)):
            msg.position.append(self.q[i])
            msg.name.append(self.name[i])
        self.joint_pub.publish(msg)

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
