#include "chimera_viz/template_panel.hpp"
#include "ui/ui_template_panel.h"

TemplatePanel::TemplatePanel(QWidget* parent) : Panel(parent), ui(new Ui::Template_Panel){
    
    ui->setupUi(this);

}

void TemplatePanel::onInitialize()
{


    //   // Access the abstract ROS Node and
    //   // in the process lock it for exclusive use until the method is done.
    //   node_ptr_ = getDisplayContext()->getRosNodeAbstraction().lock();

    //   // Get a pointer to the familiar rclcpp::Node for making subscriptions/publishers
    //   // (as per normal rclcpp code)
    //   rclcpp::Node::SharedPtr node = node_ptr_->get_raw_node();

    //   // Create a String publisher for the output
    //   publisher_ = node->create_publisher<std_msgs::msg::String>("/output", 10);

    //   // Create a String subscription and bind it to the topicCallback inside this class.
    //   subscription_ = node->create_subscription<std_msgs::msg::String>("/input", 10, std::bind(&DemoPanel::topicCallback, this, std::placeholders::_1));
}

TemplatePanel::~TemplatePanel() = default;

#include <pluginlib/class_list_macros.hpp>
PLUGINLIB_EXPORT_CLASS(TemplatePanel, rviz_common::Panel)