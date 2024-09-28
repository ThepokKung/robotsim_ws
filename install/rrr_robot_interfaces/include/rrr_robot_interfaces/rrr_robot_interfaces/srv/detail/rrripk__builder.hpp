// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRIPK.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrripk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRIPK_Request_ipk_target
{
public:
  explicit Init_RRRIPK_Request_ipk_target(::rrr_robot_interfaces::srv::RRRIPK_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRIPK_Request ipk_target(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_target_type arg)
  {
    msg_.ipk_target = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Request msg_;
};

class Init_RRRIPK_Request_ipk_mode
{
public:
  Init_RRRIPK_Request_ipk_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRIPK_Request_ipk_target ipk_mode(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_mode_type arg)
  {
    msg_.ipk_mode = std::move(arg);
    return Init_RRRIPK_Request_ipk_target(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRIPK_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRIPK_Request_ipk_mode();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRIPK_Response_ipk_sol
{
public:
  explicit Init_RRRIPK_Response_ipk_sol(::rrr_robot_interfaces::srv::RRRIPK_Response & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRIPK_Response ipk_sol(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_sol_type arg)
  {
    msg_.ipk_sol = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Response msg_;
};

class Init_RRRIPK_Response_ipk_check
{
public:
  Init_RRRIPK_Response_ipk_check()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRIPK_Response_ipk_sol ipk_check(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_check_type arg)
  {
    msg_.ipk_check = std::move(arg);
    return Init_RRRIPK_Response_ipk_sol(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRIPK_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRIPK_Response_ipk_check();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRRIPK__BUILDER_HPP_
