// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRService.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRService_Request_ipk_mode
{
public:
  explicit Init_RRRService_Request_ipk_mode(::rrr_robot_interfaces::srv::RRRService_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRService_Request ipk_mode(::rrr_robot_interfaces::srv::RRRService_Request::_ipk_mode_type arg)
  {
    msg_.ipk_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Request msg_;
};

class Init_RRRService_Request_target
{
public:
  explicit Init_RRRService_Request_target(::rrr_robot_interfaces::srv::RRRService_Request & msg)
  : msg_(msg)
  {}
  Init_RRRService_Request_ipk_mode target(::rrr_robot_interfaces::srv::RRRService_Request::_target_type arg)
  {
    msg_.target = std::move(arg);
    return Init_RRRService_Request_ipk_mode(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Request msg_;
};

class Init_RRRService_Request_mode_call
{
public:
  Init_RRRService_Request_mode_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRService_Request_target mode_call(::rrr_robot_interfaces::srv::RRRService_Request::_mode_call_type arg)
  {
    msg_.mode_call = std::move(arg);
    return Init_RRRService_Request_target(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRService_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRService_Request_mode_call();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRService_Response_ipk_sol
{
public:
  explicit Init_RRRService_Response_ipk_sol(::rrr_robot_interfaces::srv::RRRService_Response & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRService_Response ipk_sol(::rrr_robot_interfaces::srv::RRRService_Response::_ipk_sol_type arg)
  {
    msg_.ipk_sol = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Response msg_;
};

class Init_RRRService_Response_ipk_check
{
public:
  explicit Init_RRRService_Response_ipk_check(::rrr_robot_interfaces::srv::RRRService_Response & msg)
  : msg_(msg)
  {}
  Init_RRRService_Response_ipk_sol ipk_check(::rrr_robot_interfaces::srv::RRRService_Response::_ipk_check_type arg)
  {
    msg_.ipk_check = std::move(arg);
    return Init_RRRService_Response_ipk_sol(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Response msg_;
};

class Init_RRRService_Response_mode_change
{
public:
  Init_RRRService_Response_mode_change()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRService_Response_ipk_check mode_change(::rrr_robot_interfaces::srv::RRRService_Response::_mode_change_type arg)
  {
    msg_.mode_change = std::move(arg);
    return Init_RRRService_Response_ipk_check(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRService_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRService_Response_mode_change();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SERVICE__BUILDER_HPP_
