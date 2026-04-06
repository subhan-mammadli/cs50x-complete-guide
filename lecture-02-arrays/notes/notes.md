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


## 🧱 Data Types & Memory Allocation

In C, every variable has a specific **Data Type**, which determines how much space it occupies in the computer's **RAM** (Random Access Memory). Understanding these sizes is crucial for memory management.

### 📐 Standard Type Sizes
* **`bool`**: 1 byte (Stores `true` or `false`).
* **`char`**: 1 byte (Stores a single character, like `'A'`).
* **`int`**: 4 bytes (Stores whole numbers).
* **`float`**: 4 bytes (Stores decimal numbers).
* **`long`**: 8 bytes (Stores larger integers).
* **`double`**: 8 bytes (Stores high-precision decimals).

---

## 📊 Arrays: Organized Data

An **Array** is a data structure that stores multiple values of the **same data type** in **contiguous** (back-to-back) memory locations.

### 🔢 Zero-Based Indexing
In C, we access elements in an array using an **index**. It is critical to remember that counting starts at **0**.

```c
// Declaring an array of 3 integers
int scores[3];

// Assigning values via indexing
scores[0] = 72; // The 1st element
scores[1] = 73; // The 2nd element
scores[2] = 33; // The 3rd element
```

### 🧠 Memory Representation
If you visualize RAM as a series of boxes, an `int scores[3]` occupies a block of **12 bytes** (3 elements $\times$ 4 bytes each). Because they are contiguous, the computer can jump to any element instantly if it knows the starting address.

---

## 🛠️ The `scores.c` Evolution

The `scores.c` example in Lecture 2 demonstrates why arrays are superior to individual variables when handling repetitive data.

### ❌ The Inefficient Way
Using separate variables like `int score1, score2, score3;` is not **scalable**. If you had 1,000 scores, your code would become unmanageable.

### ✅ The Efficient Way (Arrays + Loops)
By combining an array with a `for` loop, we can iterate through data dynamically.

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("How many scores? ");
    int scores[n];

    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score %i: ", i + 1);
    }

    // Calculating the average
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        total += scores[i];
    }

    printf("Average: %.2f\n", total / n);
}
```

> 💡 **Aha! Moment:** To avoid **Integer Division** (where `10 / 3` would incorrectly result in `3`), we ensure the `total` variable is a `float`. This forces C to perform floating-point arithmetic, giving us a precise decimal result.


## 🧵 Strings in C

In C, a **String** is not a native data type like `int` or `char`. Instead, it is a **`char` array**: a continuous sequence of characters stored in memory.

### 🔤 Characters vs. Strings
* A `char` is a single symbol (like `'A'`) and takes up **1 byte**.
* A `string` is a collection of these bytes ending with a special marker.

```c
string name = "HI!";
```

### 🛑 The Null Terminator (`\0`)
How does the computer know where a string ends? Since an array has a fixed size, C uses a special character called the **Null Terminator**, represented as `\0`.

* **NUL Character:** The byte `00000000` (all bits zero).
* **Memory Impact:** If you have a string `"HI!"`, it actually occupies **4 bytes** in memory, not 3.
    * `[H] [I] [!] [\0]`



> 💡 **Aha! Moment:** When you use `strlen()`, it counts every character *until* it hits `\0`. This is why we don't need to tell `printf` how long a string is; it just keeps printing until it sees the null terminator.

---

## 🏗️ Memory Visualization

When we declare `string s = "HI!";`, the memory looks like this:

| Address | Value | Character |
| :--- | :--- | :--- |
| `0x100` | `72` | `H` |
| `0x101` | `73` | `I` |
| `0x102` | `33` | `!` |
| `0x103` | `0` | `\0` |

### 🛠️ String Manipulation (string.h)
To work with strings effectively, we include the `<string.h>` library, which gives us access to vital functions:
* `strlen()`: Calculates the length of the string (excluding `\0`).
* `strcmp()`: Compares two strings (returns `0` if they are identical).

```c
#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}
```

> ⚠️ **Design Tip:** Notice the loop `for (int i = 0, n = strlen(s); i < n; i++)`. By declaring `n = strlen(s)` inside the initialization, we calculate the length **once**. If we put `strlen(s)` inside the condition (`i < strlen(s)`), the computer would re-calculate the length every single time the loop repeats, making it very slow!

## 🔠 String Manipulation: `uppercase.c`

Transforming text (e.g., from lowercase to uppercase) is a classic example of how we can manipulate **char arrays** by iterating through each character and modifying its underlying **ASCII** value.

### 🔢 The ASCII Logic (Under the Hood)
In the ASCII table, lowercase letters and uppercase letters are separated by a fixed numerical offset of **32**.
* `'a'` is **97**
* `'A'` is **65**
* **Calculation:** $97 - 32 = 65$



If we were doing this manually, we could subtract `32` from a lowercase `char` to get its uppercase equivalent. However, C provides more robust tools.

---

## 🛠️ Using `ctype.h`

Instead of memorizing math offsets, we use the standard library `<ctype.h>`. This library provides several boolean and transformation functions that make our code more readable and less prone to errors.

### 📋 Key Functions in `ctype.h`
* `islower(char c)`: Returns `true` if the character is lowercase.
* `isupper(char c)`: Returns `true` if the character is uppercase.
* `toupper(char c)`: Returns the uppercase version of the character (if it isn't already).
* `isalpha(char c)`: Returns `true` if the character is an alphabetical letter.

---

## 💻 Code Evolution: `uppercase.c`

### 1️⃣ Version 1: Manual Logic & Refinement
In the initial version, we check if a character is lowercase before transforming it.

```c
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h> // Required for islower and toupper

int main(void)
{
    string s = get_string("Before: ");

    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        // If the character is lowercase, convert it
        if (islower(s[i]))
        {
            printf("%c", toupper(s[i]));
        }
        // Otherwise, print it as is (numbers, symbols, or already uppercase)
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
```

### 2️⃣ Version 2: Optimized & Clean
The `toupper()` function is actually "smart." If you pass it a character that is already uppercase or a symbol (like `!`), it simply returns it unchanged. This allows us to simplify our loop significantly.

```c
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    string s = get_string("Before: ");

    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
       // toupper handles the logic for us!
       printf("%c", toupper(s[i]));
    }
    printf("\n");
}
```

> 💡 **Aha! Moment:** Notice the `int i = 0, n = strlen(s)` syntax in the `for` loop. We calculate the length of the string **once** and store it in `n`. This is a crucial optimization; otherwise, `strlen` would run every single time the loop repeats, which is inefficient for long strings!


## ⌨️ Command-Line Arguments

Until now, we have used `get_string` or `get_int` to interact with our programs *after* they started running. **Command-line arguments** allow us to provide data to the program at the exact moment we execute it.

### 🧩 The `main` Function Signature
To accept arguments, we must change how we define our `main` function. Instead of `void`, we use two specific parameters:

```c
int main(int argc, string argv[])
{
    // Code goes here
}
```

1.  **`argc` (Argument Count):** An integer that stores the total number of words typed at the command prompt (including the program name itself).
2.  **`argv[]` (Argument Vector):** An array of strings containing the actual words typed.



---

## 📂 Understanding `argv`

The `argv` array always stores the name of the program at index `0`. Any additional words you type follow at index `1`, `2`, and so on.

**Example Command:** `./hello Subhan`

* `argc` will be `2`.
* `argv[0]` is `"./hello"`.
* `argv[1]` is `"Subhan"`.

### 💻 Implementation: `greet.c`

```c
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check if the user provided exactly one argument (besides the program name)
    if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }
}
```

---

## 🚦 Exit Status & `echo $?`

Every C program returns an **Exit Status** (also known as a Return Code) to the operating system upon completion. This integer value acts as a signal to tell the system whether the program executed successfully or encountered an error.

### 🔢 The `return` Value in `main`
The `int` at the beginning of `int main(void)` indicates that the function must return an integer.
* **`return 0`**: The universal signal for **Success**. It tells the system, "Everything went as planned."
* **Non-zero (e.g., `return 1`)**: Indicates an **Error**. Different numbers can be used to represent different types of failure.

### 🖥️ Monitoring Results with `echo $?`
In a Unix-based terminal (like the CS50 IDE), you can inspect the exit code of the *most recently executed* command by typing:

```bash
echo $?
```

#### 💻 Practical Example: `check.c`

```c
#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; // Returns 1 to signal an error
    }
    
    printf("hello, %s\n", argv[1]);
    return 0; // Returns 0 to signal success
}
```

**Testing in Terminal:**
1.  **Incorrect usage:** Run `./check`. Then run `echo $?`. The output will be `1`.
2.  **Correct usage:** Run `./check Subhan`. Then run `echo $?`. The output will be `0`.

> 💡 **Aha! Moment:** Automated testing tools like `check50` rely on these exit codes. If your program returns `0` but the output is wrong, or if it crashes and returns a non-zero code, the testing suite knows exactly what happened!

---

## 🏗️ Strings as 2D Arrays

Since `argv` is an array of strings, and a string is an array of characters, `argv` is essentially a **two-dimensional array**. 

* `argv[1]` gives you the whole string (e.g., `"Subhan"`).
* `argv[1][0]` gives you the very first character of that string (e.g., `'S'`).

