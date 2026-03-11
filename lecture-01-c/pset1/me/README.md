## 👤 Project 1: Hello, It's Me

This project moves beyond static output by introducing **User Input** and **Dynamic String Formatting**. The goal was to create a program that interacts with the user by asking for their name and then personalizing the greeting.

### 📝 Logic & Implementation

The program uses the `cs50.h` library to handle the complexities of string input in C, which otherwise requires manual memory management.

* **The `get_string` Function**: Used to prompt the user and safely capture their text input into a variable.
* **Variable Declaration**: Storing the user's response in a variable of type `string` (a custom abstraction provided by CS50).
* **Format Specifiers**: Using `%s` as a placeholder within `printf` to inject the value of the `name` variable into the output string.
* **Newline Character**: Including `\n` to ensure the terminal prompt appears on a clean line after the program executes.

```c
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Getting user input
    string name = get_string("What's your name? ");
    
    // Formatting output with the captured string
    printf("hello, %s\n", name);
}

```

> 💡 **Aha! Moment:** In C, we cannot simply add strings together like in Python (e.g., `"hello" + name`). We must use **Format Specifiers** like `%s` for strings, `%i` for integers, or `%f` for floats to "plug" values into our text.

### 🛠️ Technologies Used

* **C Language**
* **CS50 Library (`cs50.h`)**
* **Standard I/O (`stdio.h`)**

---

### 📂 How to Run

1. Ensure the CS50 library is linked in your environment.
2. Compile: `make hello`
3. Run: `./hello`
