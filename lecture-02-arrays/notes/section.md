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
