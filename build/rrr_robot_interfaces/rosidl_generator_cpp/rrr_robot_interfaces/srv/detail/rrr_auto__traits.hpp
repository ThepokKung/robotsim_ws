// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrr_robot_interfaces:srv/RRRAuto.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__TRAITS_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrr_robot_interfaces/srv/detail/rrr_auto__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRAuto_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: auto_run
  {
    out << "auto_run: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_run, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRAuto_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: auto_run
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_run: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_run, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRAuto_Request & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRAuto_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRAuto_Request & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRAuto_Request>()
{
  return "rrr_robot_interfaces::srv::RRRAuto_Request";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRAuto_Request>()
{
  return "rrr_robot_interfaces/srv/RRRAuto_Request";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRAuto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRAuto_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRAuto_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRAuto_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRAuto_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRAuto_Response & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRAuto_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRAuto_Response & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRAuto_Response>()
{
  return "rrr_robot_interfaces::srv::RRRAuto_Response";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRAuto_Response>()
{
  return "rrr_robot_interfaces/srv/RRRAuto_Response";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRAuto_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRAuto_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRAuto_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRAuto>()
{
  return "rrr_robot_interfaces::srv::RRRAuto";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRAuto>()
{
  return "rrr_robot_interfaces/srv/RRRAuto";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRAuto>
  : std::integral_constant<
    bool,
    has_fixed_size<rrr_robot_interfaces::srv::RRRAuto_Request>::value &&
    has_fixed_size<rrr_robot_interfaces::srv::RRRAuto_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRAuto>
  : std::integral_constant<
    bool,
    has_bounded_size<rrr_robot_interfaces::srv::RRRAuto_Request>::value &&
    has_bounded_size<rrr_robot_interfaces::srv::RRRAuto_Response>::value
  >
{
};

template<>
struct is_service<rrr_robot_interfaces::srv::RRRAuto>
  : std::true_type
{
};

template<>
struct is_service_request<rrr_robot_interfaces::srv::RRRAuto_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrr_robot_interfaces::srv::RRRAuto_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__TRAITS_HPP_
