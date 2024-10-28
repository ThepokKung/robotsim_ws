# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrr_robot_interfaces:srv/RRRTargetPath.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RRRTargetPath_Request(type):
    """Metaclass of message 'RRRTargetPath_Request'."""

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
                'rrr_robot_interfaces.srv.RRRTargetPath_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_target_path__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_target_path__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_target_path__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_target_path__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_target_path__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRTargetPath_Request(metaclass=Metaclass_RRRTargetPath_Request):
    """Message class 'RRRTargetPath_Request'."""

    __slots__ = [
        '_save_path',
        '_call_path',
    ]

    _fields_and_field_types = {
        'save_path': 'boolean',
        'call_path': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.save_path = kwargs.get('save_path', bool())
        self.call_path = kwargs.get('call_path', bool())

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
        if self.save_path != other.save_path:
            return False
        if self.call_path != other.call_path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def save_path(self):
        """Message field 'save_path'."""
        return self._save_path

    @save_path.setter
    def save_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'save_path' field must be of type 'bool'"
        self._save_path = value

    @builtins.property
    def call_path(self):
        """Message field 'call_path'."""
        return self._call_path

    @call_path.setter
    def call_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'call_path' field must be of type 'bool'"
        self._call_path = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_RRRTargetPath_Response(type):
    """Metaclass of message 'RRRTargetPath_Response'."""

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
                'rrr_robot_interfaces.srv.RRRTargetPath_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__rrr_target_path__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__rrr_target_path__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__rrr_target_path__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__rrr_target_path__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__rrr_target_path__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RRRTargetPath_Response(metaclass=Metaclass_RRRTargetPath_Response):
    """Message class 'RRRTargetPath_Response'."""

    __slots__ = [
        '_all_done',
    ]

    _fields_and_field_types = {
        'all_done': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.all_done = kwargs.get('all_done', bool())

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
        if self.all_done != other.all_done:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def all_done(self):
        """Message field 'all_done'."""
        return self._all_done

    @all_done.setter
    def all_done(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'all_done' field must be of type 'bool'"
        self._all_done = value


class Metaclass_RRRTargetPath(type):
    """Metaclass of service 'RRRTargetPath'."""

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
                'rrr_robot_interfaces.srv.RRRTargetPath')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__rrr_target_path

            from rrr_robot_interfaces.srv import _rrr_target_path
            if _rrr_target_path.Metaclass_RRRTargetPath_Request._TYPE_SUPPORT is None:
                _rrr_target_path.Metaclass_RRRTargetPath_Request.__import_type_support__()
            if _rrr_target_path.Metaclass_RRRTargetPath_Response._TYPE_SUPPORT is None:
                _rrr_target_path.Metaclass_RRRTargetPath_Response.__import_type_support__()


class RRRTargetPath(metaclass=Metaclass_RRRTargetPath):
    from rrr_robot_interfaces.srv._rrr_target_path import RRRTargetPath_Request as Request
    from rrr_robot_interfaces.srv._rrr_target_path import RRRTargetPath_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
