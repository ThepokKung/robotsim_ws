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
// Member 'ipk_target'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in srv/RRRIPK in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Request
{
  bool ipk_call;
  geometry_msgs__msg__Point ipk_target;
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

/// Struct defined in srv/RRRIPK in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRIPK_Response
{
  bool ipk_check;
  double ipk_q1;
  double ipk_q2;
  double ipk_q3;
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
