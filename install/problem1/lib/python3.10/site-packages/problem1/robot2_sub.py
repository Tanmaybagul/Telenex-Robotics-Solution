import rclpy
from rclpy.node import Node
from custom_interfaces.msg import RobotTelemetry
from geometry_msgs.msg import Point

class RobotSubscriber(Node):
    def __init__(self):
        super().__init__('robot2_sub')

        self.sub = self.create_subscription(
            RobotTelemetry,
            'robot_telemetry',
            self.robot_sub,
            10
        )

    def robot_sub(self,msg):

        while msg.task_engaged == False :
            if msg.battery_level > 40:
                self.get_logger().info(f'Robot {msg.robot_id} is Ready to assign the tasks')
                msg.task_engaged = True
                break
            elif msg.battery_level < 40:
                self.get_logger().info(f'Battery low for Robot {msg.robot_id}')
                break
            else :
                self.get_logger().info(f'Something Went Wrong')
                break
        else :
            self.get_logger().info(f'Robot {msg.robot_id} is Busy')
            

def main(args=None):
    rclpy.init(args=args)

    #create node
    node = RobotSubscriber()

    #run node
    rclpy.spin(node)

    #destroy node
    node.destroy_node()

    rclpy.shutdown()

if __name__ == '__main__':
    main()
            

