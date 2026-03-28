# 🔄 Shorts: Loops (Iteration)

Loops allow your programs to execute blocks of code repeatedly. Instead of copy-pasting code, we use iteration to handle repetitive tasks efficiently.

## 1. The `while` Loop
The `while` loop is used when you want to repeat a block of code an **unknown number of times**, or potentially **not at all** if the condition is false from the start.

* **Infinite Loop:** `while (true) { ... }` will run forever unless you manually stop the program or use a `break;` statement.
* **Conditional Loop:** ```c
  while (boolean-expression)
  {
      // Executes only if the expression is true
  }
  ```


## 2. The `do-while` Loop
The `do-while` loop is unique because it guarantees the code block will execute **at least once** before checking the condition.

* **Logic:** "Do this first, then check if I should do it again."
* **Common Use Case:** **Input Validation** (e.g., asking the user for a positive number).

```c
int n;
do
{
    n = get_int("Positive Number: ");
}
while (n <= 0);
```


## 3. The `for` Loop
Though it looks "syntactically unattractive" at first, the `for` loop is the most common tool for repeating a block a **specific number of times**.

**Structure:** `for (start; expr; increment)`
1. **Start:** The counter variable (usually `i`) is initialized.
2. **Expr:** The Boolean expression is checked. If `false`, the loop ends.
3. **Body:** If `true`, the code inside the braces executes.
4. **Increment:** The counter is updated, and the process repeats from step 2.

```c
for (int i = 0; i < 10; i++)
{
    printf("Iteration number %i\n", i);
}
```


---

## 📝 Summary: Which Loop to Choose?

| Loop Type | Best Use Case | Minimum Executions |
| :--- | :--- | :--- |
| **`while`** | Unknown number of repeats; might not run at all. | 0 |
| **`do-while`** | Unknown number of repeats; **must** run at least once. | 1 |
| **`for`** | Discrete/Known number of repeats (even if calculated at runtime). | 0 |

