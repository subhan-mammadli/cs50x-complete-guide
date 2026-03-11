## 🏗️ CS50x - Problem Set 1: C Foundations

This directory contains my solutions for the first week of CS50x. These projects focus on the fundamental building blocks of the C programming language, including data types, operators, conditional logic, and iterative loops.

### 📚 Problem Descriptions

* **👋 Hello, World & Hello, It's me**: An introduction to standard I/O and the CS50 library, focusing on user input and string formatting.
* **🧱 Mario (Less & More)**: Using **Nested Loops** to render 2D shapes in the terminal. The "More" version focuses on complex alignment and symmetric geometry.
* **💰 Cash**: An implementation of a **Greedy Algorithm** to calculate the minimum number of coins required to provide change.
* **💳 Credit**: A program that validates credit card numbers using **Luhn’s Algorithm** and identifies the issuer (Visa, Mastercard, or AMEX) based on the card’s length and prefix.

---

### 🧠 Technical Concepts Mastered

* **🔄 Nested Iteration**: Managing row-and-column logic to render dynamic terminal patterns.
* **🛡️ Robust Input Validation**: Utilizing `do-while` loops to ensure the program only accepts valid user data (e.g., restricting pyramid height between 1 and 8).
* **🔢 Algorithmic Efficiency**: Implementing the "Greedy" approach in `Cash` to ensure the most efficient solution with the fewest operations.
* **💾 Memory & Data Types**: Understanding the limitations of 32-bit integers and utilizing `long` to prevent **Integer Overflow** when handling 16-digit credit card numbers.

---

### ⚙️ Compilation & Usage

To run these programs, you will need a C compiler (like `clang` or `gcc`) and the CS50 library.

1. **Compile**:
```bash
make <filename>

```


*(e.g., `make mario`)*
2. **Execute**:
```bash
./<filename>

```



> 💡 **Aha! Moment:** One of the biggest takeaways this week was learning that **Clean Code** is as important as working code. Using `const` for fixed values and meaningful variable names makes these algorithms much easier to debug and maintain.

---

### 🛡️ Academic Honesty

This repository is a portfolio of my personal journey through CS50x. If you are a current student, I highly encourage you to struggle with these problems independently before referencing my solutions. Learning to "think like a programmer" happens during the struggle!
