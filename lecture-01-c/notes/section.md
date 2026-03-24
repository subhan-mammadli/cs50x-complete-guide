# 🎓 Section 1: Foundations of C Programming

This section serves as a bridge between high-level logic and low-level implementation, focusing on the syntax of C and the professional developer tools provided by the CS50 environment.

## 🛠️ The CS50 Developer Ecosystem

Professional engineering requires more than just a compiler. We utilize a suite of specialized tools to ensure code quality, correctness, and style:

### 1. **cs50.dev (The Environment)**
* **Definition:** A cloud-based Integrated Development Environment (IDE) based on VS Code.
* **Feature:** Pre-configured with the C compiler (`clang`), the debugger (`debug50`), and all necessary libraries, running via GitHub Codespaces.

### 2. **cs50.ai (The Duck)**
* **Definition:** A pedagogical AI assistant tailored for CS50.
* **Purpose:** It acts as a digital version of **"Rubber Duck Debugging."** Instead of giving direct answers, it provides hints to help you find the solution yourself.

### 3. **style50 (Code Aesthetics)**
* **Definition:** A command-line linter that checks your code's compliance with professional style guidelines.
* **Focus:** Proper indentation, consistent spacing, and meaningful comments.
* **Command:** `style50 filename.c`



### 4. **check50 (Correctness)**
* **Definition:** An automated testing tool that verifies your code against specific test cases, including edge cases.
* **Purpose:** To ensure the logic is robust before final submission.

### 5. **debug50 (Bug Hunting)**
* **Definition:** An interactive visual debugger for line-by-line execution.
* **Key Features:** Setting **breakpoints** to pause execution and **variable tracking** to monitor data in memory in real-time.

### 6. **design50 (Architecture)**
* **Definition:** An analytical tool that evaluates the "design" quality.
* **Focus:** It identifies unnecessary complexity, redundancy, or poor structural choices that a simple logic test might miss.

---

## 💡 The Professional Workflow
1. **Write:** Authoring the `.c` source file.
2. **Compile:** Using `make` to generate the binary.
3. **Debug:** Using `debug50` to fix logical errors (bugs).
4. **Refine:** Running `style50` and `design50` for professional-grade code.
5. **Test & Submit:** Using `check50` and `submit50` for final verification.


## 🛠️ Variables, Data Types, and Operators

In C, we must be explicit about how we store and manipulate data. Unlike higher-level languages, C requires us to understand how data occupies memory.

### 1. **Anatomy of a C Program**
```c
#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}
```
* **`int main(void)`**: This is the entry point of every C application. 
    * `int`: The **return type**. By convention, a program returns an integer (usually `0`) to the OS to signal successful execution.
    * `void`: The **parameter list**. This indicates that the function does not take any command-line arguments in this specific instance.

### 2. **Variable Declaration and Static Typing**
C uses **Static Typing**, meaning every variable must have a declared type that cannot change.
> **Syntax:** `data_type variable_name = value;`

**Why does C care about types?**
At the hardware level, everything is binary (e.g., `01000001`). The **Data Type** tells the compiler how to interpret those bits:
* As an **`int`**: The value is `65`.
* As a **`char`**: The value is `'A'`.



### 3. **The Power of Operators**
Operators allow us to perform mathematical and logical evaluations on our variables.

#### **Arithmetic Operators**
Used for mathematical calculations. 
* **Standard:** `+`, `-`, `*`, `/`
* **Modulo (`%`)**: Returns the **remainder** of a division (e.g., `20 % 6` results in `2`).
* **Syntactic Sugar (Shorthand):**
    * `balance++` / `balance--`: Increment or decrement by 1.
    * `balance *= 2`: Multiplies the current value by 2 and updates the variable.

> ⚠️ **Integer Truncation:** If you divide two integers (e.g., `20 / 3`), C will **round down** to the nearest whole number (`6`). It does not "round"; it simply throws away the decimal.

#### **Relational & Logical Operators**
Used for control flow and decision making.
* **Relational:** `<` (less than), `==` (is equal to), `!=` (is not equal to).
* **Logical:**
    * `&&` (**AND**): Both conditions must be true.
    * `||` (**OR**): At least one condition must be true.
    * `!` (**NOT**): Reverses the Boolean value.

## Functions

```c
int balance = get_int("Balance: ");
```

The inside of brackets is function input. We are assigning the function output to balance variable. The output is integer so we have to create variable in integer type.

```c
int balance = 20;
printf("Current Balance: $%i\n", balance);
```

%i is placeholder \
balance is value \
\n is new line \
the rest is string \

Numbers int(%i), float(%f) Text char(%c) string(%s)


## 🚦 Control Flow: Conditionals and Loops

Control flow structures allow our programs to make decisions and repeat tasks, moving beyond simple linear execution.

### 1. **Conditionals (`if`, `else if`, `else`)**
Conditionals evaluate a **Boolean expression** (true or false) to determine which block of code to execute.

```c
if (balance < 0)
{
    printf("Insufficient Funds\n");
}
else
{
    printf("Available Balance\n");
}
```
* **Best Practice:** Always use curly braces `{}` even for single-line statements to prevent logical errors during future code updates.

### 2. **For Loops (Counted Iteration)**
Used when the number of iterations is known beforehand. It integrates initialization, condition, and increment into one line.

```c
for (int i = 1; i <= 30; i++)
{
    printf("I can count to %i\n", i);
}
```
* **Structure:** `for (initialization; condition; increment)`
* **Usage:** Ideal for iterating through a fixed range or a data set with a known size.

### 3. **While Loops (Conditional Iteration)**
Used when the number of iterations is unknown, and the loop should continue as long as a specific condition remains true.

```c
int i = 1;
while (i <= 30)
{
    printf("I can count to %i\n", i);
    i++;
}
```
* **Risk:** If the condition never becomes false (e.g., forgetting `i++`), it creates an **Infinite Loop**.

### 4. **Do-While Loops (Post-Condition Iteration)**
Unique because it guarantees the code block runs **at least once** before checking the condition.

```c
int n;
do
{
    n = get_int("N: ");
}
while (n <= 0);
```
* **Common Use Case:** **Input Validation**. This forces the user to provide an input before the program decides whether to ask again or proceed.


## 🏗️ Custom Functions and Abstraction

Functions allow us to break down complex problems into smaller, manageable, and reusable pieces of code. This concept is known as **Abstraction**: we care about *what* a function does, not necessarily *how* it does it.

### 1. **The Anatomy of a Function**
A function consists of three main parts:
* **Return Type:** The type of data the function sends back (e.g., `int`, `void`).
* **Parameters:** The input data the function needs to operate.
* **Side Effect:** The actual action the function performs (e.g., printing to the terminal).

### 2. **Practical Example: `print_row` (from Mario-less)**
In the Mario problem, rather than nesting loops directly in `main`, we can abstract the logic of printing a single row of bricks.

**Concept:** `3` (input) $\rightarrow$ `print_row()` $\rightarrow$ `###` (output)

**Implementation:**
```c
void print_row(int bricks)
{
    // Iterate 'bricks' times to print the characters
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    // Move to the next line after the row is complete
    printf("\n");
}
```



### 3. **Why Use Functions?**
* **Reusability:** Write the code once, use it multiple times throughout your program.
* **Readability:** Your `main` function becomes a high-level "to-do list" rather than a wall of complex loops.
* **Maintainability:** If you need to change how a row is printed (e.g., using `?` instead of `#`), you only need to update the code in one place.
