## 🏛️ Lecture 1: C Programming

This directory serves as the central hub for my **Week 1** journey in CS50x. It bridges the gap between the conceptual logic of Scratch and the low-level technicalities of the **C programming language**.

### 📁 Directory Layout

* **`notes.md`**: A deep dive into lecture concepts, including data types, memory limits, and the compilation process.
* **`pset1/`**: A dedicated subdirectory containing my solutions to the Week 1 Problem Sets:
* `hello/` — Input and formatting.
* `mario-less/` — Right-aligned pyramid logic.
* `mario-more/` — Symmetric pyramid construction.
* `cash/` — Greedy algorithm implementation.
* `credit/` — Luhn’s Algorithm and brand identification.



---

### 🚀 Module Highlights

#### 🛠️ From Source to Machine

I mastered the four stages of the **Compilation Process**, moving beyond just "clicking a button" to understanding how code becomes an executable:

1. **Preprocessing**: Handling `#include` directives.
2. **Compiling**: Converting C to Assembly.
3. **Assembling**: Converting Assembly to Machine Code (Binary).
4. **Linking**: Merging libraries (like `cs50.h`) with my code.

#### 🏗️ Functional Abstraction

A major theme this week was **Abstraction**. By creating custom functions like `print_row` or `calculate_checksum`, I learned how to:

* Make code more readable for humans.
* Encapsulate logic to prevent the `main` function from becoming cluttered.
* Define **Function Prototypes** to inform the compiler of a function's existence before its definition.

#### 📉 Memory Constraints

Through hands-on coding, I explored the physical limits of hardware:

* **Integer Overflow**: Seeing 32-bit integers wrap around when exceeding $2,147,483,647$.
* **Floating-Point Imprecision**: Understanding the trade-offs between speed and accuracy when storing decimals.

---

### ⚙️ Tools & Environment

* **Language**: C11
* **Compiler**: `clang` via the `make` utility.
* **Style**: Adhering to the `style50` guidelines for clean, readable code.
* **Debugger**: Utilizing `debug50` to step through loops and variable states.

---

### 🛡️ Academic Honesty

This folder is a professional record of my work. If you are currently taking CS50x, please respect the course's integrity and use these files as a reference only after completing your own implementations.
