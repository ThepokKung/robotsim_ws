// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrr_robot_interfaces:srv/RRRMode.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__TRAITS_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrr_robot_interfaces/srv/detail/rrr_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRMode_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode_call
  {
    out << "mode_call: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_call, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode_call
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_call: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_call, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRMode_Request & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRMode_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRMode_Request & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRMode_Request>()
{
  return "rrr_robot_interfaces::srv::RRRMode_Request";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRMode_Request>()
{
  return "rrr_robot_interfaces/srv/RRRMode_Request";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRMode_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRMode_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRMode_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode_change
  {
    out << "mode_change: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_change, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode_change
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_change: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_change, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRMode_Response & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRMode_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRMode_Response & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRMode_Response>()
{
  return "rrr_robot_interfaces::srv::RRRMode_Response";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRMode_Response>()
{
  return "rrr_robot_interfaces/srv/RRRMode_Response";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRMode_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRMode_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRMode>()
{
  return "rrr_robot_interfaces::srv::RRRMode";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRMode>()
{
  return "rrr_robot_interfaces/srv/RRRMode";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRMode>
  : std::integral_constant<
    bool,
    has_fixed_size<rrr_robot_interfaces::srv::RRRMode_Request>::value &&
    has_fixed_size<rrr_robot_interfaces::srv::RRRMode_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRMode>
  : std::integral_constant<
    bool,
    has_bounded_size<rrr_robot_interfaces::srv::RRRMode_Request>::value &&
    has_bounded_size<rrr_robot_interfaces::srv::RRRMode_Response>::value
  >
{
};

template<>
struct is_service<rrr_robot_interfaces::srv::RRRMode>
  : std::true_type
{
};

template<>
struct is_service_request<rrr_robot_interfaces::srv::RRRMode_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrr_robot_interfaces::srv::RRRMode_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_MODE__TRAITS_HPP_
