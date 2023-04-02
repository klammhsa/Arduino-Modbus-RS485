# Arduino-Modbus-RS485
This sketch demonstrates how to display sensor readings on a 16x2 LCD display connected to an Arduino board using I2C interface. The sensor readings are received through a serial port from a connected device, and are displayed on the LCD screen. The sketch uses the LiquidCrystal_I2C library to control the LCD display.

# Getting Started
To use this sketch, you will need the following:

- An Arduino board with I2C interface (We used Arduino Uno)
- A 16x2 LCD display with I2C interface 
- MAX485 TTL- RS485
- Potentiometer 

To set up the hardware, connect the I2C pins of the LCD display to the corresponding pins on the Arduino board. Connect the LED pin of the LCD display to a digital output pin on the Arduino board, and connect the Enable pin of the LCD display to another digital output pin on the Arduino board.

Upload the sketch to the Arduino board using the Arduino IDE. 

# How It Works
The sketch initializes the LCD display and sets up two digital output pins for the LED and Enable signals. It then enters an infinite loop, where it listens for incoming serial data from the connected device.

When a valid data packet is received, the sketch parses it to extract the slave ID and sensor reading value. If the slave ID matches the expected value (1 or 2), the sketch updates the LCD display with the corresponding sensor reading value.

Finally, the sketch toggles the Enable pin to enable or disable communication with the connected device.

Note that the sketch expects incoming data to be in a specific format ("iXVf"), and may not work with different protocol.

# Customization
To customize this sketch for your own use, you can modify the following:
- The I2C address and dimensions of the LCD display, which are defined in the LiquidCrystal_I2C constructor
- The digital output pins used for the LED and Enable signals, which are defined as constants at the beginning of the sketch
- The serial communication protocol used by the connected device, which is currently hardcoded in the sketch


## Contributors
- Kiana Hooshanfar
- Mahsa Kalam
