#include <ros/ros.h>
#include <tf2/LinearMath/Quaternion.h>
#include <tf2_ros/transform_broadcaster.h>
#include <geometry_msgs/TransformStamped.h>
#include <geometry_msgs/Pose.h>

std::string robot_name;

void poseCallback(const geometry_msgs::PoseConstPtr& msg) {

    static tf2_ros::TransformBroadcaster br;
    geometry_msgs::TransformStamped tfStamped;

    tfStamped.header.stamp = ros::Time::now();
    tfStamped.header.frame_id = "odom";
    tfStamped.child_frame_id = robot_name;
    tfStamped.transform.translation.x = msg -> position.x;
    tfStamped.transform.translation.y = msg -> position.y;
    tfStamped.transform.translation.z = msg -> position.z;

    tf2::Quaternion q;
    q.setRPY(0, 0, msg->orientation.w);

    tfStamped.transform.rotation.x = q.x();
    tfStamped.transform.rotation.y = q.y();
    tfStamped.transform.rotation.z = q.z();
    tfStamped.transform.rotation.w = q.w();

    br.sendTransform(tfStamped);
}

int main(int argc, char** argv) {

    ros::init(argc, argv, "little_pig_base_link_br");

    ros::NodeHandle private_node("~");
    if (!private_node.hasParam("robot")){
        if (argc != 2) {ROS_ERROR("Expected a robot to be named as an argument"); return -1;};
        robot_name = argv[1];
    }
    else
    {
        private_node.getParam("robot", robot_name);
    }

    ros::NodeHandle node;
    ros::Subscriber sub = node.subscribe(robot_name+"/pose", 10, &poseCallback);

    ros::spin();
    return 0;
}