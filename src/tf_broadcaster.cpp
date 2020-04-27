#include <ros/ros.h>
#include <tf/transform_broadcaster.h>

int main(int argc, char** argv)
{
 ros::init(argc, argv, "little_pig_tf_publisher");
 ros::NodeHandle n;

 ros::Rate r(100);

 tf::TransformBroadcaster broadcaster;

 while (n.ok()) 
 {
     /**
      * @brief the quaternion values are related to Roll - Pitch - Yaw the Vector3 values correlate to the offset
      *        of the laser link to the center of little pig and will need to be updated accordingly
      * 
      * @param base_link is derived from the URDF file
      * 
      * @param laser_link is derived from the URDF file
      * 
      */
     broadcaster.sendTransform(
         tf::StampedTransform(
             tf::Transform(tf::Quaternion(0, 0, 0, 1), tf::Vector3(0.1, 0.0, 0.2)),
             ros::Time::now(), "base_link", "laser_link"
         )
     );

     r.sleep();
 }
    
}