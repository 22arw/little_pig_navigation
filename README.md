# Little Pig Navigation - ROS Package
## Installation

This REPO contains four ROS packages and referances a 5th.
### MAVROS setup:
```bash
sudo apt-get install ros-melodic-mavros
sudo apt-get install geographiclib-tools
sudo apt-get install geographiclib-doc
```
Navigate to opt/ros/melodic/lib/mavros/
```bash
sudo ./install_geographiclib_datasets.sh
```
If running mavros with physical hardware you must run 
```bash
sudo chmod 666 /dev/ttyTHS2
```      
### Robot_Localozation setup:
```bash
sudo apt install ros-melodic-robot_localization
```
### gmapping setup:
```bash
sudo apt install ros-melodic-gmapping
```

### rpLIDAR setup:
 A. do a sudo apt Install for RPLIDAR
```bash
sudo apt install ros-melodic-rplidar-ros
sudo chmod 666 /dev/ttyUSB0
```

### rviz_satellite setup:
```bash
cd catkin_ws/
cd src/
git clone https://github.com/gareth-cross/rviz_satellite.git
catkin_make
```

### Waypoint Navigation:
Pull the repository and catkin_make. Be sure to install dependencies that may give you errors. 

To run waypoint navigation: I used the full.launch file. Be sure to make sure your buttons are correctly mapped in the "joy_launch_control_sim.launch" file. Use ```jstest /dev/input/js0``` to verify that you have the correct controller mappings. If the controller falls into js1, you will need to adjust it accordingly. 

Run ```roslaunch little_pig_ctrl full.launch```. In a separate terminal, start ```roslaunch little_pig_navigation joy_launch_control_sim.launch``` and follow the instructions on the terminal. 

Please contact Jimmy (jimdvu@gmail.com) for questions. This readMe will not contain all necessary details because i don't even know what i did at some points.