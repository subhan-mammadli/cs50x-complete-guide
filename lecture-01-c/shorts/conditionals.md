# 🚦 Shorts: Conditional Statements

Conditionals allow a program to follow different paths of execution based on specific conditions. They are the "decision-making" engine of your code.

## 1. The `if` and `if-else` Structure
The most common way to branch code is using `if` statements.

* **`if` Statement:** Executes a block of code only if the boolean expression is `true`.
* **`if-else` Statement:** Provides an "either-or" logic. If the condition is `true`, the first block runs; if `false`, the `else` block runs.



### 🔗 Chaining Conditionals (Mutual Exclusivity)
In C, you can chain multiple conditions using `else if`.
* **Mutually Exclusive:** In an `if - else if - else` chain, only **one** branch will ever execute. Once a condition is met, the rest are skipped.
* **Non-Mutually Exclusive:** If you use multiple `if` statements in a row (without `else`), each one is evaluated independently. Multiple blocks could potentially run.

> ⚠️ **Note:** An `else` always binds to the **nearest** `if` only.

---

## 2. The `switch()` Statement
The `switch` statement is an alternative to `if-else` chains when you are comparing a single variable against **discrete, constant values** (enumeration).

* **`case`:** Defines a specific value to check.
* **`default`:** Acts like an `else`; it runs if none of the cases match.
* **`break;`**: Crucial to prevent **"falling through"**. Without a break, C will continue executing the code in the subsequent cases even if they don't match.

**Example of "Fall-through" (Countdown):**
```c
switch(x)
{
    case 3: printf("Three, ");
    case 2: printf("Two, ");
    case 1: printf("One, ");
    default: printf("Blast-off!\n");
}
// If x is 3, output: Three, Two, One, Blast-off!
```



---

## 3. The Ternary Operator (`?:`)
The ternary operator is a shorthand for a simple `if-else` statement. It is often used to make code more concise ("fancy").

**Standard `if-else`:**
```c
int x;
if (expr) { x = 5; }
else { x = 6; }
```

**Ternary Equivalent:**
> `int x = (expr) ? 5 : 6;`

* **Logic:** `(condition) ? (value_if_true) : (value_if_false);`

---

## 📝 Summary: When to use what?
* **`if / else if / else`**: Use for complex logic and ranges (e.g., `x > 10 && y < 20`).
* **`switch`**: Use for choosing between discrete, fixed options (e.g., menu items, days of the week).
* **`?:` (Ternary)**: Use for very short, simple assignments to keep code clean.

