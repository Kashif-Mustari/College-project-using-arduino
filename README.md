# Seven Segment Display Arduino Project

This project demonstrates how to control a 7-segment display using an Arduino. Each segment (A to G) is connected to a separate Arduino digital pin, and the code lights up the segments to display digits **0 to 9** sequentially.

---

## 🧰 **Hardware Requirements**

* Arduino Uno / Nano / Mega
* 7-Segment Display (Common Cathode)
* 7 × 220Ω Resistors
* Jumper wires
* Breadboard

---

## 🔌 **Pin Connections**

| Segment | Arduino Pin |
| ------- | ----------- |
| A       | 13          |
| B       | 12          |
| C       | 11          |
| D       | 10          |
| E       | 9           |
| F       | 8           |
| G       | 7           |

> Make sure the **common cathode** pin is connected to **GND**.

---

## 🧪 **How It Works**

Each number (0–9) is displayed by turning ON and OFF specific segments.

* `digitalWrite(pinX, 1)` turns a segment **ON**
* `digitalWrite(pinX, 0)` turns a segment **OFF**
* `delay(t)` pauses before showing the next number

The loop cycles through all digits with a 1-second delay.

---

## 📄 **Arduino Code**

Below is the exact code used to display the digits from 0 to 9:

```cpp
// (Code included by the user in the chat)
```

Copy the full code from ChatGPT message and paste it into the Arduino IDE.

---

## ▶️ **How to Run**

1. Build the circuit based on the connection table.
2. Open Arduino IDE.
3. Select your board and COM port.
4. Upload the code.
5. The 7-segment display will start showing numbers 0 to 9 repeatedly.

---

## 📌 **Notes**

* The display used must be **common cathode**.
* If using **common anode**, replace all `1` with `0` and vice versa.
* You can adjust the timing by changing:

  ```cpp
  int t = 1000; // delay in milliseconds
  ```

---

## 👍 **Enjoy Building!**

If you want, I can also:

* Add circuit diagram (ASCII / description)
* Add Fritzing file
* Add a more optimized version using arrays.

Just tell me!
