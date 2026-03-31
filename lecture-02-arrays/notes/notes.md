## 💾 Lecture 2: Arrays

In this module, we transition from thinking about individual variables to managing **collections of data**. We explore how computers store information in memory and how we can manipulate that memory efficiently.

### 🏗️ Compiling: From Source to Machine Code
Before diving into arrays, it's crucial to understand how our C code becomes an executable. The process of **Compiling** actually involves four distinct steps:

1.  **Preprocessing:** Lines starting with `#` (like `#include`) are resolved. The header file's content is literally pasted into your file.
2.  **Compiling:** The C code is converted into **Assembly Language**, a lower-level instruction set that the CPU understands.
3.  **Assembling:** The Assembly code is converted into **Object Code** (zeros and ones).
4.  **Linking:** If your code uses libraries (like `cs50.h` or `stdio.h`), the object code of those libraries is combined (linked) with your own program to create a single executable file.



---

## 🐞 Debugging & Troubleshooting

Debugging is the iterative process of finding and fixing errors (**bugs**) in your code. In C, bugs can range from syntax errors to complex logical flaws.

### 🔍 Rubber Ducking
Before using high-tech tools, try **Rubber Duck Debugging**. By explaining your code line-by-line to an inanimate object, you often realize where your logic fails. If you can't explain it to a duck, you probably don't understand it yet!

### 🛠️ The `printf` Method
The most common manual debugging technique involves inserting `printf` statements to inspect variable values at specific points.
* **Pros:** Fast and simple.
* **Cons:** You must remember to remove them before submitting your code, as they can interfere with automated tests like `check50`.

---

## 🕹️ Using `debug50`

CS50 provides a powerful visual debugger called `debug50`. It allows you to pause time and look inside the "brain" of your program while it runs.

### 🔴 Breakpoints
A **Breakpoint** is a specific line of code where you want the program to freeze. 
* In VS Code, click the red dot to the left of the line number.
* The program pauses **before** executing that specific line.

### 🛰️ Stepping Through Code
Once paused, you have three primary controls in the debugger UI:
1.  **Step Over:** Execute the current line and move to the next one.
2.  **Step Into:** If the current line is a function call, "dive inside" that function.
3.  **Step Out:** Finish the current function and return to where it was called.

### 📊 The Variables Tab
While paused, the side panel displays the **State** of your program. This is essential for:
* **Memory Inspection:** Watching how array values change at each index during a `for` loop.
* **Logic Check:** Confirming if a boolean condition is actually `true` or `false` as expected.

> 💡 **Aha! Moment:** Always remember to re-compile your code with `make` before running `debug50`. If the binary is old, the debugger will point to lines that don't match your current source code!

## 🛠️ The Compilation Process

In C, when we run `make hello`, we aren't just "running" a script. We are triggering a **Compiler** (like `clang`) to translate our source code into machine code through four distinct stages.



### 1️⃣ Preprocessing
The **Preprocessor** looks for lines that start with a `#` (like `#include` or `#define`).
* It literally "copies and pastes" the contents of header files (e.g., `stdio.h`) into your source code.
* It replaces any constants or macros you've defined with their actual values.

### 2️⃣ Compiling
This stage takes the preprocessed C code and translates it into **Assembly Code**. 
* **Assembly** is a low-level language that is one step above binary. It uses simple instructions like `mov`, `add`, or `push` that correspond directly to what the CPU can do.
* This is where the compiler checks your **syntax** and ensures your logic follows the rules of the C language.



### 3️⃣ Assembling
The **Assembler** takes the Assembly code and converts it into **Object Code**.
* Object code consists entirely of **Machine Code** (binary: 0s and 1s).
* At this stage, the computer can technically understand the instructions, but if you used functions from a library (like `get_string`), the program doesn't know where those functions are yet.

### 4️⃣ Linking
The **Linker** is the final architect. It takes your object code and "links" it with the object code of the libraries you used (like the CS50 library or the Standard I/O library).
* It combines everything into a single, standalone **Executable File** (e.g., `./hello`).

> 💡 **Aha! Moment:** When you see a "Linker Error" (like `ld: symbol(s) not found`), it usually means you told the compiler to use a function, but the Linker couldn't find the actual binary code for that function!

---

### 📥 Summary Table

| Stage | Input | Output | Purpose |
| :--- | :--- | :--- | :--- |
| **Preprocessing** | `.c` Source | Expanded Source | Handle `#` directives |
| **Compiling** | Expanded Source | `.s` Assembly | Translate C to CPU instructions |
| **Assembling** | `.s` Assembly | `.o` Object Code | Convert instructions to Binary |
| **Linking** | `.o` Object Code | Executable | Merge code with libraries |
