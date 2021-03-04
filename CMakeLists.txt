cmake_minimum_required(VERSION 2.8.3)

project(little_pig_navigation)

find_package(catkin REQUIRED COMPONENTS rospy tf)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

#Broadcasters
#base_link
add_executable(little_pig_base_link_tf_br src/little_pig_base_link_tf_br.cpp)
target_link_libraries(little_pig_base_link_tf_br ${catkin_LIBRARIES})

#chassis
add_executable(little_pig_chassis_tf_br src/little_pig_chassis_tf_br.cpp)
target_link_libraries(little_pig_chassis_tf_br ${catkin_LIBRARIES})

#camera_link
add_executable(little_pig_camera_link_tf_br src/little_pig_camera_link_tf_br.cpp)
target_link_libraries(little_pig_camera_link_tf_br ${catkin_LIBRARIES})

#imu_link
add_executable(little_pig_imu_link_tf_br src/little_pig_imu_link_tf_br.cpp)
target_link_libraries(little_pig_imu_link_tf_br ${catkin_LIBRARIES})

#laser_link
add_executable(little_pig_laser_link_tf_br src/little_pig_laser_link_tf_br.cpp)
target_link_libraries(little_pig_laser_link_tf_br ${catkin_LIBRARIES})

#laser_link_back
add_executable(little_pig_laser_link_back_tf_br src/little_pig_laser_link_back_tf_br.cpp)
target_link_libraries(little_pig_laser_link_back_tf_br ${catkin_LIBRARIES})

#front_laser
add_executable(little_pig_front_laser_tf_br src/little_pig_front_laser_tf_br.cpp)
target_link_libraries(little_pig_front_laser_tf_br ${catkin_LIBRARIES})

#back_laser
add_executable(little_pig_back_laser_tf_br src/little_pig_back_laser_tf_br.cpp)
target_link_libraries(little_pig_back_laser_tf_br ${catkin_LIBRARIES})


#Listeners
#base_link
add_executable(little_pig_base_link_tf_ls src/little_pig_base_link_tf_ls.cpp)
target_link_libraries(little_pig_base_link_tf_ls ${catkin_LIBRARIES})

#chassis
add_executable(little_pig_chassis_tf_ls src/little_pig_chassis_tf_ls.cpp)
target_link_libraries(little_pig_chassis_tf_ls ${catkin_LIBRARIES})

#camera_link
add_executable(little_pig_camera_link_tf_ls src/little_pig_camera_link_tf_ls.cpp)
target_link_libraries(little_pig_camera_link_tf_ls ${catkin_LIBRARIES})

#imu_link
add_executable(little_pig_imu_link_tf_ls src/little_pig_imu_link_tf_ls.cpp)
target_link_libraries(little_pig_imu_link_tf_ls ${catkin_LIBRARIES})

#laser_link
add_executable(little_pig_laser_link_tf_ls src/little_pig_laser_link_tf_ls.cpp)
target_link_libraries(little_pig_laser_link_tf_ls ${catkin_LIBRARIES})

#laser_link_back
add_executable(little_pig_laser_link_back_tf_ls src/little_pig_laser_link_back_tf_ls.cpp)
target_link_libraries(little_pig_laser_link_back_tf_ls ${catkin_LIBRARIES})

#front_laser
add_executable(little_pig_front_laser_tf_ls src/little_pig_front_laser_tf_ls.cpp)
target_link_libraries(little_pig_front_laser_tf_ls ${catkin_LIBRARIES})

#back_laser
add_executable(little_pig_back_laser_tf_ls src/little_pig_back_laser_tf_ls.cpp)
target_link_libraries(little_pig_back_laser_tf_ls ${catkin_LIBRARIES})

install(DIRECTORY config src DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
