## 🔄 String Reversal Logic

This program demonstrates how to navigate a character array in **reverse order**. By initializing the loop at the end of the string and using a decrementing counter (`i--`), the program accesses memory addresses starting from the final index and moves toward the beginning.

### 💡 Key Technical Concepts

* **Reverse Iteration:** Unlike standard loops that increment from `0`, a reverse loop starts at a high index and continues as long as `i >= 0`.
* **The Null Terminator:** In C, a string's length includes the visible characters, but the memory allocated for the string also includes the `\0` (null terminator) at the very end.
* **Array Indexing:** This implementation accesses every index from the total length down to the first character, illustrating how `argv` or `string` data is structured in RAM.



### 🚀 Usage

1. Compile the program:
   ```bash
   make reverse
   ```
2. Run the executable:
   ```bash
   ./reverse
   ```