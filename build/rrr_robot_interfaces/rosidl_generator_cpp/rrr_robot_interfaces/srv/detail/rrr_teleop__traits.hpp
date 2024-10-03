// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrr_robot_interfaces:srv/RRRTeleop.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__TRAITS_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrr_robot_interfaces/srv/detail/rrr_teleop__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'teleop_target'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRTeleop_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ref_frame
  {
    out << "ref_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_frame, out);
    out << ", ";
  }

  // member: teleop_target
  {
    out << "teleop_target: ";
    to_flow_style_yaml(msg.teleop_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRTeleop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ref_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_frame, out);
    out << "\n";
  }

  // member: teleop_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "teleop_target:\n";
    to_block_style_yaml(msg.teleop_target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRTeleop_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rrr_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrr_robot_interfaces::srv::RRRTeleop_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRTeleop_Request & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRTeleop_Request>()
{
  return "rrr_robot_interfaces::srv::RRRTeleop_Request";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRTeleop_Request>()
{
  return "rrr_robot_interfaces/srv/RRRTeleop_Request";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRTeleop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRTeleop_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRTeleop_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRTeleop_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRTeleop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRTeleop_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrr_robot_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use rrr_robot_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrr_robot_interfaces::srv::RRRTeleop_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRTeleop_Response & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRTeleop_Response>()
{
  return "rrr_robot_interfaces::srv::RRRTeleop_Response";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRTeleop_Response>()
{
  return "rrr_robot_interfaces/srv/RRRTeleop_Response";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRTeleop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRTeleop_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRTeleop_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRTeleop>()
{
  return "rrr_robot_interfaces::srv::RRRTeleop";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRTeleop>()
{
  return "rrr_robot_interfaces/srv/RRRTeleop";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRTeleop>
  : std::integral_constant<
    bool,
    has_fixed_size<rrr_robot_interfaces::srv::RRRTeleop_Request>::value &&
    has_fixed_size<rrr_robot_interfaces::srv::RRRTeleop_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRTeleop>
  : std::integral_constant<
    bool,
    has_bounded_size<rrr_robot_interfaces::srv::RRRTeleop_Request>::value &&
    has_bounded_size<rrr_robot_interfaces::srv::RRRTeleop_Response>::value
  >
{
};

template<>
struct is_service<rrr_robot_interfaces::srv::RRRTeleop>
  : std::true_type
{
};

template<>
struct is_service_request<rrr_robot_interfaces::srv::RRRTeleop_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrr_robot_interfaces::srv::RRRTeleop_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_TELEOP__TRAITS_HPP_
