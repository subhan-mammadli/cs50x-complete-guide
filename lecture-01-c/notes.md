## 🛠️ From Source Code to Machine Code

In programming, we write instructions that are readable by humans, but computers require a different format to execute those instructions.

### 📝 Source Code

**Source Code** is the high-level code written by programmers using a specific programming language, such as **C**. It is designed to be readable and logical for humans.

```c
#include <stdio.h>

int main(void) 
{
    printf("hello, world\n");
}

```

### 🤖 Machine Code

Computers do not understand C directly. They process information using **Machine Code**, which consists entirely of **Binary** (0s and 1s). These bits represent electrical signals that tell the CPU exactly what to do.

### ⚙️ The Compilation Process

To bridge the gap between human-readable source code and machine-executable binary, we use a tool called a **Compiler**.

The workflow follows this fundamental logic:

1. **Source Code:** The `hello.c` file you write.
2. **Compiler:** A program (like `clang` or the `make` utility in CS50) that translates the code.
3. **Machine Code:** The resulting executable file (e.g., `a.out` or `hello`) that the computer runs.

> 💡 **Aha! Moment:** When you see a bunch of zeros and ones, that's not just random noise—it's the exact same logic as your `printf` statement, just translated into the "native tongue" of the hardware.

---

