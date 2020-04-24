# Little Pig Navigation - ROS Package

This package currently only contains 

## Installation

  This REPO contains four ROS packaged and referances a 5th.
  ```bash
  
  ```
    1. MAVROS -> Setup process:
    
      A. do a sudo apt Install for mavros
      
      B. sudo apt-get install geographiclib-doc
      
      C. opt/ros/melodic/lib/mavros/ -> sudo ./geographiclib_datasheet.sh
      
      D. sudo chmod 666 /dev/ttyTHS2
            (if running with physical hardware this command is run each time, I have a fix but havent tried it yet)
            
    2. Robot_Localozation -> Setup process:
    
      A. do a sudo apt Install for robot-localization
      
    3. gmapping -> Setup process:
    
      A. do a sudo apt Install for gmapping
      
    4. rpLIDAR -> Setup process:
    
      A. do a sudo apt Install for RPLIDAR
      
      B. sudo chmod 666 /dev/ttyUSB0
           (if running with physical hardware this command is run each time, I have a fix but havent tried it yet)
           
    5. rviz_satellite
    
      A. Download the REPO from here: https://github.com/gareth-cross/rviz_satellite
      
      B. Place in catkin_ws/src and do a catkin_make
      
      




