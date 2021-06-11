#! /usr/bin/env python

import rospy
from std_msgs.msg import Int8


def talker():
	pub = rospy.Publisher('chatter', Int8, queue_size=10)
	rospy.init_node('talker', anonymous=True)
	#rate = rospy.Rate(1) # 1hz
	while not rospy.is_shutdown():
		hello_str = 4
		rospy.loginfo(hello_str)
		pub.publish(hello_str)
		#rate.sleep()

if __name__ == '__main__':
	try:
		En = int(input())
		if En == 1: 
			talker()
			En = 0
	except rospy.ROSInterruptException:
		pass
