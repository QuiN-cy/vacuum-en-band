// Generated by gencpp from file test_rospy/StringStringResponse.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_STRINGSTRINGRESPONSE_H
#define TEST_ROSPY_MESSAGE_STRINGSTRINGRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace test_rospy
{
template <class ContainerAllocator>
struct StringStringResponse_
{
  typedef StringStringResponse_<ContainerAllocator> Type;

  StringStringResponse_()
    : str()  {
    }
  StringStringResponse_(const ContainerAllocator& _alloc)
    : str(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _str_type;
  _str_type str;





  typedef boost::shared_ptr< ::test_rospy::StringStringResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::StringStringResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StringStringResponse_

typedef ::test_rospy::StringStringResponse_<std::allocator<void> > StringStringResponse;

typedef boost::shared_ptr< ::test_rospy::StringStringResponse > StringStringResponsePtr;
typedef boost::shared_ptr< ::test_rospy::StringStringResponse const> StringStringResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::StringStringResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::StringStringResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rospy

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'test_rospy': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_rospy/msg'], 'std_msgs': ['/home/student/rosws/src/std_msgs-kinetic-devel/msg'], 'test_rosmaster': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosmaster/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::StringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::StringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::StringStringResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::StringStringResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::StringStringResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::StringStringResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "32224c1636e75e68745b61629dfa07c5";
  }

  static const char* value(const ::test_rospy::StringStringResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x32224c1636e75e68ULL;
  static const uint64_t static_value2 = 0x745b61629dfa07c5ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/StringStringResponse";
  }

  static const char* value(const ::test_rospy::StringStringResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::StringStringResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String str\n"
"\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::test_rospy::StringStringResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::StringStringResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.str);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StringStringResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::StringStringResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::StringStringResponse_<ContainerAllocator>& v)
  {
    s << indent << "str: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.str);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_STRINGSTRINGRESPONSE_H
