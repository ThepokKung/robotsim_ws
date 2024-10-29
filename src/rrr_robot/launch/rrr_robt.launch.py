from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import ExecuteProcess

def generate_launch_description():

    luanch_description = LaunchDescription()

    package_name = 'rrr_robot'
    executable_name = ['controller.py' ,'invert_kinematics.py' ,'target_bag.py' ,'jointstate_script.py']
    name = ['controller' ,'invert_kinematics' ,'target_bag' ,'jointstate_script']


    for i in range(len(executable_name)):
        node_call = Node(
            package= package_name,
            namespace= '',
            executable= executable_name[i],
            name= name[i],
        )
        luanch_description.add_action(node_call)

    return luanch_description