# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrr_robot_interfaces:srv/RRRIPK.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RRRIPK_Request(type):
    """Metaclass of message 'RRRIPK_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRIPK_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrripk__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrripk__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrripk__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrripk__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrripk__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRIPK_Request(metaclass=Metaclass_RRRIPK_Request):
    """Message class 'RRRIPK_Request'."""

    __slots__ = [
        '_ipk_target',
    ]

    _fields_and_field_types = {
        'ipk_target': 'geometry_msgs/Point',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from geometry_msgs.msg import Point
        self.ipk_target = kwargs.get('ipk_target', Point())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ipk_target != other.ipk_target:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ipk_target(self):
        """Message field 'ipk_target'."""
        return self._ipk_target

    @ipk_target.setter
    def ipk_target(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'ipk_target' field must be a sub message of type 'Point'"
        self._ipk_target = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RRRIPK_Response(type):
    """Metaclass of message 'RRRIPK_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRIPK_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrripk__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrripk__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrripk__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrripk__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrripk__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRIPK_Response(metaclass=Metaclass_RRRIPK_Response):
    """Message class 'RRRIPK_Response'."""

    __slots__ = [
        '_ipk_check',
        '_ipk_q1',
        '_ipk_q2',
        '_ipk_q3',
    ]

    _fields_and_field_types = {
        'ipk_check': 'boolean',
        'ipk_q1': 'double',
        'ipk_q2': 'double',
        'ipk_q3': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ipk_check = kwargs.get('ipk_check', bool())
        self.ipk_q1 = kwargs.get('ipk_q1', float())
        self.ipk_q2 = kwargs.get('ipk_q2', float())
        self.ipk_q3 = kwargs.get('ipk_q3', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.ipk_check != other.ipk_check:
            return False
        if self.ipk_q1 != other.ipk_q1:
            return False
        if self.ipk_q2 != other.ipk_q2:
            return False
        if self.ipk_q3 != other.ipk_q3:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ipk_check(self):
        """Message field 'ipk_check'."""
        return self._ipk_check

    @ipk_check.setter
    def ipk_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ipk_check' field must be of type 'bool'"
        self._ipk_check = value

    @builtins.property
    def ipk_q1(self):
        """Message field 'ipk_q1'."""
        return self._ipk_q1

    @ipk_q1.setter
    def ipk_q1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipk_q1' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ipk_q1' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ipk_q1 = value

    @builtins.property
    def ipk_q2(self):
        """Message field 'ipk_q2'."""
        return self._ipk_q2

    @ipk_q2.setter
    def ipk_q2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipk_q2' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ipk_q2' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ipk_q2 = value

    @builtins.property
    def ipk_q3(self):
        """Message field 'ipk_q3'."""
        return self._ipk_q3

    @ipk_q3.setter
    def ipk_q3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ipk_q3' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ipk_q3' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ipk_q3 = value


class Metaclass_RRRIPK(type):
    """Metaclass of service 'RRRIPK'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrr_robot_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrr_robot_interfaces.srv.RRRIPK')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrripk

            from rrr_robot_interfaces.srv import _rrripk
            if _rrripk.Metaclass_RRRIPK_Request._TYPE_SUPPORT is None:
                _rrripk.Metaclass_RRRIPK_Request.__import_type_support__()
            if _rrripk.Metaclass_RRRIPK_Response._TYPE_SUPPORT is None:
                _rrripk.Metaclass_RRRIPK_Response.__import_type_support__()


class RRRIPK(metaclass=Metaclass_RRRIPK):
    from rrr_robot_interfaces.srv._rrripk import RRRIPK_Request as Request
    from rrr_robot_interfaces.srv._rrripk import RRRIPK_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
