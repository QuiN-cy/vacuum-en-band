#!/bin/bash 
source devel/setup.bash
sudo chmod 666 /dev/ttyUSB0
rosrun rosserial_python serial_node2.py /dev/ttyUSB0
