## 🧠 First Program: From Input to Output

Before learning Scratch blocks or any specific language,
it's important to understand the **core idea of programming**:

> Input → Processing → Output

This simple Python example demonstrates that idea using an AI model.

```python
from openai import OpenAI

client = OpenAI()

user_prompt = input("Prompt:")
system_prompt = "Limit your answer to one sentence."

response = client.responses.create(
	input=user_prompt,
	instructions=system_prompt,
	model="gpt-5"
)

print(response.output_text)
```
### What this program shows
- The user provides an input (a prompt)
- The program sends it to a model
- The model processes it
- The program outputs a result

Even though this example uses AI, the core logic applies to
Scratch, C, Python, and every other programming language.

## ✨ Unary

**Unary** means working with or representing **one unit at a time**. 🟢

- In programming, a **unary operation** acts on **a single value**, not two or more. 💻
- A simple real-world example is **counting with fingers**, where each count adds **one more unit** 👆🖐️

> 💡 Tip: Unary operations are like “one step at a time” — simple but powerful.

## 🔢 Binary

**Binary** is the number system computers use to represent data using only **two symbols: 0 and 1**. 💻

### 1️⃣ Why Computers Use Binary
- Computers use **electric signals**, which are either **ON (1)** or **OFF (0)**.
- Binary is **reliable** and easy for circuits to read. ⚡

### 2️⃣ Binary Digit (Bit)
- A **bit** is the **smallest unit of data** in computing.
- It can be **0 or 1**.
- Example: `1` ✅, `0` ✅

### 3️⃣ Base-2 vs Base-10
| Term      | Meaning                                         |
|-----------|------------------------------------------------|
| **Base-2** | Uses 2 digits: 0 and 1 (binary)               |
| **Base-10**| Uses 10 digits: 0–9 (decimal, humans use this)|

> 💡 Key difference: Computers think in **base-2**, humans in **base-10**.

### 4️⃣ Converting Numbers
- **Base-10 → Base-2**  
  Divide by 2 repeatedly, write remainders from bottom to top.  
  Example: `13` in decimal → binary: 
	13 ÷ 2 = 6 remainder 1 6 ÷ 2 = 3 remainder 0 3 ÷ 2 = 1 remainder 1 1 ÷ 2 = 0 remainder 1 → Binary: 1101

- **Base-2 → Base-10**  
Multiply each bit by 2^(position) and sum.  
Example: `1101` → 1×8 + 1×4 + 0×2 + 1×1 = 13 ✅

### 5️⃣ Byte
- A **byte** = **8 bits**. 🗃️
- Number of possibilities = 2^8 = **256**  
- Example: 1 byte can represent numbers 0–255.

### 6️⃣ Quick Tip
> Binary is like a **light switch system**: each bit = one switch (ON/OFF), and multiple switches together can represent many numbers or data.

## ⌨ ASCII

**ASCII** (American Standard Code for Information Interchange) is a **standard way to represent characters** using numbers. 💻

### 1️⃣ How ASCII Works
- Each character (letter, number, symbol) has a **unique number** assigned.  
- Computers store characters as **numbers in binary (base-2)**.  
- Humans usually read **decimal (base-10)** numbers, so ASCII maps numbers to characters. 🔢

Example:  
```

'A' = 65 (decimal) = 01000001 (binary)
'a' = 97 (decimal) = 01100001 (binary)

```

---

### 2️⃣ Uppercase vs Lowercase Letters
- Difference between uppercase and lowercase letters is **always 32** in decimal.  
- Why?  
```

'A' = 65
'a' = 97
Difference = 97 - 65 = 32

```
- Binary view: The **6th bit** distinguishes uppercase from lowercase. 🖥️

---

### 3️⃣ Base-2 and Base-10 in ASCII
| Character | Decimal (Base-10) | Binary (Base-2) |
|-----------|-----------------|----------------|
| A         | 65              | 01000001       |
| B         | 66              | 01000010       |
| a         | 97              | 01100001       |
| b         | 98              | 01100010       |

> Tip: Learning ASCII helps understand **how text is stored and processed** in computers.

---

### 4️⃣ Quick Note
- All **English letters, digits, and symbols** have ASCII codes.  
- ASCII is **one byte per character** (8 bits) → 256 possible values. 🗃️



## 🌐 Unicode

**Unicode** is a **universal character encoding standard** designed to represent **every written character** from all languages in the world — including emojis. 🌍

---

### 1️⃣ What is Unicode?
- Unicode assigns a **unique number (code point)** to each character.
- These characters include:
  - Latin letters (A, a)
  - Non-Latin scripts (Arabic, Chinese, Cyrillic, Devanagari, etc.)
  - Symbols (€, ©, ✓)
  - Emojis 😀🔥🚀

Example:
```
A       → U+0041
a       → U+0061
🙂       → U+1F642
```

> `U+` means **Unicode code point**, written in hexadecimal.

---

### 2️⃣ Why Unicode Instead of ASCII?
**ASCII is not enough.**

ASCII problems:
- Only supports **128 characters** (or 256 with extended ASCII)
- Mainly English letters
- No support for:
  - Other languages (Arabic, Chinese, Turkish characters like ğ, ş)
  - Emojis
  - Many modern symbols

Unicode solves this by:
- Supporting **over 1 million possible characters**
- Covering **all languages and symbols**
- Providing a **single global standard**

---

### 3️⃣ ASCII vs Unicode (Important Relation)
- ASCII is actually a **subset of Unicode** ✅
- First 128 Unicode characters are **exactly the same as ASCII**

Example:
```

'A' → ASCII 65 → Unicode U+0041

```

So:
- Old ASCII text works perfectly in Unicode systems

---

### 4️⃣ How Emojis Work 😄
- Emojis are just **Unicode characters**
- They have large code points

Example:
```

😀 → U+1F600
🔥 → U+1F525

```

Computers store these numbers in **binary**, just like letters — only with **more bits**.

---

### 5️⃣ Unicode vs Encoding (Very Important ⚠️)
Unicode defines:
- What characters exist
- Their numeric code points

Encoding defines:
- How those numbers are stored in memory

Common Unicode encodings:
- **UTF-8** (most popular, used on the web 🌐)
- UTF-16
- UTF-32

---

### 6️⃣ Why UTF-8 Is Special
- Variable length encoding
- Uses:
  - 1 byte for ASCII characters
  - More bytes for complex characters and emojis
- Backward compatible with ASCII 👍

This is why:
- Websites
- Linux
- Python
- GitHub

all use **UTF-8 by default**.

---

### 🧠 Summary
- ASCII → small, old, English-only
- Unicode → global, modern, universal
- Emojis are **just numbers**, like letters
- Unicode made global programming possible 🚀


## ⚙️ How Unicode Works

Unicode itself does **not store characters in memory**.
Instead, it defines a **mapping system**:

> Character → Code Point → Encoding → Binary

---

### 1️⃣ Step 1: Character → Code Point
Each character is assigned a **unique number**, called a **code point**.

Examples:
```

A   → U+0041
a   → U+0061
€   → U+20AC
😀   → U+1F600

```

At this stage:
- These numbers are **abstract**
- They are **not yet stored in memory**
- They exist only as **definitions**

---

### 2️⃣ Step 2: Code Point → Encoding
To store or transmit a character, the code point must be **encoded**.

Common Unicode encodings:
- UTF-8
- UTF-16
- UTF-32

Each encoding converts code points into **bytes** differently.

---

### 3️⃣ Step 3: Encoding → Bytes (Binary)
Let’s take UTF-8 as an example.

#### UTF-8 rules (simplified):
| Code Point Range | Bytes Used |
|------------------|-----------|
| U+0000 – U+007F  | 1 byte    |
| U+0080 – U+07FF  | 2 bytes   |
| U+0800 – U+FFFF  | 3 bytes   |
| U+10000+         | 4 bytes   |

Example:
```

A (U+0041) → 01000001        (1 byte)
€ (U+20AC) → 11100010 10000010 10101100  (3 bytes)
😀 (U+1F600) → 11110000 10011111 10011000 10000000 (4 bytes)

```

---

### 4️⃣ Why Unicode Needs Multiple Bytes
ASCII uses:
```

1 byte → 256 possibilities

```

Unicode needs:
- Thousands of languages
- Symbols
- Emojis

So:
- Some characters need **more than 1 byte**
- UTF-8 increases bytes **only when needed**

This keeps memory efficient 🚀

---

### 5️⃣ Why Computers Love Unicode
- One global system 🌍
- No language conflicts
- Same file works on:
  - Windows
  - Linux
  - macOS
  - Web
- Emojis, languages, symbols all handled consistently

---

### 🧠 Key Insight (Very Important)
> Unicode defines **what characters mean**  
> Encoding defines **how characters are stored**

Many beginners confuse these two.
Understanding this difference is **core computer science knowledge**.

## 🎨 Color

Computers represent colors using **numbers**.
Every color you see on a screen is just a **combination of values** stored in memory. 💡

---

### 1️⃣ How Colors Are Represented
Most digital screens use the **RGB color model**.

**RGB** stands for:
- **R**ed
- **G**reen
- **B**lue

Each color is created by mixing these three base colors. 🌈

---

### 2️⃣ RGB Values
- Each RGB component has a value between **0 and 255**
- Why 255?
  - Because one component uses **1 byte (8 bits)**
  - 8 bits → 256 possible values (0–255)

Example:
```
Red     → RGB(255, 0, 0)
Green   → RGB(0, 255, 0)
Blue    → RGB(0, 0, 255)
White   → RGB(255, 255, 255)
Black   → RGB(0, 0, 0)
```

---

### 3️⃣ How Colors Work in Binary
Each RGB value is stored in **binary**.

Example:
```
255 → 11111111
0   → 00000000
```

So:
```
Red → 11111111 00000000 00000000
```

This means:
- Red = full intensity
- Green = off
- Blue = off

---

### 4️⃣ How Many Colors Are Possible?
Each color uses:
- 3 bytes (Red, Green, Blue)
- 8 bits × 3 = **24 bits**

Total possible colors:
```
256 × 256 × 256 = 16,777,216 colors
```

This is called **24-bit color** (True Color). 🎯

---

### 5️⃣ Hexadecimal Color Representation
Colors are often written in **hexadecimal (base-16)**.

Format:
```
#RRGGBB
```

Examples:
```
Red     → #FF0000
Green   → #00FF00
Blue    → #0000FF
White   → #FFFFFF
Black   → #000000
```

Why hex?
- Shorter than binary
- Easier to read than base-10
- Maps perfectly to bytes

---

### 6️⃣ Key Idea
> Color on a computer is **just math and memory**.
> Screens turn numbers into light.

Understanding color helps with:
- Web development
- Graphics
- Game development
- Low-level system thinking 🧠

