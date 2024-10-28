// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrr_robot_interfaces:srv/RRRSavePath.idl
// generated code does not contain a copyright notice

#ifndef RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SAVE_PATH__BUILDER_HPP_
#define RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SAVE_PATH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrr_robot_interfaces/srv/detail/rrr_save_path__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRSavePath_Request_call_path
{
public:
  explicit Init_RRRSavePath_Request_call_path(::rrr_robot_interfaces::srv::RRRSavePath_Request & msg)
  : msg_(msg)
  {}
  ::rrr_robot_interfaces::srv::RRRSavePath_Request call_path(::rrr_robot_interfaces::srv::RRRSavePath_Request::_call_path_type arg)
  {
    msg_.call_path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRSavePath_Request msg_;
};

class Init_RRRSavePath_Request_save_path
{
public:
  Init_RRRSavePath_Request_save_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RRRSavePath_Request_call_path save_path(::rrr_robot_interfaces::srv::RRRSavePath_Request::_save_path_type arg)
  {
    msg_.save_path = std::move(arg);
    return Init_RRRSavePath_Request_call_path(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRSavePath_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRSavePath_Request>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRSavePath_Request_save_path();
}

}  // namespace rrr_robot_interfaces


namespace rrr_robot_interfaces
{

namespace srv
{

namespace builder
{

class Init_RRRSavePath_Response_all_done
{
public:
  Init_RRRSavePath_Response_all_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrr_robot_interfaces::srv::RRRSavePath_Response all_done(::rrr_robot_interfaces::srv::RRRSavePath_Response::_all_done_type arg)
  {
    msg_.all_done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrr_robot_interfaces::srv::RRRSavePath_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrr_robot_interfaces::srv::RRRSavePath_Response>()
{
  return rrr_robot_interfaces::srv::builder::Init_RRRSavePath_Response_all_done();
}

}  // namespace rrr_robot_interfaces

#endif  // RRR_ROBOT_INTERFACES__SRV__DETAIL__RRR_SAVE_PATH__BUILDER_HPP_
