## 🧱 Section 2: Array Implementation & String Memory

In this section, we transition from the theory of memory to the practical application of **Arrays** and **Strings** in C. We explore different initialization methods and how to traverse data structures using loops.

### 🏗️ Creating and Initializing Arrays
An array can be defined in two primary ways depending on whether you know the values ahead of time.

1.  **Manual Assignment:** Declaring the size first and assigning values to specific indices.
2.  **Inline Initialization:** Declaring and filling the array simultaneously using curly braces `{}`.

```c
// Method 1: Declaration followed by assignment
int scores[5];
scores[0] = 120;

// Method 2: Inline initialization (Compiler infers the size)
int scores[] = {120, 86, 56, 42, 23};
```

### 🔄 Array Traversal
To access every element in an array, we use a `for` loop. The loop counter `i` serves as the **index**, allowing us to visit each memory slot sequentially.

```c
for (int i = 0; i < 5; i++)
{
    printf("%i\n", scores[i]);
}
```



---

## 🧵 Strings: Arrays of Characters

In C, a **String** is fundamentally an array of type `char`. Because it is an array, we can use bracket notation `[]` to access individual characters within a word.

### 🛑 The NUL Terminator (`\0`)
Every string in C must end with a hidden character known as the **NUL Terminator** (`\0`). This character tells functions like `printf` or `strlen` exactly where the data ends in memory.

* **Length vs. Size:** A string with 4 visible characters (like "Emma") actually requires **5 bytes** of memory to accommodate the `\0` at the end.

```c
string name = "Emma";

// Accessing the first character
printf("%c\n", name[0]); // Outputs: E

// Accessing the sentinel value (The Null Terminator)
printf("%i\n", name[4]); // Outputs: 0 (The integer value of \0)
```



> 💡 **Aha! Moment:** If you try to access an index beyond the NUL terminator, you are entering **"Garbage Memory"**—space in the RAM that your program doesn't own. This is why staying within the bounds of your array is the most important rule in C!

## ⌨️ Command-Line Arguments (CLI)

In C, the `main` function can be configured to accept inputs directly from the terminal at the moment the program is executed. This allows for dynamic behavior without requiring `get_string` during runtime.

### 🧩 The `main` Function Parameters

```c
int main(int argc, string argv[])
{
    // Program logic here
}
```

1.  **`argc` (Argument Count):** An integer representing the total number of strings entered in the command line (including the program name).
2.  **`argv[]` (Argument Vector):** An array of strings where each element is one of the words typed in the terminal.



### 📂 Data Structure Visualization

When you run a command like `./caesar 13`, the operating system populates the arguments as follows:

* **Command:** `./caesar 13`
* **`argc`**: `2`
* **`argv[0]`**: `"./caesar"` (The executable name)
* **`argv[1]`**: `"13"` (The first user-provided argument)

---

## 🏗️ Strings as 2D Arrays

Because `argv` is an **array of strings**, and a **string** is an **array of characters**, we can treat `argv` as a two-dimensional grid. This is essential for tasks like extracting initials or validating keys.

### 🔍 Accessing Specific Characters
To access the first letter of each word provided in the command line, we use two sets of brackets:

* **Example Command:** `./initials Kelly Ding`
* **`argv[1][0]`**: Accesses the string at index 1 ("Kelly") and the character at index 0 → **'K'**
* **`argv[2][0]`**: Accesses the string at index 2 ("Ding") and the character at index 0 → **'D'**



> 💡 **Aha! Moment:** Even though `13` in `./caesar 13` looks like a number, it is stored in `argv[1]` as a **string** ("1" and "3"). To use it as a mathematical integer, we must convert it using functions like `atoi`.
