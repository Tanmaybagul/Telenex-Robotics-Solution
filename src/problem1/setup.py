from setuptools import find_packages, setup

package_name = 'problem1'

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
            'robot_telemetry_publisher = problem1.robot_telemetry_pub:main',
            'robot_telemetry_subscriber = problem1.robot_telemetry_sub:main',
            'robot_telemetry_trial_pub = problem1.robot2_pub:main',
            'robot_telemetry_trial_sub = problem1.robot2_sub:main',
        ],
    },
)
