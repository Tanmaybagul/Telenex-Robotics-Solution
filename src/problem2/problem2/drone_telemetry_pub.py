import rclpy
from rclpy.node import Node
from custom_interfaces.msg import DroneTelemetry
from geometry_msgs.msg import Twist
import random

class DroneTelemetryPublisher(Node):
    def __init__(self):
        super().__init__('drone_telemetry_publisher')
        self.publisher_ = self.create_publisher(DroneTelemetry, 'drone_telemetry', 10)
        timer_period = 2.0
        self.timer = self.create_timer(timer_period, self.timer_callback)

    def timer_callback(self):
        msg = DroneTelemetry()
        
        twist = Twist()
        
        twist.linear.x = float(random.randint(0,100))
        twist.linear.y = float(random.randint(0,100))
        twist.linear.z = float(random.randint(0,100))

        twist.angular.x = float(random.randint(0,100))
        twist.angular.y = float(random.randint(0,100))
        twist.angular.z = float(random.randint(0,100))

        msg.velocity_vector = twist
        msg.power_level = float(random.randint(0,100))
        msg.altitude = float(random.randint(100,500))

        self.publisher_.publish(msg)
        self.get_logger().info(f'Published : {msg}')

def main(args=None):
    rclpy.init(args=args)

    #create node

    node =  DroneTelemetryPublisher()

    #run node

    rclpy.spin(node)

    #Destroy node

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()