# Little Pig Navigation - ROS Package

## Relevant Package Descriptiions

#### MAVROS
This package provided by ROS is used so that MAVLink which is an extendable communication node that will be able to proxy to be able to ground control station. The communication that is used is for driver for many different autopilots used with the MAVLink protocols used during the communication. It will also provide UDP MAVLink bridge so that it can have ground control stations.

#### robot_localization
For this package it has a collection of state estimation nodes that can be implemented to a nonlinear state estimator so that a robot such as Little Pig is able to move within a 3D space. The two estimation nodes are ekf_localization_node (ekf: Extended Kalman Filter) and ukf_localization_node (ukf: Unscented Kalman Filter). Another important node contained within this package is the navsat_transform_node which is used in the aid of integrating the GPS data. Some features that this package has also are fusion of arbitrary number sensors, per-senor input customization, and continuous estimation.

#### gmapping
The package will contain the gmapping which is provided from the OpenSlam and a ROS wrapper. The package will provide the laser-based SLAM (Simultaneous Localization and Mapping) as a node that will be in ROS and this node is called slam_gmapping. When using the slam_gmapping node it will allow to create a 2D occupancy grid map that will be from the laser and pose the data that has been collected by the robot.

#### rpLIDAR
Thsi package will provide basic device handling for the 2D Laser Scanner RPLIDAR A1, A2, and A3. The RPLIDAR is a very low-cost LIDAR sensor that is just right for indoor robotic SLAM applications. It can provide a 360-degree scan field. The rotating frequency is 5.5hz/10hz and for A1 it has 8-meter distance of range, for A2 it has 16-meter range, and for A3 it has a 25-meter range. It can also perform high speed image processing for A1, A2, and A3. For A1 it can support up to 2K/4K samples per second, A2 4K/8K samples per second, and A3 16K samples per second. A great feature that is provided is that RPLIDAR will also self-adapt and will adjust to the current scanning speed as well.

#### rviz_satellite
This is just being used so that the rviz software when being used will have a plugin so that it is able to display the satellite maps it has pulled and loaded directly from the internet.

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

### Robot-Localization setup:
```bash
sudo apt install ros-melodic-robot-localization
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
      




