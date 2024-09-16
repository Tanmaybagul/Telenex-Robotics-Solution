import rclpy
from rclpy.node import Node
from custom_interfaces.msg import RobotTelemetry
from geometry_msgs.msg import Point

class Robot_publisher(Node):
    def __init__(self):
        super().__init__('Robot_data_publisher')

        self.publisher_ = self.create_publisher(RobotTelemetry, 'robot_data', 10)
        self.time = 2.0
        self.timer = self.create_timer(self.time , self.robot_data_publisher)

    def robot_data_publisher(self):
        msg = RobotTelemetry()
        msg.task_engaged = True
        msg.robot_id = 123
        msg.battery_level = 50.0
        msg.position = Point(x=1.0, y=10.0, z=45.0)
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published : {msg}')

def main(args=None):
    rclpy.init(args=args)

    #create node
    node = Robot_publisher()
    #Run node

    rclpy.spin(node)

    #destroy node
    node.destroy_node()
    rclpy.shutdown

if __name__ == '__main__':
    main()