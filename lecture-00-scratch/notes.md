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

## 🔡 ASCII

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
```

---