// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRIPK.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ipk_mode'
// Member 'ipk_target'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/RRRIPK in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Request
{
  geometry_msgs__msg__PoseStamped ipk_mode;
  geometry_msgs__msg__PoseStamped ipk_target;
} rrr_robot_interfaces__srv__RRRIPK_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRIPK_Request.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRIPK_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRIPK_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ipk_sol'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/RRRIPK in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Response
{
  bool ipk_check;
  sensor_msgs__msg__JointState ipk_sol;
} rrr_robot_interfaces__srv__RRRIPK_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRIPK_Response.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRIPK_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRIPK_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__STRUCT_H_
