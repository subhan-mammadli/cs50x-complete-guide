## 🧱 Project 2: Mario (Less Comfortable)

This project recreates the iconic right-aligned pyramid from Nintendo's *Super Mario Bros.* using C. The primary challenge is managing **two-dimensional alignment**—calculating exactly how many spaces and hashes (`#`) are needed for each row based on a user-defined height.

### 📝 Logic & Algorithmic Thinking

The solution is built on three main programming pillars:

1. **Input Validation**: A `do-while` loop ensures the height $n$ stays within the logical bounds of $1$ to $8$.
2. **Abstraction**: Instead of nesting all logic inside `main`, I created a helper function `print_row` to handle the horizontal construction of each level.
3. **The Space-to-Hash Ratio**:
* To achieve right-alignment, the number of spaces decreases as the row number increases.
* For a height of $n$, the first row needs $n-1$ spaces and $1$ hash.
* The mathematical relationship is: `Spaces = Height - Current Row - 1`.



### 💻 Code Breakdown

* **Outer Loop**: Iterates through each "floor" of the pyramid.
* **Inner Loops (within `print_row`)**:
* The first loop prints the leading whitespace.
* The second loop prints the hashes representing bricks.



```c
void print_row(int spaces, int bricks)
{
    // Print leading whitespace for alignment
    for (int i = spaces; i > bricks; i--)
    {
        printf(" ");
    }
    // Print bricks
    for (int i = 0; i <= bricks; i++)
    {
        printf("#");
    }
}

```

> 💡 **Aha! Moment:** The hardest part of this problem isn't printing the `#` characters; it's printing the "invisible" spaces. Without the correct space logic, the pyramid would be left-aligned (easier) rather than right-aligned (Mario-style).

### 🛠️ Technologies Used

* **C Language**
* **Custom Functions & Abstraction**
* **Boolean Logic & Iteration**

---

### 📂 How to Run

1. Compile the program: `make mario`
2. Execute the program: `./mario`
3. Enter a height between 1 and 8 when prompted.
