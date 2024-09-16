import rclpy
from rclpy.node import Node
from custom_interfaces.msg import ObjectMetaData

class RoboticArmNode(Node):
    def __init__(self):
        super().__init__('robotic_arm_node')

        self.subscription = self.create_subscription(
            ObjectMetaData,
            'object_detection',
            self.process_object_data,
            10
        )

    def process_object_data(self,msg):
        graspable = msg.graspable
        object_type = msg.object_type
        object_id = msg.object_id

        if graspable == True:
            self.get_logger().info(f'Object ID : {object_id} ({object_type}) is graspable)')
        else:
            self.get_logger().info(f'Object ID : {object_id} ({object_type}) is not graspable)')

def main(args=None):
    rclpy.init(args=args)

    #create the node 
    node = RoboticArmNode()

    #run the node 
    rclpy.spin(node)

    #destroy the npde

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()