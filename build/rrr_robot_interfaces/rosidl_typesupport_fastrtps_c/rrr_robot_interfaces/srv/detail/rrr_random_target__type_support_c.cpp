// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rrr_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RRRRandomTarget_Request__ros_msg_type = rrr_robot_interfaces__srv__RRRRandomTarget_Request;

static bool _RRRRandomTarget_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RRRRandomTarget_Request__ros_msg_type * ros_message = static_cast<const _RRRRandomTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_call
  {
    cdr << (ros_message->target_call ? true : false);
  }

  return true;
}

static bool _RRRRandomTarget_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RRRRandomTarget_Request__ros_msg_type * ros_message = static_cast<_RRRRandomTarget_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: target_call
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->target_call = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t get_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRRRandomTarget_Request__ros_msg_type * ros_message = static_cast<const _RRRRandomTarget_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name target_call
  {
    size_t item_size = sizeof(ros_message->target_call);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RRRRandomTarget_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t max_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: target_call
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrr_robot_interfaces__srv__RRRRandomTarget_Request;
    is_plain =
      (
      offsetof(DataType, target_call) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RRRRandomTarget_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRRRandomTarget_Request = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget_Request",
  _RRRRandomTarget_Request__cdr_serialize,
  _RRRRandomTarget_Request__cdr_deserialize,
  _RRRRandomTarget_Request__get_serialized_size,
  _RRRRandomTarget_Request__max_serialized_size
};

static rosidl_message_type_support_t _RRRRandomTarget_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRRRandomTarget_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRRandomTarget_Request)() {
  return &_RRRRandomTarget_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rrr_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_random_target__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RRRRandomTarget_Response__ros_msg_type = rrr_robot_interfaces__srv__RRRRandomTarget_Response;

static bool _RRRRandomTarget_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RRRRandomTarget_Response__ros_msg_type * ros_message = static_cast<const _RRRRandomTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: random_target_x
  {
    cdr << ros_message->random_target_x;
  }

  // Field name: random_target_y
  {
    cdr << ros_message->random_target_y;
  }

  // Field name: random_target_z
  {
    cdr << ros_message->random_target_z;
  }

  return true;
}

static bool _RRRRandomTarget_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RRRRandomTarget_Response__ros_msg_type * ros_message = static_cast<_RRRRandomTarget_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: random_target_x
  {
    cdr >> ros_message->random_target_x;
  }

  // Field name: random_target_y
  {
    cdr >> ros_message->random_target_y;
  }

  // Field name: random_target_z
  {
    cdr >> ros_message->random_target_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t get_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRRRandomTarget_Response__ros_msg_type * ros_message = static_cast<const _RRRRandomTarget_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name random_target_x
  {
    size_t item_size = sizeof(ros_message->random_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name random_target_y
  {
    size_t item_size = sizeof(ros_message->random_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name random_target_z
  {
    size_t item_size = sizeof(ros_message->random_target_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RRRRandomTarget_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t max_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: random_target_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: random_target_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: random_target_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrr_robot_interfaces__srv__RRRRandomTarget_Response;
    is_plain =
      (
      offsetof(DataType, random_target_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RRRRandomTarget_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrr_robot_interfaces__srv__RRRRandomTarget_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRRRandomTarget_Response = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget_Response",
  _RRRRandomTarget_Response__cdr_serialize,
  _RRRRandomTarget_Response__cdr_deserialize,
  _RRRRandomTarget_Response__get_serialized_size,
  _RRRRandomTarget_Response__max_serialized_size
};

static rosidl_message_type_support_t _RRRRandomTarget_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRRRandomTarget_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRRandomTarget_Response)() {
  return &_RRRRandomTarget_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rrr_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rrr_robot_interfaces/srv/rrr_random_target.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RRRRandomTarget__callbacks = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRRandomTarget_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRRandomTarget_Response)(),
};

static rosidl_service_type_support_t RRRRandomTarget__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RRRRandomTarget__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRRandomTarget)() {
  return &RRRRandomTarget__handle;
}

#if defined(__cplusplus)
}
#endif
