import rclpy 
from rclpy.node import Node
from custom_interfaces.srv import FarmManagement

class FarmManagementService(Node):
    def __init__(self):
        super().__init__("farm_management_system")
        self.service = self.create_service(
            FarmManagement,
            "farm_management_service",
            self.farm_management_system_callback,
        )

    def farm_management_system_callback(self, request, response):
        if request.crop_yield >= 70.00:
            self.get_logger().info(f"Robot : {request.robot_id} is in -- {request.status} -- mode")
            if request.status.lower() == "i":
                response.response = "H"
                self.get_logger().info(f'Robot : {request.robot_id} go to Harvest')
            elif request.status.lower() == "m":
                request.response = "M"
                self.get_logger().info(f"Robot : {request.robot_id} is in Maintainance")
            elif request.status.lower() == "h":
                response.response = "H"
                self.get_logger().info(f"Robot : {request.robot_id} go for the next field")
            else:
                self.get_logger().info(f"Invalid Status for Robot : {request.status}")
            
        else:
            response.response = request.status.lower()
            self.get_logger().info(f"Robot : {request.robot_id} is in -- {request.status}-- mode ")
            self.get_logger().info(f"Crop Yield is {request.crop_yield} no need to worry")
        
        return response

def main(args=None):
    rclpy.init(args=args)

    #create the node 

    node = FarmManagementService()

    #Spin the node or run the node 
    rclpy.spin(node)

    #destroy the node and shutdown

    node.destroy_node()
    rclpy.shutdown     

if __name__ == '__main__':
    main()       