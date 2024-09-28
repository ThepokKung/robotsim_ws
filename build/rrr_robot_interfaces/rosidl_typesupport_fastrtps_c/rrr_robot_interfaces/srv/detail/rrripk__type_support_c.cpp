// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rrr_robot_interfaces:srv/RRRIPK.idl
// generated code does not contain a copyright notice
#include "rrr_robot_interfaces/srv/detail/rrripk__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rrr_robot_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rrr_robot_interfaces/srv/detail/rrripk__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrripk__functions.h"
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


using _RRRIPK_Request__ros_msg_type = rrr_robot_interfaces__srv__RRRIPK_Request;

static bool _RRRIPK_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RRRIPK_Request__ros_msg_type * ros_message = static_cast<const _RRRIPK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ipk_target_x
  {
    cdr << ros_message->ipk_target_x;
  }

  // Field name: ipk_target_y
  {
    cdr << ros_message->ipk_target_y;
  }

  // Field name: ipk_target_z
  {
    cdr << ros_message->ipk_target_z;
  }

  return true;
}

static bool _RRRIPK_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RRRIPK_Request__ros_msg_type * ros_message = static_cast<_RRRIPK_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: ipk_target_x
  {
    cdr >> ros_message->ipk_target_x;
  }

  // Field name: ipk_target_y
  {
    cdr >> ros_message->ipk_target_y;
  }

  // Field name: ipk_target_z
  {
    cdr >> ros_message->ipk_target_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t get_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRRIPK_Request__ros_msg_type * ros_message = static_cast<const _RRRIPK_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ipk_target_x
  {
    size_t item_size = sizeof(ros_message->ipk_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipk_target_y
  {
    size_t item_size = sizeof(ros_message->ipk_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipk_target_z
  {
    size_t item_size = sizeof(ros_message->ipk_target_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RRRIPK_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t max_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Request(
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

  // member: ipk_target_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ipk_target_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ipk_target_z
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
    using DataType = rrr_robot_interfaces__srv__RRRIPK_Request;
    is_plain =
      (
      offsetof(DataType, ipk_target_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RRRIPK_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRRIPK_Request = {
  "rrr_robot_interfaces::srv",
  "RRRIPK_Request",
  _RRRIPK_Request__cdr_serialize,
  _RRRIPK_Request__cdr_deserialize,
  _RRRIPK_Request__get_serialized_size,
  _RRRIPK_Request__max_serialized_size
};

static rosidl_message_type_support_t _RRRIPK_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRRIPK_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRIPK_Request)() {
  return &_RRRIPK_Request__type_support;
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
// #include "rrr_robot_interfaces/srv/detail/rrripk__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrripk__functions.h"
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


using _RRRIPK_Response__ros_msg_type = rrr_robot_interfaces__srv__RRRIPK_Response;

static bool _RRRIPK_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RRRIPK_Response__ros_msg_type * ros_message = static_cast<const _RRRIPK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ipk_check
  {
    cdr << (ros_message->ipk_check ? true : false);
  }

  // Field name: ipk_q1
  {
    cdr << ros_message->ipk_q1;
  }

  // Field name: ipk_q2
  {
    cdr << ros_message->ipk_q2;
  }

  // Field name: ipk_q3
  {
    cdr << ros_message->ipk_q3;
  }

  return true;
}

static bool _RRRIPK_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RRRIPK_Response__ros_msg_type * ros_message = static_cast<_RRRIPK_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: ipk_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ipk_check = tmp ? true : false;
  }

  // Field name: ipk_q1
  {
    cdr >> ros_message->ipk_q1;
  }

  // Field name: ipk_q2
  {
    cdr >> ros_message->ipk_q2;
  }

  // Field name: ipk_q3
  {
    cdr >> ros_message->ipk_q3;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t get_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RRRIPK_Response__ros_msg_type * ros_message = static_cast<const _RRRIPK_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ipk_check
  {
    size_t item_size = sizeof(ros_message->ipk_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipk_q1
  {
    size_t item_size = sizeof(ros_message->ipk_q1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipk_q2
  {
    size_t item_size = sizeof(ros_message->ipk_q2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ipk_q3
  {
    size_t item_size = sizeof(ros_message->ipk_q3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RRRIPK_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrr_robot_interfaces
size_t max_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Response(
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

  // member: ipk_check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ipk_q1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ipk_q2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ipk_q3
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
    using DataType = rrr_robot_interfaces__srv__RRRIPK_Response;
    is_plain =
      (
      offsetof(DataType, ipk_q3) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RRRIPK_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrr_robot_interfaces__srv__RRRIPK_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RRRIPK_Response = {
  "rrr_robot_interfaces::srv",
  "RRRIPK_Response",
  _RRRIPK_Response__cdr_serialize,
  _RRRIPK_Response__cdr_deserialize,
  _RRRIPK_Response__get_serialized_size,
  _RRRIPK_Response__max_serialized_size
};

static rosidl_message_type_support_t _RRRIPK_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RRRIPK_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRIPK_Response)() {
  return &_RRRIPK_Response__type_support;
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
#include "rrr_robot_interfaces/srv/rrripk.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t RRRIPK__callbacks = {
  "rrr_robot_interfaces::srv",
  "RRRIPK",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRIPK_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRIPK_Response)(),
};

static rosidl_service_type_support_t RRRIPK__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &RRRIPK__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrr_robot_interfaces, srv, RRRIPK)() {
  return &RRRIPK__handle;
}

#if defined(__cplusplus)
}
#endif
