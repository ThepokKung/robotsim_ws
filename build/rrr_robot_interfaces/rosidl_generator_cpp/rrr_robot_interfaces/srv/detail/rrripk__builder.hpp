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

class Init_RRRIPK_Request_ipk_target_z
{
public:
  explicit Init_RRRIPK_Request_ipk_target_z(::rrr_robot_interfaces::srv::RRRIPK_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRIPK_Request ipk_target_z(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_target_z_type arg)
  {
    msg_.ipk_target_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Request msg_;
};

class Init_RRRIPK_Request_ipk_target_y
{
public:
  explicit Init_RRRIPK_Request_ipk_target_y(::rrr_robot_interfaces::srv::RRRIPK_Request & msg)
  : msg_(msg)
  {}
  Init_RRRIPK_Request_ipk_target_z ipk_target_y(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_target_y_type arg)
  {
    msg_.ipk_target_y = std::move(arg);
    return Init_RRRIPK_Request_ipk_target_z(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Request msg_;
};

class Init_RRRIPK_Request_ipk_target_x
{
public:
  explicit Init_RRRIPK_Request_ipk_target_x(::rrr_robot_interfaces::srv::RRRIPK_Request & msg)
  : msg_(msg)
  {}
  Init_RRRIPK_Request_ipk_target_y ipk_target_x(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_target_x_type arg)
  {
    msg_.ipk_target_x = std::move(arg);
    return Init_RRRIPK_Request_ipk_target_y(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Request msg_;
};

class Init_RRRIPK_Request_ipk_call
{
public:
  Init_RRRIPK_Request_ipk_call()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRIPK_Request_ipk_target_x ipk_call(::rrr_robot_interfaces::srv::RRRIPK_Request::_ipk_call_type arg)
  {
    msg_.ipk_call = std::move(arg);
    return Init_RRRIPK_Request_ipk_target_x(msg_);
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
  return rrr_robot_interfaces::srv::builder::Init_RRRIPK_Request_ipk_call();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRIPK_Response_ipk_q3
{
public:
  explicit Init_RRRIPK_Response_ipk_q3(::rrr_robot_interfaces::srv::RRRIPK_Response & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRIPK_Response ipk_q3(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_q3_type arg)
  {
    msg_.ipk_q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Response msg_;
};

class Init_RRRIPK_Response_ipk_q2
{
public:
  explicit Init_RRRIPK_Response_ipk_q2(::rrr_robot_interfaces::srv::RRRIPK_Response & msg)
  : msg_(msg)
  {}
  Init_RRRIPK_Response_ipk_q3 ipk_q2(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_q2_type arg)
  {
    msg_.ipk_q2 = std::move(arg);
    return Init_RRRIPK_Response_ipk_q3(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRIPK_Response msg_;
};

class Init_RRRIPK_Response_ipk_q1
{
public:
  explicit Init_RRRIPK_Response_ipk_q1(::rrr_robot_interfaces::srv::RRRIPK_Response & msg)
  : msg_(msg)
  {}
  Init_RRRIPK_Response_ipk_q2 ipk_q1(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_q1_type arg)
  {
    msg_.ipk_q1 = std::move(arg);
    return Init_RRRIPK_Response_ipk_q2(msg_);
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
  Init_RRRIPK_Response_ipk_q1 ipk_check(::rrr_robot_interfaces::srv::RRRIPK_Response::_ipk_check_type arg)
  {
    msg_.ipk_check = std::move(arg);
    return Init_RRRIPK_Response_ipk_q1(msg_);
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
