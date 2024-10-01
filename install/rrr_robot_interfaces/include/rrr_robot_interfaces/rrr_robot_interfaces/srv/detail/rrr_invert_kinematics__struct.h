// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRInvertKinematics.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_pos'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/RRRInvertKinematics in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRInvertKinematics_Request
{
  geometry_msgs__msg__Point goal_pos;
} rrr_robot_interfaces__srv__RRRInvertKinematics_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRInvertKinematics_Request.
typedef struct rrr_robot_interfaces__srv__RRRInvertKinematics_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRInvertKinematics_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRInvertKinematics_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RRRInvertKinematics in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRInvertKinematics_Response
{
  bool ikn_check;
  double q1;
  double q2;
  double q3;
} rrr_robot_interfaces__srv__RRRInvertKinematics_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRInvertKinematics_Response.
typedef struct rrr_robot_interfaces__srv__RRRInvertKinematics_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRInvertKinematics_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRInvertKinematics_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_INVERT_KINEMATICS__STRUCT_H_
