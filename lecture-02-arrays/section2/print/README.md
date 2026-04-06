## 🖨️ String Traversal Logic

This program illustrates the fundamental relationship between **Strings** and **Arrays** in C. By using a `for` loop, the program accesses each individual `char` stored in memory and prints it to the standard output.

### 💡 Key Technical Concepts

* **String Indexing:** Every character in the input `text` is stored at a specific index, starting from `0`.
* **Loop Termination:** The loop uses `strlen(text)` from the `<string.h>` library to determine exactly how many iterations are required before hitting the **NUL Terminator** (`\0`).
* **Memory Access:** `text[i]` retrieves the 1-byte character stored at that specific offset in RAM.



### 🚀 Usage

1. Compile the program:
   ```bash
   make print
   ```
2. Run the executable:
   ```bash
   ./print
   ```
3. Provide an input string when prompted.

> 🛠️ **Mentor Note on Optimization:**
> Currently, your loop condition is `i < strlen(text)`. This means `strlen` is called **every single time** the loop repeats. For a very long string, this makes the program slower ($O(n^2)$ complexity). 
> 
> **Better Practice:** Initialize the length once at the start of the loop:
> `for (int i = 0, n = strlen(text); i < n; i++)`

