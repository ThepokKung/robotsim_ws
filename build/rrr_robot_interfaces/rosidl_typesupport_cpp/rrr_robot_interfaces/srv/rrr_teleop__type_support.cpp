// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from rrr_robot_interfaces:srv/RRRTeleop.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rrr_robot_interfaces/srv/detail/rrr_teleop__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace rrr_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RRRTeleop_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RRRTeleop_Request_type_support_ids_t;

static const _RRRTeleop_Request_type_support_ids_t _RRRTeleop_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RRRTeleop_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RRRTeleop_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RRRTeleop_Request_type_support_symbol_names_t _RRRTeleop_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRTeleop_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rrr_robot_interfaces, srv, RRRTeleop_Request)),
  }
};

typedef struct _RRRTeleop_Request_type_support_data_t
{
  void * data[2];
} _RRRTeleop_Request_type_support_data_t;

static _RRRTeleop_Request_type_support_data_t _RRRTeleop_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RRRTeleop_Request_message_typesupport_map = {
  2,
  "rrr_robot_interfaces",
  &_RRRTeleop_Request_message_typesupport_ids.typesupport_identifier[0],
  &_RRRTeleop_Request_message_typesupport_symbol_names.symbol_name[0],
  &_RRRTeleop_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RRRTeleop_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RRRTeleop_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rrr_robot_interfaces::srv::RRRTeleop_Request>()
{
  return &::rrr_robot_interfaces::srv::rosidl_typesupport_cpp::RRRTeleop_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rrr_robot_interfaces, srv, RRRTeleop_Request)() {
  return get_message_type_support_handle<rrr_robot_interfaces::srv::RRRTeleop_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_teleop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rrr_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RRRTeleop_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RRRTeleop_Response_type_support_ids_t;

static const _RRRTeleop_Response_type_support_ids_t _RRRTeleop_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RRRTeleop_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RRRTeleop_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RRRTeleop_Response_type_support_symbol_names_t _RRRTeleop_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRTeleop_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rrr_robot_interfaces, srv, RRRTeleop_Response)),
  }
};

typedef struct _RRRTeleop_Response_type_support_data_t
{
  void * data[2];
} _RRRTeleop_Response_type_support_data_t;

static _RRRTeleop_Response_type_support_data_t _RRRTeleop_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RRRTeleop_Response_message_typesupport_map = {
  2,
  "rrr_robot_interfaces",
  &_RRRTeleop_Response_message_typesupport_ids.typesupport_identifier[0],
  &_RRRTeleop_Response_message_typesupport_symbol_names.symbol_name[0],
  &_RRRTeleop_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t RRRTeleop_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RRRTeleop_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rrr_robot_interfaces::srv::RRRTeleop_Response>()
{
  return &::rrr_robot_interfaces::srv::rosidl_typesupport_cpp::RRRTeleop_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, rrr_robot_interfaces, srv, RRRTeleop_Response)() {
  return get_message_type_support_handle<rrr_robot_interfaces::srv::RRRTeleop_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_teleop__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace rrr_robot_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _RRRTeleop_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _RRRTeleop_type_support_ids_t;

static const _RRRTeleop_type_support_ids_t _RRRTeleop_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _RRRTeleop_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _RRRTeleop_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _RRRTeleop_type_support_symbol_names_t _RRRTeleop_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrr_robot_interfaces, srv, RRRTeleop)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rrr_robot_interfaces, srv, RRRTeleop)),
  }
};

typedef struct _RRRTeleop_type_support_data_t
{
  void * data[2];
} _RRRTeleop_type_support_data_t;

static _RRRTeleop_type_support_data_t _RRRTeleop_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _RRRTeleop_service_typesupport_map = {
  2,
  "rrr_robot_interfaces",
  &_RRRTeleop_service_typesupport_ids.typesupport_identifier[0],
  &_RRRTeleop_service_typesupport_symbol_names.symbol_name[0],
  &_RRRTeleop_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t RRRTeleop_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_RRRTeleop_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<rrr_robot_interfaces::srv::RRRTeleop>()
{
  return &::rrr_robot_interfaces::srv::rosidl_typesupport_cpp::RRRTeleop_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
