from setuptools import find_packages, setup
import os
import glob

package_name = 'problem2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='tanmay',
    maintainer_email='tanmaybagul9096@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [

            'drone_telemetry_publisher = problem2.drone_telemetry_pub:main',
            'drone_telemetry_subscriber = problem2.drone_telemetry_sub:main',
        ],
    },
)
