#!/bin/bash 

echo "Setting up communication devices"

sudo chmod 666 /dev/ttyUSB0
sudo chmod 666 /dev/ttyUSB1

echo "Start communication with Gripper"
sudo ./Gripper_Serial.sh
echo "Gripper communication started"
sudo ./Band_Serial.sh
echo "Band communication started"


