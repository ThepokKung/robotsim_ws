// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrr_robot_interfaces:srv/RRRMode.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_H_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_H_

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

/// Struct defined in srv/RRRMode in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRMode_Request
{
  rosidl_runtime_c__String mode_call;
} rrr_robot_interfaces__srv__RRRMode_Request;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRMode_Request.
typedef struct rrr_robot_interfaces__srv__RRRMode_Request__Sequence
{
  rrr_robot_interfaces__srv__RRRMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRMode_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/RRRMode in the package rrr_robot_interfaces.
typedef struct rrr_robot_interfaces__srv__RRRMode_Response
{
  bool mode_change;
} rrr_robot_interfaces__srv__RRRMode_Response;

// Struct for a sequence of rrr_robot_interfaces__srv__RRRMode_Response.
typedef struct rrr_robot_interfaces__srv__RRRMode_Response__Sequence
{
  rrr_robot_interfaces__srv__RRRMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrr_robot_interfaces__srv__RRRMode_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__STRUCT_H_
