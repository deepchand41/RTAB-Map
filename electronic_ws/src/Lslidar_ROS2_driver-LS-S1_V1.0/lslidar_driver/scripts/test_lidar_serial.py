import serial

# Replace with your USB port
SERIAL_PORT = '/dev/ttyUSB0'
BAUD_RATE = 460800  # match what the driver opened, or 230400

try:
    ser = serial.Serial(SERIAL_PORT, BAUD_RATE, timeout=1)
    print(f"Opened {SERIAL_PORT} at {BAUD_RATE} baud")
except Exception as e:
    print(f"Failed to open serial port: {e}")
    exit()

print("Reading 100 bytes from LiDAR...")
try:
    data = ser.read(100)
    if data:
        print(f"Received {len(data)} bytes")
        print(data[:50])  # print first 50 bytes
    else:
        print("No data received")
finally:
    ser.close()
