import rclpy
from rclpy.node import Node
from custom_interfaces.msg import DroneTelemetry
from geometry_msgs.msg import Twist

class DroneTelemetrySubscriber(Node):
    def __init__(self):
        super().__init__('drone_telemetry_subscriber')

        self.subscription = self.create_subscription(
            DroneTelemetry,
            'drone_telemetry',
            self.timer_callback,
            10
        )

    def timer_callback(self, msg):
        self.get_logger().info(f'Received the {msg}')

def main(args=None):
    rclpy.init(args=args)

    #create the node
    node = DroneTelemetrySubscriber()

    #run the node
    rclpy.spin(node)

    #destroy the node

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()