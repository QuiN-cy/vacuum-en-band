#! /usr/bin/env python

import rospy
from std_msgs.msg import Bool

rospy.init_node('talker', anonymous=True)

pub = rospy.Publisher('Gripper_Pomp', Bool, queue_size=10)

if __name__ == '__main__':
	try:
		Enable = True;
		while Enable: 		
			En = int(input())
			if En == 1: 
				pub.publish(True)
				En = 0
			if En == 2: 
				pub.publish(False)
				En = 0
			if En > 2:
				Enable = False

	except rospy.ROSInterruptException:
		pass
