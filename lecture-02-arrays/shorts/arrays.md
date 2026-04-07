## 🌐 Variable Scope

**Scope** is a characteristic of a variable that determines which parts of a program can access that specific variable. In C, there are two primary types of scope:

### 1. Local Variables
* Local variables are declared inside a specific function.
* They can **only** be accessed by the function in which they are declared.
* They do not exist outside of that function's "curly braces" `{}`.
* If two different functions each have a local variable with the same name, they are treated as entirely separate entities in memory.

### 2. Global Variables
* Global variables are declared outside of any specific function.
* They can be accessed and modified by **any** function within the program.
* While powerful, they should be used sparingly to keep code easy to debug.

---

## 📤 Pass by Value

When you pass a variable as an argument to a function in C, the function does **not** receive the actual variable itself. Instead, it receives a **copy** of the value stored in that variable.

### 🗝️ Key Mechanics
* The function creates its own local variable to store the passed value.
* Any changes made to the variable inside the function **do not affect** the original variable in the caller (e.g., `main`).
* To get a modified value back to the caller, the function must `return` the value, and the caller must explicitly assign it.

---

## 📮 Arrays: The Post Office of Memory

An **Array** is a data structure used to hold multiple values of the same data type back-to-back in memory. Think of an array as a row of post office boxes.

### 🏗️ Array Syntax and Structure
* **Declaration:** To create an array, you must specify the **type**, **name**, and **size** (e.g., `int scores[10];`).
* **Indexing:** You access individual "boxes" using an index.
* **Zero-Based Indexing:** In C, the first element of an array is always at index `0`.
* **Memory Layout:** Arrays are stored in **contiguous** memory, meaning every element is physically next to the previous one in the RAM.

### ⚠️ Fundamental Limitations
* **Fixed Size:** Once an array is created, its size cannot be changed.
* **No Bound Checking:** C does not stop you from accessing an index that doesn't exist (e.g., index 15 in a 10-element array). This can lead to serious bugs or security vulnerabilities.