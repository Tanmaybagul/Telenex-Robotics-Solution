// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces:srv/FarmManagement.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__BUILDER_HPP_
#define CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "custom_interfaces/srv/detail/farm_management__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_FarmManagement_Request_status
{
public:
  explicit Init_FarmManagement_Request_status(::custom_interfaces::srv::FarmManagement_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces::srv::FarmManagement_Request status(::custom_interfaces::srv::FarmManagement_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::FarmManagement_Request msg_;
};

class Init_FarmManagement_Request_crop_yield
{
public:
  explicit Init_FarmManagement_Request_crop_yield(::custom_interfaces::srv::FarmManagement_Request & msg)
  : msg_(msg)
  {}
  Init_FarmManagement_Request_status crop_yield(::custom_interfaces::srv::FarmManagement_Request::_crop_yield_type arg)
  {
    msg_.crop_yield = std::move(arg);
    return Init_FarmManagement_Request_status(msg_);
  }

private:
  ::custom_interfaces::srv::FarmManagement_Request msg_;
};

class Init_FarmManagement_Request_robot_id
{
public:
  Init_FarmManagement_Request_robot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FarmManagement_Request_crop_yield robot_id(::custom_interfaces::srv::FarmManagement_Request::_robot_id_type arg)
  {
    msg_.robot_id = std::move(arg);
    return Init_FarmManagement_Request_crop_yield(msg_);
  }

private:
  ::custom_interfaces::srv::FarmManagement_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::FarmManagement_Request>()
{
  return custom_interfaces::srv::builder::Init_FarmManagement_Request_robot_id();
}

}  // namespace custom_interfaces


namespace custom_interfaces
{

namespace srv
{

namespace builder
{

class Init_FarmManagement_Response_response
{
public:
  Init_FarmManagement_Response_response()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces::srv::FarmManagement_Response response(::custom_interfaces::srv::FarmManagement_Response::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces::srv::FarmManagement_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces::srv::FarmManagement_Response>()
{
  return custom_interfaces::srv::builder::Init_FarmManagement_Response_response();
}

}  // namespace custom_interfaces

#endif  // CUSTOM_INTERFACES__SRV__DETAIL__FARM_MANAGEMENT__BUILDER_HPP_
