# 💡 LED Blink using PWM (`analogWrite()`) | Arduino Uno

## 📌 Overview

This project demonstrates how to control an LED using the **PWM (Pulse Width Modulation)** feature of the Arduino Uno. The LED is connected to **Digital Pin 11**, which supports `analogWrite()`. The program alternates the LED between full brightness and OFF every second.

This project helps beginners understand the basics of Arduino programming and PWM output.

---

# 🎯 Objective

* Learn how to use PWM pins on Arduino Uno
* Understand the `analogWrite()` function
* Practice controlling an LED using software
* Build a foundation for future embedded systems projects

---

# 🛠️ Components Used

* Arduino Uno
* 1 × LED
* 1 × 220Ω Resistor
* Breadboard
* Jumper Wires

---

# 🔌 Circuit Connections

| Arduino Pin              | Component                             |
| ------------------------ | ------------------------------------- |
| Digital Pin **11 (PWM)** | LED Anode (+)                         |
| GND                      | LED Cathode (-) through 220Ω Resistor |

---

# ⚙️ Working Principle

The Arduino configures **Digital Pin 11** as an output. Inside the `loop()` function:

* `analogWrite(powerpin, 255);` supplies the maximum PWM value, making the LED glow at full brightness.
* The program waits for **1 second**.
* `analogWrite(powerpin, 0);` turns the LED OFF.
* The program waits for another **1 second**.

This cycle repeats continuously, creating a blinking effect.

---

# 💻 Arduino Code

```cpp
int powerpin = 11;

void setup() {
  pinMode(powerpin, OUTPUT);
}

void loop() {
  analogWrite(powerpin, 255);
  delay(1000);

  analogWrite(powerpin, 0);
  delay(1000);
}
```

---

# 📚 Concepts Learned

* Arduino Program Structure
* `setup()` and `loop()`
* `pinMode()`
* PWM (Pulse Width Modulation)
* `analogWrite()`
* `delay()`
* Digital Output Control

---

# 📂 Files Included

* `sketch.ino` – Arduino source code
* `circuit.png` – Circuit diagram/screenshot
* `README.md` – Project documentation

---

# 🚀 Future Improvements

* Implement LED fading using PWM values from 0 to 255
* Control brightness using a potentiometer
* Add multiple LEDs with different brightness levels
* Create LED breathing and chaser effects

---

# 👨‍💻 Author

**SIVADHINESH S**

Aspiring **Embedded Systems & VLSI Engineer** passionate about Arduino, PCB Design, and hands-on electronics projects.
