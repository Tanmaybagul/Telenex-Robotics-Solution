import rclpy
from rclpy.node import Node
from custom_interfaces.msg import RobotTelemetry
from geometry_msgs.msg import Point
import random

class RobotTelemetryPublisher(Node):
    def __init__(self):
        super().__init__('robot_telemetry_publisher')
        self.publisher_1= self.create_publisher(RobotTelemetry, 'robot_telemetry',10)
        #self.publisher_2 = self.create_publisher(RobotTelemetry, 'robot_telemetry',10)
        timer_period = 2.0
        self.timer_1 = self.create_timer(timer_period, self.robot1)
       # self.timer_2 = self.create_timer(timer_period, self.robot2)

    def robot1(self):
        msg = RobotTelemetry()
        msg.robot_id = random.randint(0,10)
        msg.battery_level = float(random.randint(0,100))
        msg.position = Point(x = float(random.randint(0,100)), y= float(random.randint(0,100)), z = float(random.randint(0,100)))
        msg.task_engaged = bool(random.randint(0,1))
        self.publisher_1.publish(msg)
        self.get_logger().info(f'Publishing: {msg}')
    
    # def robot2(self):
    #     msg = RobotTelemetry()
    #     msg.robot_id = 234
    #     msg.battery_level = 75.0
    #     msg.position = Point(x = float(random.randint(0,100)), y= float(random.randint(0,100)), z = float(random.randint(0,100)))
    #     msg.task_engaged = True
    #     self.publisher_2.publish(msg)
    #     self.get_logger().info(f'Publishing : {msg}')

def main(args=None):
    rclpy.init(args=args)

    #create node
    node = RobotTelemetryPublisher()

    #run node
    rclpy.spin(node)

    #destroy node
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()        