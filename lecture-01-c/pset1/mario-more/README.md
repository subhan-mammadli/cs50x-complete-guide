## 🏰 Project 3: Mario (More Comfortable)

This project recreates the full symmetric pyramids from *Super Mario Bros.* Unlike the "Less" version, this challenge requires rendering two opposing pyramids separated by a consistent two-space gap. It tests the ability to manage complex terminal output and maintain code modularity.

### 📝 Logic & Algorithmic Thinking

The construction of the double pyramid relies on a synchronized rendering of three distinct components on every line:

1. **The Left Pyramid**: A right-aligned structure where leading spaces decrease as the hashes increase.
2. **The Gap**: A constant string of two spaces (`"  "`) that never changes regardless of the height.
3. **The Right Pyramid**: A left-aligned structure that mirrored the hash count of the left side but requires no leading spaces.

### 🧩 Modular Design

To keep the `main` function clean, I abstracted the logic into two helper functions:

* `print_left`: Handles the complex math for padding spaces and the initial bricks.
* `print_right`: Simply prints the necessary hashes for the second half of the pyramid.

```c
for (int i = 0; i < n; i++)
{
    print_left(n - 1, i); // Handles spaces and hashes
    printf("  ");         // The constant gap
    print_right(i);       // Handles the mirrored hashes
    printf("\n");
}

```

> 💡 **Aha! Moment:** Notice that the `print_right` function doesn't need a `spaces` parameter. Because terminal cursors move from left to right, we only need to "push" the first pyramid into place with spaces. The second pyramid simply starts after the two-space gap.

### 🛠️ Technologies Used

* **C Language**
* **Function Prototypes & Definitions**
* **Nested Loop Synchronization**
* **Input Validation (`do-while`)**

---

### 📂 How to Run

1. Compile the program: `make mario`
2. Execute the program: `./mario`
3. Input a height (1-8) to see the symmetric output.
