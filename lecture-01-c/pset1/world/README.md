## 🌎 Project 0: Hello, World

This is my first foray into the **C programming language**. While the output is simple, this project serves as a fundamental introduction to syntax, header files, and the compilation workflow in a Linux-based environment.

### 📝 Logic & Implementation

The program utilizes the `stdio.h` (Standard Input/Output) library to access the `printf` function. It serves as a test case to ensure the development environment is correctly configured.

* **Header Files**: Using `#include <stdio.h>` to link standard input/output functions.
* **The Main Function**: The entry point of every C program.
* **Strings**: Printing a sequence of characters followed by a newline.

### ⚙️ Compilation Process

In C, source code must be converted into machine code before it can be executed. I used the `clang` compiler (via the CS50 `make` utility) to build this project.

```bash
# To compile the program
make hello

# To run the program
./hello

```

> 💡 **Aha! Moment:** C is a **compiled** language, not an interpreted one like Python. This means the computer doesn't read the `.c` file directly; it reads a binary executable file created by the compiler.

### 🛠️ Technologies Used

* **C Language**
* **Clang/LLVM Compiler**
* **Linux Terminal**

---

### 📂 How to Run

1. Ensure you have a C compiler installed (like `gcc` or `clang`).
2. Clone this repository.
3. Run `make hello` in your terminal.
4. Execute with `./hello`.
