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
      




