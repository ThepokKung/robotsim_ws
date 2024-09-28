// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRService.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode_call'
#include "rosidl_runtime_c/string.h"
// Member 'target'
// Member 'ipk_mode'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"

/// Struct defined in srv/RRRService in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRService_Request
{
  rosidl_runtime_c__String mode_call;
  geometry_msgs__msg__PoseStamped target;
  geometry_msgs__msg__PoseStamped ipk_mode;
} rrr_robot_interfaces__srv__RRRService_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRService_Request.
typedef struct rrr_robot_interfaces__srv__RRRService_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'ipk_sol'
#include "sensor_msgs/msg/detail/joint_state__struct.h"

/// Struct defined in srv/RRRService in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRService_Response
{
  bool mode_change;
  bool ipk_check;
  sensor_msgs__msg__JointState ipk_sol;
} rrr_robot_interfaces__srv__RRRService_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRService_Response.
typedef struct rrr_robot_interfaces__srv__RRRService_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__STRUCT_H_
