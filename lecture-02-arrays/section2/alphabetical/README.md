## 🔡 Alphabetical Order Verification

This program determines if a given string is in **alphabetical order**. It leverages the numerical nature of `char` types in C to compare adjacent characters and verify that each letter follows its predecessor correctly in the ASCII table.

### 💡 Key Technical Concepts

* **Character Comparison:** In C, characters are essentially small integers (ASCII). Therefore, the expression `text[i] > text[i + 1]` checks if a character appears "after" the next one (e.g., 'C' > 'A' is $67 > 65$).
* **Look-Ahead Logic:** The loop uses `i < len - 1` to prevent a **Buffer Overflow**. By stopping one index before the end, the program ensures that `text[i + 1]` always refers to a valid character and never the **Null Terminator** (`\0`) or garbage memory.
* **Early Exit Strategy:** The use of `return 0` inside the `if` block is an efficient way to stop the program the moment a single "out-of-order" pair is found.



### 🚀 Usage

1. Compile the program:
   ```bash
   make alphabetical
   ```
2. Run the executable:
   ```bash
   ./alphabetical
   ```
3. **Example:**
   * Input: `abc` → Output: `Yes` (Exit Code: 1)
   * Input: `ba` → Output: `No` (Exit Code: 0)

