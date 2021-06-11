#!/bin/bash 
source devel/setup.bash
sudo chmod 666 /dev/ttyUSB1
rosrun rosserial_python serial_node.py /dev/ttyUSB1

