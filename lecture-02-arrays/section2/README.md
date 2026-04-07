## 🧠 Section 2: Data Structures & Memory Layout

This directory contains my solutions and implementations for the **CS50 Section 2** problems. The core focus of this section was moving beyond basic variables to understand how **Arrays** and **Strings** are physically laid out in memory (RAM).

> 📝 **Detailed Learning Notes:** For a deep dive into the theory, ASCII manipulation, and the compilation pipeline, see my [Section 2 Notes](https://www.google.com/search?q=../notes/section.md).

### 🚀 Projects Overview

Each program in this folder addresses a specific concept of C programming and memory management:

| Program | Core Concept | Description |
| :--- | :--- | :--- |
| **[`print.c`](./print/)** | String Traversal | Iterates through a string to print characters individually using `strlen`. |
| **[`reverse.c`](./reverse/)** | Backward Indexing | Reverses an input string by decrementing the array index (`i--`). |
| **[`initials.c`](./initials/)** | 2D Arrays / CLI | Uses `argc` and `argv` to extract the first character of multiple strings. |
| **[`alphabetical.c`](./alphabetical/)** | ASCII Logic | Compares adjacent characters to verify sorted order ($c_i < c_{i+1}$). |

### 🛠️ Technical Skills Applied

  * **Memory Addressing:** Understanding that strings are contiguous blocks of memory ending in a NUL terminator (`\0`).
  * **Command-Line Interface (CLI):** Leveraging `argc` (argument count) and `argv` (argument vector) to build interactive tools.
  * **Look-Ahead Logic:** Implementing algorithms that compare the current element with the next one while avoiding buffer overflows.
  * **Algorithm Efficiency:** Transitioning from $O(n^2)$ to $O(n)$ by optimizing loop conditions (e.g., pre-calculating string length).

### 🖥️ How to Run

To compile and run any of these programs, navigate to the specific folder and use the `make` utility provided by the CS50 library:

```bash
cd print
make print
./print
```