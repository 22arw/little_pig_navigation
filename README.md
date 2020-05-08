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
```

### rviz_satellite setup:
```bash
cd catkin_ws/
cd src/
git clone https://github.com/gareth-cross/rviz_satellite.git
catkin_make
```

## To set up device file access for MAVROS and for the LIDAR
Open terminal, navigate to,
```bash
etc/udev/rules.d/
```
create a new config file:
```bash
sudo vim 50-usb-scale.conf
```
enter the following two lines
```bash
KERNEL=="ttyUSB0", MODE="0666"
KERNEL=="ttyTHS2", MODE="0666"
```
save the file and exit.
Restart the machine.

## TESTING
To test the packages, run the following commands
```bash
roslaunch little_pig_rviz basic_pig.launch
```
```bash
roslaunch little_pig_navigation navigation.launch
```
      




