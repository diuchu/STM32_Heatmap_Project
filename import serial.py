import serial

# Kiểm tra đúng cổng COM của UART2 (PA2/PA3)
ser = serial.Serial('COM6', 115200, timeout=1) 

while True:
    if ser.in_waiting > 0:
        # Đọc dữ liệu và in ra màn hình
        data = ser.readline().decode('utf-8').strip()
        print(f"Nhận được: {data}")
"""
import serial
import numpy as np
import matplotlib.pyplot as plt
import time

# ================= CONFIG =================
PORT = "COM6"       # đổi đúng COM
BAUD = 115200
ROWS = 30
COLS = 30

FRAME_HEADER = bytes([170, 85])
FRAME_FOOTER = bytes([13, 10])
FRAME_SIZE = ROWS * COLS

# ================= SERIAL =================
ser = serial.Serial(PORT, BAUD, timeout=1)
time.sleep(2)
ser.reset_input_buffer()

print("🟢 Serial connected, waiting for data...")

# ================= PLOT ==================
plt.ion()
fig, ax = plt.subplots()
heatmap = ax.imshow(
    np.zeros((ROWS, COLS)),
    cmap="hot",
    vmin=0,
    vmax=255
)
plt.colorbar(heatmap)
ax.set_title("Pressure Heatmap 30x30")

frame_count = 0
last_time = time.time()

# ================= MAIN LOOP ==============
while True:
    # tìm header
    if ser.read(1) != FRAME_HEADER[:1]:
        continue
    if ser.read(1) != FRAME_HEADER[1:]:
        continue

    data = ser.read(FRAME_SIZE)
    if len(data) != FRAME_SIZE:
        print("⚠️ Frame thiếu byte")
        continue

    footer = ser.read(2)
    if footer != FRAME_FOOTER:
        print("⚠️ Sai footer")
        continue

    # chuyển data
    matrix = np.frombuffer(data, dtype=np.uint8).reshape((ROWS, COLS))

    # ==== TÍNH TOÁN TRÊN PC (CHỨNG MINH) ====
    avg_pressure = np.mean(matrix)
    max_pressure = np.max(matrix)

    # update plot
    heatmap.set_data(matrix)
    ax.set_title(f"Avg={avg_pressure:.1f}  Max={max_pressure}")
    fig.canvas.draw_idle()
    fig.canvas.flush_events()

    frame_count += 1
    if frame_count % 10 == 0:
        now = time.time()
        fps = 10 / (now - last_time)
        last_time = now
        print(f"📦 Frame {frame_count} | FPS ~ {fps:.1f}")
"""