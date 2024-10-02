// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrr_robot_interfaces:srv/RRRPubq.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_PUBQ__TRAITS_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_PUBQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrr_robot_interfaces/srv/detail/rrr_pubq__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'goal_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRPubq_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: goal_pos
  {
    out << "goal_pos: ";
    to_flow_style_yaml(msg.goal_pos, out);
    out << ", ";
  }

  // member: q1
  {
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << ", ";
  }

  // member: q2
  {
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << ", ";
  }

  // member: q3
  {
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRPubq_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: goal_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "goal_pos:\n";
    to_block_style_yaml(msg.goal_pos, out, indentation + 2);
  }

  // member: q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q1: ";
    rosidl_generator_traits::value_to_yaml(msg.q1, out);
    out << "\n";
  }

  // member: q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q2: ";
    rosidl_generator_traits::value_to_yaml(msg.q2, out);
    out << "\n";
  }

  // member: q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "q3: ";
    rosidl_generator_traits::value_to_yaml(msg.q3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRPubq_Request & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRPubq_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRPubq_Request & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRPubq_Request>()
{
  return "rrr_robot_interfaces::srv::RRRPubq_Request";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRPubq_Request>()
{
  return "rrr_robot_interfaces/srv/RRRPubq_Request";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRPubq_Request>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRPubq_Request>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRPubq_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrr_robot_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const RRRPubq_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: run_check
  {
    out << "run_check: ";
    rosidl_generator_traits::value_to_yaml(msg.run_check, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RRRPubq_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: run_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "run_check: ";
    rosidl_generator_traits::value_to_yaml(msg.run_check, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RRRPubq_Response & msg, bool use_flow_style = false)
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
  const rrr_robot_interfaces::srv::RRRPubq_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrr_robot_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrr_robot_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrr_robot_interfaces::srv::RRRPubq_Response & msg)
{
  return rrr_robot_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRPubq_Response>()
{
  return "rrr_robot_interfaces::srv::RRRPubq_Response";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRPubq_Response>()
{
  return "rrr_robot_interfaces/srv/RRRPubq_Response";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRPubq_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRPubq_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrr_robot_interfaces::srv::RRRPubq_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrr_robot_interfaces::srv::RRRPubq>()
{
  return "rrr_robot_interfaces::srv::RRRPubq";
}

template<>
inline const char * name<rrr_robot_interfaces::srv::RRRPubq>()
{
  return "rrr_robot_interfaces/srv/RRRPubq";
}

template<>
struct has_fixed_size<rrr_robot_interfaces::srv::RRRPubq>
  : std::integral_constant<
    bool,
    has_fixed_size<rrr_robot_interfaces::srv::RRRPubq_Request>::value &&
    has_fixed_size<rrr_robot_interfaces::srv::RRRPubq_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrr_robot_interfaces::srv::RRRPubq>
  : std::integral_constant<
    bool,
    has_bounded_size<rrr_robot_interfaces::srv::RRRPubq_Request>::value &&
    has_bounded_size<rrr_robot_interfaces::srv::RRRPubq_Response>::value
  >
{
};

template<>
struct is_service<rrr_robot_interfaces::srv::RRRPubq>
  : std::true_type
{
};

template<>
struct is_service_request<rrr_robot_interfaces::srv::RRRPubq_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrr_robot_interfaces::srv::RRRPubq_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_PUBQ__TRAITS_HPP_
