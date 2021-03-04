#include <ros/ros.h>
#include <geometry_msgs/PointStamped.h>
#include <tf2_ros/transform_listener.h>

int main(int argc, char** argv) {
    ros::init(argc, argv, "little_pig_camera_link_tf_ls");
    ros::NodeHandle node;

    tf2_ros::Buffer tfBuffer;
    tf2_ros::TransformListener tfListener(tfBuffer);

    ros::Rate rate(10.0);

    while (node.ok()){
        geometry_msgs::TransformStamped tfStamped;
        try {
            tfBuffer.canTransform("camera_link", "chassis", ros::Time(0));
            tfStamped = tfBuffer.lookupTransform("camera_link", "chassis", ros::Time(0));
            
        }
        catch (tf2::LookupException &ex) {
            ROS_WARN("%s", ex.what());
            ros::Duration(1.0).sleep();

        }
        rate.sleep();
    }
    return 0;
}