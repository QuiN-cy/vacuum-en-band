// Generated by gencpp from file test_rospy/ListReturnResponse.msg
// DO NOT EDIT!


#ifndef TEST_ROSPY_MESSAGE_LISTRETURNRESPONSE_H
#define TEST_ROSPY_MESSAGE_LISTRETURNRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace test_rospy
{
template <class ContainerAllocator>
struct ListReturnResponse_
{
  typedef ListReturnResponse_<ContainerAllocator> Type;

  ListReturnResponse_()
    : abcd()  {
    }
  ListReturnResponse_(const ContainerAllocator& _alloc)
    : abcd(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _abcd_type;
  _abcd_type abcd;





  typedef boost::shared_ptr< ::test_rospy::ListReturnResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rospy::ListReturnResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ListReturnResponse_

typedef ::test_rospy::ListReturnResponse_<std::allocator<void> > ListReturnResponse;

typedef boost::shared_ptr< ::test_rospy::ListReturnResponse > ListReturnResponsePtr;
typedef boost::shared_ptr< ::test_rospy::ListReturnResponse const> ListReturnResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rospy::ListReturnResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rospy::ListReturnResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rospy::ListReturnResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rospy::ListReturnResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rospy::ListReturnResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f962153177b365e43b03cfe90160f33e";
  }

  static const char* value(const ::test_rospy::ListReturnResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf962153177b365e4ULL;
  static const uint64_t static_value2 = 0x3b03cfe90160f33eULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rospy/ListReturnResponse";
  }

  static const char* value(const ::test_rospy::ListReturnResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32[] abcd\n"
"\n"
;
  }

  static const char* value(const ::test_rospy::ListReturnResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.abcd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ListReturnResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rospy::ListReturnResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rospy::ListReturnResponse_<ContainerAllocator>& v)
  {
    s << indent << "abcd[]" << std::endl;
    for (size_t i = 0; i < v.abcd.size(); ++i)
    {
      s << indent << "  abcd[" << i << "]: ";
      Printer<int32_t>::stream(s, indent + "  ", v.abcd[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSPY_MESSAGE_LISTRETURNRESPONSE_H
