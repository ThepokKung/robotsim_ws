// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrr_robot_interfaces:srv/RRRAuto.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rrr_robot_interfaces/srv/detail/rrr_auto__struct.h"
#include "rrr_robot_interfaces/srv/detail/rrr_auto__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_auto__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[51];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrr_robot_interfaces.srv._rrr_auto.RRRAuto_Request", full_classname_dest, 50) == 0);
  }
  rrr_robot_interfaces__srv__RRRAuto_Request * ros_message = _ros_message;
  {  // target_call
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_call");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->target_call = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_auto__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRAuto_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_auto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRAuto_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRAuto_Request * ros_message = (rrr_robot_interfaces__srv__RRRAuto_Request *)raw_ros_message;
  {  // target_call
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->target_call ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_call", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_auto__struct.h"
// already included above
// #include "rrr_robot_interfaces/srv/detail/rrr_auto__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrr_robot_interfaces__srv__rrr_auto__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrr_robot_interfaces.srv._rrr_auto.RRRAuto_Response", full_classname_dest, 51) == 0);
  }
  rrr_robot_interfaces__srv__RRRAuto_Response * ros_message = _ros_message;
  {  // random_target_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "random_target_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->random_target_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // random_target_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "random_target_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->random_target_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // random_target_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "random_target_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->random_target_z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // move_end
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_end");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->move_end = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrr_robot_interfaces__srv__rrr_auto__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RRRAuto_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrr_robot_interfaces.srv._rrr_auto");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RRRAuto_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrr_robot_interfaces__srv__RRRAuto_Response * ros_message = (rrr_robot_interfaces__srv__RRRAuto_Response *)raw_ros_message;
  {  // random_target_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->random_target_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "random_target_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // random_target_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->random_target_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "random_target_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // random_target_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->random_target_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "random_target_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_end
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->move_end ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_end", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
