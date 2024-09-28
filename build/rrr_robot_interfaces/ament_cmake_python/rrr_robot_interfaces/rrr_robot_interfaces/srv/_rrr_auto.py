# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrr_robot_interfaces:srv/RRRAuto.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RRRAuto_Request(type):
    """Metaclass of message 'RRRAuto_Request'."""

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
                'rrr_robot_interfaces.srv.RRRAuto_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_auto__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_auto__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_auto__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_auto__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_auto__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRAuto_Request(metaclass=Metaclass_RRRAuto_Request):
    """Message class 'RRRAuto_Request'."""

    __slots__ = [
        '_target_call',
    ]

    _fields_and_field_types = {
        'target_call': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.target_call = kwargs.get('target_call', bool())

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
        if self.target_call != other.target_call:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target_call(self):
        """Message field 'target_call'."""
        return self._target_call

    @target_call.setter
    def target_call(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'target_call' field must be of type 'bool'"
        self._target_call = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RRRAuto_Response(type):
    """Metaclass of message 'RRRAuto_Response'."""

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
                'rrr_robot_interfaces.srv.RRRAuto_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_auto__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_auto__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_auto__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_auto__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_auto__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRAuto_Response(metaclass=Metaclass_RRRAuto_Response):
    """Message class 'RRRAuto_Response'."""

    __slots__ = [
        '_random_target_x',
        '_random_target_y',
        '_random_target_z',
        '_move_end',
    ]

    _fields_and_field_types = {
        'random_target_x': 'double',
        'random_target_y': 'double',
        'random_target_z': 'double',
        'move_end': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.random_target_x = kwargs.get('random_target_x', float())
        self.random_target_y = kwargs.get('random_target_y', float())
        self.random_target_z = kwargs.get('random_target_z', float())
        self.move_end = kwargs.get('move_end', bool())

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
        if self.random_target_x != other.random_target_x:
            return False
        if self.random_target_y != other.random_target_y:
            return False
        if self.random_target_z != other.random_target_z:
            return False
        if self.move_end != other.move_end:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def random_target_x(self):
        """Message field 'random_target_x'."""
        return self._random_target_x

    @random_target_x.setter
    def random_target_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'random_target_x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'random_target_x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._random_target_x = value

    @builtins.property
    def random_target_y(self):
        """Message field 'random_target_y'."""
        return self._random_target_y

    @random_target_y.setter
    def random_target_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'random_target_y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'random_target_y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._random_target_y = value

    @builtins.property
    def random_target_z(self):
        """Message field 'random_target_z'."""
        return self._random_target_z

    @random_target_z.setter
    def random_target_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'random_target_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'random_target_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._random_target_z = value

    @builtins.property
    def move_end(self):
        """Message field 'move_end'."""
        return self._move_end

    @move_end.setter
    def move_end(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'move_end' field must be of type 'bool'"
        self._move_end = value


class Metaclass_RRRAuto(type):
    """Metaclass of service 'RRRAuto'."""

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
                'rrr_robot_interfaces.srv.RRRAuto')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrr_auto

            from rrr_robot_interfaces.srv import _rrr_auto
            if _rrr_auto.Metaclass_RRRAuto_Request._TYPE_SUPPORT is None:
                _rrr_auto.Metaclass_RRRAuto_Request.__import_type_support__()
            if _rrr_auto.Metaclass_RRRAuto_Response._TYPE_SUPPORT is None:
                _rrr_auto.Metaclass_RRRAuto_Response.__import_type_support__()


class RRRAuto(metaclass=Metaclass_RRRAuto):
    from rrr_robot_interfaces.srv._rrr_auto import RRRAuto_Request as Request
    from rrr_robot_interfaces.srv._rrr_auto import RRRAuto_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
