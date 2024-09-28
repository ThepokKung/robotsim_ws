// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrr_robot_interfaces:srv/RRRIPKTarget.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__TRAITS_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrr_robot_interfaces/srv/detail/rrripk_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ipk_target'
#include "geometry_msgs/msg/detail/pose_stamped__traits.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRIPKTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: ipk_target
  {
    out << "ipk_target: ";
    to_flow_style_yaml(msg.ipk_target, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRIPKTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: ipk_target
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ipk_target:\n";
    to_block_style_yaml(msg.ipk_target, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRIPKTarget_Request & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRIPKTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRIPKTarget_Request & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRIPKTarget_Request>()
{
  return "rrr_robot_interfaces::srv::RRRIPKTarget_Request";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRIPKTarget_Request>()
{
  return "rrr_robot_interfaces/srv/RRRIPKTarget_Request";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRIPKTarget_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRIPKTarget_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseStamped>::value> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRIPKTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRIPKTarget_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRIPKTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRIPKTarget_Response & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRIPKTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRIPKTarget_Response & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRIPKTarget_Response>()
{
  return "rrr_robot_interfaces::srv::RRRIPKTarget_Response";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRIPKTarget_Response>()
{
  return "rrr_robot_interfaces/srv/RRRIPKTarget_Response";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRIPKTarget_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRIPKTarget_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRIPKTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRIPKTarget>()
{
  return "rrr_robot_interfaces::srv::RRRIPKTarget";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRIPKTarget>()
{
  return "rrr_robot_interfaces/srv/RRRIPKTarget";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRIPKTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<rrr_robot_interfaces::srv::RRRIPKTarget_Request>::value &&
    has_fixed_size<rrr_robot_interfaces::srv::RRRIPKTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRIPKTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<rrr_robot_interfaces::srv::RRRIPKTarget_Request>::value &&
    has_bounded_size<rrr_robot_interfaces::srv::RRRIPKTarget_Response>::value
  >
{
};

template<>
struct is_service<rrr_robot_interfaces::srv::RRRIPKTarget>
  : std::true_type
{
};

template<>
struct is_service_request<rrr_robot_interfaces::srv::RRRIPKTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrr_robot_interfaces::srv::RRRIPKTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK_TARGET__TRAITS_HPP_
