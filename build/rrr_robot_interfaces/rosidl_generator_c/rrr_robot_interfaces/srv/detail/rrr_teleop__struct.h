// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRTeleop.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_ref'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RRRTeleop in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRTeleop_Request
{
  bool teleop_run;
  rosidl_runtime_c__String frame_ref;
} rrr_robot_interfaces__srv__RRRTeleop_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRTeleop_Request.
typedef struct rrr_robot_interfaces__srv__RRRTeleop_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRTeleop_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRTeleop_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RRRTeleop in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRTeleop_Response
{
  uint8_t structure_needs_at_least_one_member;
} rrr_robot_interfaces__srv__RRRTeleop_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRTeleop_Response.
typedef struct rrr_robot_interfaces__srv__RRRTeleop_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRTeleop_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRTeleop_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__STRUCT_H_
