// Generated by gencpp from file prius_msgs/Control.msg
// DO NOT EDIT!


#ifndef PRIUS_MSGS_MESSAGE_CONTROL_H
#define PRIUS_MSGS_MESSAGE_CONTROL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace prius_msgs
{
template <class ContainerAllocator>
struct Control_
{
  typedef Control_<ContainerAllocator> Type;

  Control_()
    : header()
    , throttle(0.0)
    , brake(0.0)
    , steer(0.0)
    , shift_gears(0)  {
    }
  Control_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , throttle(0.0)
    , brake(0.0)
    , steer(0.0)
    , shift_gears(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _throttle_type;
  _throttle_type throttle;

   typedef double _brake_type;
  _brake_type brake;

   typedef double _steer_type;
  _steer_type steer;

   typedef uint8_t _shift_gears_type;
  _shift_gears_type shift_gears;



  enum {
    NO_COMMAND = 0u,
    NEUTRAL = 1u,
    FORWARD = 2u,
    REVERSE = 3u,
  };


  typedef boost::shared_ptr< ::prius_msgs::Control_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prius_msgs::Control_<ContainerAllocator> const> ConstPtr;

}; // struct Control_

typedef ::prius_msgs::Control_<std::allocator<void> > Control;

typedef boost::shared_ptr< ::prius_msgs::Control > ControlPtr;
typedef boost::shared_ptr< ::prius_msgs::Control const> ControlConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prius_msgs::Control_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prius_msgs::Control_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prius_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'prius_msgs': ['/home/mir-lab/mcity_ws/src/car_demo/prius_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prius_msgs::Control_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prius_msgs::Control_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prius_msgs::Control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prius_msgs::Control_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prius_msgs::Control_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prius_msgs::Control_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prius_msgs::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "643e03b408b8368cf4ae109e399336ec";
  }

  static const char* value(const ::prius_msgs::Control_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x643e03b408b8368cULL;
  static const uint64_t static_value2 = 0xf4ae109e399336ecULL;
};

template<class ContainerAllocator>
struct DataType< ::prius_msgs::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prius_msgs/Control";
  }

  static const char* value(const ::prius_msgs::Control_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prius_msgs::Control_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
# Range 0 to 1, 1 is max throttle\n\
float64 throttle\n\
# Range 0 to 1, 1 is max brake\n\
float64 brake\n\
# Range -1 to +1, +1 is maximum left turn\n\
float64 steer\n\
\n\
uint8 NO_COMMAND=0\n\
uint8 NEUTRAL=1\n\
uint8 FORWARD=2\n\
uint8 REVERSE=3\n\
\n\
uint8 shift_gears\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::prius_msgs::Control_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prius_msgs::Control_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.throttle);
      stream.next(m.brake);
      stream.next(m.steer);
      stream.next(m.shift_gears);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Control_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prius_msgs::Control_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prius_msgs::Control_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "throttle: ";
    Printer<double>::stream(s, indent + "  ", v.throttle);
    s << indent << "brake: ";
    Printer<double>::stream(s, indent + "  ", v.brake);
    s << indent << "steer: ";
    Printer<double>::stream(s, indent + "  ", v.steer);
    s << indent << "shift_gears: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.shift_gears);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PRIUS_MSGS_MESSAGE_CONTROL_H
