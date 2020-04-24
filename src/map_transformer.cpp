#include <ros/ros.h>

int32_t publish_rate_ = 100;
tf::TransformBroadcaster tf_br_;
tf::StampedTransform tf_map_to_odom_;

// set up parent and child frames
tf_map_to_odom_.frame_id_ = std::string("map");
tf_map_to_odom_.child_frame_id_ = std::string("odom");

// set up publish rate
ros::Rate loop_rate(publish_rate_);

// main loop
while (ros::ok())
{
  // time stamp
  tf_map_to_odom_.stamp_ = ros::Time::now();

  // specify actual transformation vectors from odometry
  // NOTE: zeros have to be substituted with actual variable data
  tf_map_to_odom_.setOrigin(tf::Vector3(0.0f, 0.0f, 0.0f));
  tf_map_to_odom_.setRotation(tf::Quaternion(0.0f, 0.0f, 0.0f));

  // broadcast transform
  tf_br_.sendTransform(tf_map_to_odom_);

  ros::spinOnce();
  loop_rate.sleep();
}
