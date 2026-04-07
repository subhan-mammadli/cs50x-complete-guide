## 🔠 Command-Line Initials Extractor

This program extracts the first character (initial) from each name provided as a command-line argument. It demonstrates the power of **Argument Vectors (`argv`)** and shows how strings in C can be accessed using two-dimensional indexing.

### 💡 Key Technical Concepts

* **Argument Validation:** The program checks `if (argc < 2)` to ensure the user has provided at least one name. If not, it provides a "Usage" message and returns an **Exit Code of 1**, signaling an error to the system.
* **The `argv` Loop:** The loop starts at `i = 1`. This is critical because `argv[0]` is always the name of the program itself (e.g., `./initials`). To get the user's names, we must skip the first index.
* **2D Array Indexing:** The expression `argv[i][0]` performs two steps:
    1. `argv[i]`: Selects the $i^{th}$ string (the word).
    2. `[0]`: Selects the character at the first position of that specific string.



### 🚀 Usage

1. Compile the program:
   ```bash
   make initials
   ```
2. Run the executable with names:
   ```bash
   ./initials Subhan Mammadli
   ```
3. **Output:**
   ```bash
   SM
   ```
