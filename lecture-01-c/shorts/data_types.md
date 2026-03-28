# 📥 Shorts: Data Types, Memory, and Binary Representation

Computer memory (RAM) is not just a digital space; it is a massive collection of billions of tiny electronic switches. Understanding how these switches work is the key to mastering C.

## 1. The Foundation: Bits and Bytes
* **The Bit (Binary Digit):** The smallest unit of data. Think of it as a micro-switch in your RAM.
    * **0:** Switch is OFF (Closed).
    * **1:** Switch is ON (Open).
* **The Byte:** A standardized "Storage Box" (Daxıl) in memory that holds **8 bits**.
    * One box = 8 switches.
    * **Why 8?** With 8 switches, you can create **256 different patterns** ($2^8$), which is enough to represent all basic characters and numbers.



## 2. Representation: From Binary to Data
With only 3 switches (bits), we can represent numbers by changing their configurations:
1. `000` = **0**
2. `001` = **1**
3. `010` = **2**
4. `011` = **3**
5. `100` = **4**
6. `101` = **5**
7. `110` = **6**
8. `111` = **7**
**The Logic:** The more "boxes" (Bytes) we link together, the larger the numbers we can represent.

---

## 3. Fundamental Data Types (Memory Allocation)

Data types are how we tell the computer: *"I need X number of adjacent boxes to store this specific kind of information."*

### 🔢 Integer Types (Whole Numbers)
* **`int` (4 Bytes / 32 bits):** Uses 4 adjacent boxes.
    * **Range:** Approx. **-2 billion to +2 billion**.
* **`unsigned int`:** A qualifier that tells C: *"Use the sign bit for data instead of a negative sign."* This effectively doubles the positive range to **4 billion**.
* **`long` (8 Bytes / 64 bits):** For massive numbers (up to **9 quintillion**).

### 🔠 Characters (`char`)
* **Size:** 1 Byte (8 bits).
* **The ASCII System:** Computers only know numbers. We use ASCII to map a number (e.g., **65** in binary) to a character (displayed as **'A'**). 
* Since it's only 1 Byte, it can represent 256 different symbols.

### 🥧 Floating-Point (Decimals)
A `float` uses **4 Bytes (32 bits)** divided into three specific sections:
1. **Sign (1 bit):** 0 for positive, 1 for negative.
2. **Exponent (8 bits):** Determines where the decimal point slides.
3. **Mantissa / Significand (23 bits):** Stores the actual digits (body) of the number.

#### **How `12.5` is stored in memory:**
1. **Binary Conversion:** `12.5` $\rightarrow$ `1100.1` (binary).
2. **Normalization (Standard Form):** `1100.1` $\rightarrow$ $1.1001 \times 2^3$.
3. **Allocation:** The sign (0), the power (3), and the digits after the decimal point (`1001`) are placed into their respective "boxes."



#### **⚠️ Floating-Point Imprecision**
If a number repeats infinitely in binary (like $0.1$), the 23-bit Mantissa box fills up quickly.
* **The "Axe" Effect (Truncation):** The computer "chops off" (balta ilə kəsir) the remaining bits.
* **Result:** The stored value is no longer exactly $0.1$, but a very close approximation.

### 🌊 Double (Double Precision)
* **Size:** 8 Bytes (64 bits). 
* With a much larger Mantissa, it provides 15+ decimal places of accuracy, minimizing imprecision.

### 📝 Strings (Text)
* A sequence of `char` boxes.
* **The Sentinel (`\0`):** Every string ends with a **NUL terminator** hidden byte to mark the "End of Text."

---

## 🛠️ Variable Lifecycle

* **Declaration:** `int number;` (Reserving the boxes in RAM).
* **Assignment:** `number = 17;` (Placing the value inside).
* **Initialization:** `int number = 17;` (Doing both in one step).
