import rclpy
from rclpy.node import Node
from custom_interfaces.msg import ObjectMetaData
from geometry_msgs.msg import Vector3, Quaternion
import random
from random import randint, uniform

class VisionProcessingNode(Node):
    def __init__(self):
        super().__init__('vision_processing_node')
        self.publisher_ = self.create_publisher(ObjectMetaData, 'object_detection',10)
        timer_period = 1.0
        self.timer = self.create_timer(timer_period, self.publish_object_data)

    def publish_object_data(self):
        msg = ObjectMetaData()
        msg.object_id = random.randint(1,100)
        object_selector = random.randint(0,1)
        if object_selector == 0:
            msg.object_type = "box"
        else:
            msg.object_type = 'cylinder'

        msg.position = Vector3(x=uniform(-5.0,5.0), y = uniform(-5.0,5.0), z = uniform(0.0,2.0))
        msg.orientation = Quaternion(x=0.0, y=0.0, z=0.0, w=0.0)
        msg.size = Vector3(x=uniform(0.1,2.0), y=uniform(0.1,2.0), z=uniform(0.0,2.0))
        is_graspable = randint(0,1)
        if is_graspable == 1:
            msg.graspable = True
        else:
            msg.graspable = False

        self.publisher_.publish(msg)
        self.get_logger().info(f'Published object : ID = {msg.object_id} , Type = {msg.object_type} , Graspable = {msg.graspable}')

def main(args=None):
    rclpy.init(args=args)

    #create the node 
    node = VisionProcessingNode()

    #run the node 
    rclpy.spin(node)

    #destroy th node
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()