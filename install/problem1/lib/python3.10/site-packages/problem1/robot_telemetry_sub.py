import rclpy 
from rclpy.node import Node
from custom_interfaces.msg import RobotTelemetry
from geometry_msgs.msg import Point 

class RobotTelemetrySubscriber(Node):
    def __init__(self):
        super().__init__('robot_telemetry_subscriber')
        self.subscription = self.create_subscription(
            RobotTelemetry,
            'robot_telemetry',
            self.listener_callback,
            10
        )
        self.subscription

    def listener_callback(self, msg):
        self.get_logger().info(f'Received telemetry data for robot {msg.robot_id}- Battery: {msg.battery_level},Position : [{msg.position.x}, {msg.position.y}, {msg.position.z}],Task Engaged : {msg.task_engaged}')
        

def main(args=None):
        rclpy.init(args=args)

        #create node
        node = RobotTelemetrySubscriber()

        #run node
        rclpy.spin(node)

        #destroy node
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
        main()