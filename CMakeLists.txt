cmake_minimum_required(VERSION 2.8.3)

project(little_pig_navigation)

find_package(catkin REQUIRED COMPONENTS rospy tf)

catkin_package()

include_directories(${catkin_INCLUDE_DIRS})

add_executable(tf_broadcaster src/tf_broadcaster.cpp)
add_executable(tf_listener src/tf_listener.cpp)
target_link_libraries(tf_broadcaster ${catkin_LIBRARIES})
target_link_libraries(tf_listener ${catkin_LIBRARIES})

install(DIRECTORY config src DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
