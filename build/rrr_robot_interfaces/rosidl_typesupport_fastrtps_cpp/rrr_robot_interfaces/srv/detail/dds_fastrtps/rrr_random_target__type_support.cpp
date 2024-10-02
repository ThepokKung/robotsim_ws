// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rrr_robot_interfaces:srv/RRRRandomTarget.idl
// generated code does not contain a copyright notice
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rrr_robot_interfaces/srv/detail/rrr_random_target__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrr_robot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
cdr_serialize(
  const rrr_robot_interfaces::srv::RRRRandomTarget_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: target_call
  cdr << (ros_message.target_call ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrr_robot_interfaces::srv::RRRRandomTarget_Request & ros_message)
{
  // Member: target_call
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.target_call = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
get_serialized_size(
  const rrr_robot_interfaces::srv::RRRRandomTarget_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: target_call
  {
    size_t item_size = sizeof(ros_message.target_call);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
max_serialized_size_RRRRandomTarget_Request(
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


  // Member: target_call
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
    using DataType = rrr_robot_interfaces::srv::RRRRandomTarget_Request;
    is_plain =
      (
      offsetof(DataType, target_call) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RRRRandomTarget_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrr_robot_interfaces::srv::RRRRandomTarget_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RRRRandomTarget_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrr_robot_interfaces::srv::RRRRandomTarget_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RRRRandomTarget_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrr_robot_interfaces::srv::RRRRandomTarget_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RRRRandomTarget_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RRRRandomTarget_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RRRRandomTarget_Request__callbacks = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget_Request",
  _RRRRandomTarget_Request__cdr_serialize,
  _RRRRandomTarget_Request__cdr_deserialize,
  _RRRRandomTarget_Request__get_serialized_size,
  _RRRRandomTarget_Request__max_serialized_size
};

static rosidl_message_type_support_t _RRRRandomTarget_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RRRRandomTarget_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrr_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rrr_robot_interfaces::srv::RRRRandomTarget_Request>()
{
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRRandomTarget_Request)() {
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrr_robot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
cdr_serialize(
  const rrr_robot_interfaces::srv::RRRRandomTarget_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: random_target_x
  cdr << ros_message.random_target_x;
  // Member: random_target_y
  cdr << ros_message.random_target_y;
  // Member: random_target_z
  cdr << ros_message.random_target_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrr_robot_interfaces::srv::RRRRandomTarget_Response & ros_message)
{
  // Member: random_target_x
  cdr >> ros_message.random_target_x;

  // Member: random_target_y
  cdr >> ros_message.random_target_y;

  // Member: random_target_z
  cdr >> ros_message.random_target_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
get_serialized_size(
  const rrr_robot_interfaces::srv::RRRRandomTarget_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: random_target_x
  {
    size_t item_size = sizeof(ros_message.random_target_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: random_target_y
  {
    size_t item_size = sizeof(ros_message.random_target_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: random_target_z
  {
    size_t item_size = sizeof(ros_message.random_target_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrr_robot_interfaces
max_serialized_size_RRRRandomTarget_Response(
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


  // Member: random_target_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: random_target_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: random_target_z
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
    using DataType = rrr_robot_interfaces::srv::RRRRandomTarget_Response;
    is_plain =
      (
      offsetof(DataType, random_target_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RRRRandomTarget_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrr_robot_interfaces::srv::RRRRandomTarget_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RRRRandomTarget_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrr_robot_interfaces::srv::RRRRandomTarget_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RRRRandomTarget_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrr_robot_interfaces::srv::RRRRandomTarget_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RRRRandomTarget_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RRRRandomTarget_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RRRRandomTarget_Response__callbacks = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget_Response",
  _RRRRandomTarget_Response__cdr_serialize,
  _RRRRandomTarget_Response__cdr_deserialize,
  _RRRRandomTarget_Response__get_serialized_size,
  _RRRRandomTarget_Response__max_serialized_size
};

static rosidl_message_type_support_t _RRRRandomTarget_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RRRRandomTarget_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrr_robot_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<rrr_robot_interfaces::srv::RRRRandomTarget_Response>()
{
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRRandomTarget_Response)() {
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _RRRRandomTarget__callbacks = {
  "rrr_robot_interfaces::srv",
  "RRRRandomTarget",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRRandomTarget_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRRandomTarget_Response)(),
};

static rosidl_service_type_support_t _RRRRandomTarget__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RRRRandomTarget__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrr_robot_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<rrr_robot_interfaces::srv::RRRRandomTarget>()
{
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRRandomTarget)() {
  return &rrr_robot_interfaces::srv::typesupport_fastrtps_cpp::_RRRRandomTarget__handle;
}

#ifdef __cplusplus
}
#endif
