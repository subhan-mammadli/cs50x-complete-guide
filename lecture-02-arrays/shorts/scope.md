## 🌐 Variable Scope

**Scope** is the characteristic of a variable that determines which parts of a program can access that specific variable. In C, there are two primary types of scope:

### 1. Local Variables
* Local variables are declared inside a specific function.
* They can **only** be accessed by the function in which they are declared.
* They do not exist outside of that function's "curly braces" `{}`.
* If two different functions each have a local variable with the same name, they are treated as entirely separate entities in memory.

### 2. Global Variables
* Global variables are declared outside of any specific function.
* They can be accessed and modified by **any** function within the program.
* While they can be useful, they should be used sparingly as they can make code harder to debug and reason about.



---

## 📤 Pass by Value

When you pass a variable as an argument to a function in C, the function does **not** receive the actual variable itself. Instead, it receives a **copy** of the value stored in that variable.

### 🗝️ Key Mechanics
* The function creates its own local variable to store the passed value.
* Any changes made to the variable inside the function **do not affect** the original variable in the caller (e.g., `main`).
* To get a modified value back to the caller, the function must `return` the value, and the caller must explicitly assign it.

### 📉 Example: The "Swap" Problem
If you write a function to swap two integers but do not return the values, the variables in `main` will remain unchanged because the function only swapped its own local copies.



---

## 🛠️ Practical Summary

| Concept | Description |
| :--- | :--- |
| **Local Scope** | Restricted to the function where the variable is defined. |
| **Global Scope** | Accessible to the entire program. |
| **Pass by Value** | Functions receive copies of data, protecting the original variable from accidental changes. |

