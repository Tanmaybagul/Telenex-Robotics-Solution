import sys
import rclpy 
from rclpy.node import Node
from custom_interfaces.srv import FarmManagement


class FarmManagementClient(Node):
    def __init__(self):
        super().__init__("farm_management_client")
        self.client = self.create_client(FarmManagement, "farm_management_service")
        while not self.client.wait_for_service(timeout_sec=2.0):
            self.get_logger().info(f"Service is not available , Waiting the service to start...")

    def send_request(self):
        request = FarmManagement.Request()
        request.robot_id = int(sys.argv[1])
        request.crop_yield = float(sys.argv[2])
        request.status = str(sys.argv[3]).lower()
        
        self.future = self.client.call_async(request)



def main(args=None):
    rclpy.init(args=args)

    #create the node
    node = FarmManagementClient()
    node.send_request()


    #run the node
    while rclpy.ok():
        rclpy.spin_once(node)

        if node.future.done():
            try:
                response = node.future.result()
            except Exception as e:
                node.get_logger().info(
                    f"Service call failed {e}"
                )
            else:
                node.get_logger().info(
                    f"Response from server {response.response}"
                )
            break

    #destroy the node
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()