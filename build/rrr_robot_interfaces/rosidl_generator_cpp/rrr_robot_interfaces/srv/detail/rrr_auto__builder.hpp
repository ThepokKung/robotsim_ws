// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRAuto.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_auto__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRAuto_Request_target_call
{
public:
  explicit Init_RRRAuto_Request_target_call(::rrr_robot_interfaces::srv::RRRAuto_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRAuto_Request target_call(::rrr_robot_interfaces::srv::RRRAuto_Request::_target_call_type arg)
  {
    msg_.target_call = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Request msg_;
};

class Init_RRRAuto_Request_auto_call
{
public:
  Init_RRRAuto_Request_auto_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRAuto_Request_target_call auto_call(::rrr_robot_interfaces::srv::RRRAuto_Request::_auto_call_type arg)
  {
    msg_.auto_call = std::move(arg);
    return Init_RRRAuto_Request_target_call(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRAuto_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRAuto_Request_auto_call();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRAuto_Response_random_target_z
{
public:
  explicit Init_RRRAuto_Response_random_target_z(::rrr_robot_interfaces::srv::RRRAuto_Response & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRAuto_Response random_target_z(::rrr_robot_interfaces::srv::RRRAuto_Response::_random_target_z_type arg)
  {
    msg_.random_target_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Response msg_;
};

class Init_RRRAuto_Response_random_target_y
{
public:
  explicit Init_RRRAuto_Response_random_target_y(::rrr_robot_interfaces::srv::RRRAuto_Response & msg)
  : msg_(msg)
  {}
  Init_RRRAuto_Response_random_target_z random_target_y(::rrr_robot_interfaces::srv::RRRAuto_Response::_random_target_y_type arg)
  {
    msg_.random_target_y = std::move(arg);
    return Init_RRRAuto_Response_random_target_z(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Response msg_;
};

class Init_RRRAuto_Response_random_target_x
{
public:
  Init_RRRAuto_Response_random_target_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRAuto_Response_random_target_y random_target_x(::rrr_robot_interfaces::srv::RRRAuto_Response::_random_target_x_type arg)
  {
    msg_.random_target_x = std::move(arg);
    return Init_RRRAuto_Response_random_target_y(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRAuto_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRAuto_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRAuto_Response_random_target_x();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_AUTO__BUILDER_HPP_
