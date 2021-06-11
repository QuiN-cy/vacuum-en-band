// Generated by gencpp from file test_rosbag/Converged.msg
// DO NOT EDIT!


#ifndef TEST_ROSBAG_MESSAGE_CONVERGED_H
#define TEST_ROSBAG_MESSAGE_CONVERGED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <test_rosbag/SimpleMigrated.h>

namespace test_rosbag
{
template <class ContainerAllocator>
struct Converged_
{
  typedef Converged_<ContainerAllocator> Type;

  Converged_()
    : field1()
    , field2()  {
      field1.assign(0.0);
  }
  Converged_(const ContainerAllocator& _alloc)
    : field1()
    , field2()  {
  (void)_alloc;
      field1.assign(0.0);

      field2.assign( ::test_rosbag::SimpleMigrated_<ContainerAllocator> (_alloc));
  }



   typedef boost::array<float, 4>  _field1_type;
  _field1_type field1;

   typedef boost::array< ::test_rosbag::SimpleMigrated_<ContainerAllocator> , 4>  _field2_type;
  _field2_type field2;





  typedef boost::shared_ptr< ::test_rosbag::Converged_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::test_rosbag::Converged_<ContainerAllocator> const> ConstPtr;

}; // struct Converged_

typedef ::test_rosbag::Converged_<std::allocator<void> > Converged;

typedef boost::shared_ptr< ::test_rosbag::Converged > ConvergedPtr;
typedef boost::shared_ptr< ::test_rosbag::Converged const> ConvergedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::test_rosbag::Converged_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::test_rosbag::Converged_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace test_rosbag

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'rosgraph_msgs': ['/opt/ros/melodic/share/rosgraph_msgs/cmake/../msg'], 'test_rosbag': ['/home/student/rosws/src/ros_comm-noetic-devel/test/test_rosbag/bag_migration_tests/msg_current'], 'std_msgs': ['/home/student/rosws/src/std_msgs-kinetic-devel/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::Converged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::test_rosbag::Converged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::Converged_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::test_rosbag::Converged_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::Converged_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::test_rosbag::Converged_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::test_rosbag::Converged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fb364bc8a2a4b0b810763576f44bc36d";
  }

  static const char* value(const ::test_rosbag::Converged_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfb364bc8a2a4b0b8ULL;
  static const uint64_t static_value2 = 0x10763576f44bc36dULL;
};

template<class ContainerAllocator>
struct DataType< ::test_rosbag::Converged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "test_rosbag/Converged";
  }

  static const char* value(const ::test_rosbag::Converged_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::test_rosbag::Converged_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[4]           field1 # [1.2, 3.4, 5.6, 7.8]\n"
"SimpleMigrated[4]    field2 # [11, 22, 33, 44]\n"
"================================================================================\n"
"MSG: test_rosbag/SimpleMigrated\n"
"int32 data # 42\n"
;
  }

  static const char* value(const ::test_rosbag::Converged_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::test_rosbag::Converged_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field1);
      stream.next(m.field2);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Converged_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::test_rosbag::Converged_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::test_rosbag::Converged_<ContainerAllocator>& v)
  {
    s << indent << "field1[]" << std::endl;
    for (size_t i = 0; i < v.field1.size(); ++i)
    {
      s << indent << "  field1[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.field1[i]);
    }
    s << indent << "field2[]" << std::endl;
    for (size_t i = 0; i < v.field2.size(); ++i)
    {
      s << indent << "  field2[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::test_rosbag::SimpleMigrated_<ContainerAllocator> >::stream(s, indent + "    ", v.field2[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // TEST_ROSBAG_MESSAGE_CONVERGED_H
