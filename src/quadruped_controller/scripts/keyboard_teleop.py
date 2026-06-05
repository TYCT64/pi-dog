#!/usr/bin/env python3
import sys
import select
import termios
import tty
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from geometry_msgs.msg import Twist, Vector3

msg = """
Pi-Dog 鍵盤遙控器 
---------------------------
狀態切換 :
  1 : 進入 Idle (怠速放軟)
  2 : 進入 Stand (站立)
  3 : 進入 Walk (步行模式)

移動控制 (需在 Walk 模式):
       W
   A   S   D
  Q/E : 左轉 / 右轉
  空白鍵 : 緊急煞車 (速度歸零)

姿態控制 (需在 Stand 模式):
  I/K : 點頭 / 抬頭 (Pitch)
  J/L : 左傾 / 右傾 (Roll)
  U/O : 左搖 / 右搖 (Yaw)
  C   : 姿態置中歸零

按 CTRL-C 退出
"""

# 安全極限設定
MAX_SPEED = 0.3        # 最大平移速度
MAX_YAW_RATE = 0.5     # 最大旋轉速度
MAX_ANGLE = 0.4        # 最大姿態角度 (弧度，0.4 rad 約等於 23 度)
ANGLE_STEP = 0.05      # 每次按鍵的姿態微調量 (約 2.8 度)
SPEED_STEP = 0.02      # 每次按鍵的速度微調量

class KeyboardTeleop(Node):
    def __init__(self):
        super().__init__('keyboard_teleop_node')
        # 建立與大腦對接的發射器
        self.pub_stand = self.create_publisher(Bool, '/stand_cmd', 10)
        self.pub_idle = self.create_publisher(Bool, '/idle_cmd', 10)
        self.pub_walk = self.create_publisher(Bool, '/walk_cmd', 10)
        self.pub_vel = self.create_publisher(Twist, '/cmd_vel', 10)
        self.pub_angle = self.create_publisher(Vector3, '/angle_cmd', 10)

        # 狀態變數
        self.speed_x = 0.0
        self.speed_y = 0.0
        self.yaw_rate = 0.0  
        self.pitch = 0.0
        self.roll = 0.0
        self.yaw = 0.0

    def publish_state(self, state):
        b = Bool()
        b.data = True
        if state == 'idle': self.pub_idle.publish(b)
        elif state == 'stand': self.pub_stand.publish(b)
        elif state == 'walk': self.pub_walk.publish(b)

    def publish_vel(self):
        t = Twist()
        t.linear.x = self.speed_x
        t.linear.y = self.speed_y
        t.angular.z = self.yaw_rate
        self.pub_vel.publish(t)

    def publish_angle(self):
        a = Vector3()
        a.x = self.roll  # Phi
        a.y = self.pitch # Theta
        a.z = self.yaw   # Psi
        self.pub_angle.publish(a)

    def reset_all(self):
        """將所有速度與姿態歸零並立刻發射"""
        self.speed_x = self.speed_y = self.yaw_rate = 0.0
        self.pitch = self.roll = self.yaw = 0.0
        self.publish_vel()
        self.publish_angle()

def get_key(settings):
    tty.setraw(sys.stdin.fileno())
    # 非阻塞讀取鍵盤
    rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
    if rlist:
        key = sys.stdin.read(1)
    else:
        key = ''
    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key

def clamp(value, limit):
    """將數值限制在正負 limit 之間，避免麻花捲"""
    return max(-limit, min(value, limit))

def main(args=None):
    settings = termios.tcgetattr(sys.stdin)
    rclpy.init(args=args)
    node = KeyboardTeleop()

    print(msg)

    try:
        while rclpy.ok():
            key = get_key(settings)

            if key == '\x03': # Ctrl-C
                break

            # ==========================================
            # 1. 狀態切換 (切換時強制清除舊紀錄)
            # ==========================================
            if key == '1':
                print(">> 切換至 Idle 模式 (清除殘留指令)")
                node.reset_all()
                node.publish_state('idle')
            elif key == '2':
                print(">> 切換至 Stand 模式 (清除殘留速度)")
                node.reset_all()
                node.publish_state('stand')
            elif key == '3':
                print(">> 切換至 Walk 模式 (清除殘留姿態)")
                node.reset_all()
                node.publish_state('walk')

            # ==========================================
            # 2. 速度控制 (加入安全極限)
            # ==========================================
            elif key == 'w': node.speed_x = clamp(node.speed_x + SPEED_STEP, MAX_SPEED)
            elif key == 's': node.speed_x = clamp(node.speed_x - SPEED_STEP, MAX_SPEED)
            elif key == 'a': node.speed_y = clamp(node.speed_y + SPEED_STEP, MAX_SPEED)
            elif key == 'd': node.speed_y = clamp(node.speed_y - SPEED_STEP, MAX_SPEED)
            elif key == 'q': node.yaw_rate = clamp(node.yaw_rate + 0.1, MAX_YAW_RATE)
            elif key == 'e': node.yaw_rate = clamp(node.yaw_rate - 0.1, MAX_YAW_RATE)
            elif key == ' ': 
                node.speed_x = node.speed_y = node.yaw_rate = 0.0

            # ==========================================
            # 3. 姿態控制 (步進量改小 + 加入防扭斷保護)
            # ==========================================
            elif key == 'i': node.pitch = clamp(node.pitch + ANGLE_STEP, MAX_ANGLE)
            elif key == 'k': node.pitch = clamp(node.pitch - ANGLE_STEP, MAX_ANGLE)
            elif key == 'j': node.roll = clamp(node.roll - ANGLE_STEP, MAX_ANGLE)
            elif key == 'l': node.roll = clamp(node.roll + ANGLE_STEP, MAX_ANGLE)
            elif key == 'u': node.yaw = clamp(node.yaw + ANGLE_STEP, MAX_ANGLE)
            elif key == 'o': node.yaw = clamp(node.yaw - ANGLE_STEP, MAX_ANGLE)
            elif key == 'c':
                node.pitch = node.roll = node.yaw = 0.0 # 歸零

            # 有按鍵就發射
            if key in ['w','a','s','d','q','e',' ']:
                node.publish_vel()
            if key in ['i','k','j','l','u','o','c']:
                node.publish_angle()

    except Exception as e:
        print(e)
    finally:
        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()