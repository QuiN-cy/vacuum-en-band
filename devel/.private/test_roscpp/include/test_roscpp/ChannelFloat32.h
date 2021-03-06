// Generated by gencpp from file test_roscpp/ChannelFloat32.msg
// DO NOT EDIT!


#ifndef TEST_ROSCPP_MESSAGE_CHANNELFLOAT32_H
#define TEST_ROSCPP_MESSAGE_CHANNELFLOAT32_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_roscpp
{
template <class ContainerAllocator>
struct ChannelFloat32_
{
  typedef ChannelFloat32_<ContainerAllocator> Type;

  ChannelFloat32_()
    : name()
    , vals()  {
    }
  ChannelFloat32_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , vals(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _vals_type;
  _vals_type vals;





  typedef boost::shared_ptr< ::test_roscpp::ChannelFloat32_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_roscpp::ChannelFloat32_<ContainerAllocator> const> ConstPtr;

}; // struct ChannelFloat32_

typedef ::test_roscpp::ChannelFloat32_<std::allocator<void> > ChannelFloat32;

typedef boost::shared_ptr< ::test_roscpp::ChannelFloat32 > ChannelFloat32Ptr;
typedef boost::shared_ptr< ::test_roscpp::ChannelFloat32 const> ChannelFloat32ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_roscpp::ChannelFloat32_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_roscpp

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_roscpp': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/test_serialization/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf/msg', '/home/student/rosws/src/ros_comm-noetic-devel/test/test_roscpp/perf_serialization/msg'], 'std_msgs': ['/home/student/rosws/src/std_msgs-kinetic-devel/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_roscpp::ChannelFloat32_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_roscpp::ChannelFloat32_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_roscpp::ChannelFloat32_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "61c47e4621e471c885edb248b5dcafd5";
  }

  static const char* value(const ::test_roscpp::ChannelFloat32_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x61c47e4621e471c8ULL;
  static const uint64_t static_value2 = 0x85edb248b5dcafd5ULL;
};

template<class ContainerAllocator>
struct DataType< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_roscpp/ChannelFloat32";
  }

  static const char* value(const ::test_roscpp::ChannelFloat32_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n"
"float32[] vals\n"
;
  }

  static const char* value(const ::test_roscpp::ChannelFloat32_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.vals);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ChannelFloat32_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_roscpp::ChannelFloat32_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_roscpp::ChannelFloat32_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "vals[]" << std::endl;
    for (size_t i = 0; i < v.vals.size(); ++i)
    {
      s << indent << "  vals[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.vals[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSCPP_MESSAGE_CHANNELFLOAT32_H
