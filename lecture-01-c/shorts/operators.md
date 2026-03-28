# ⚡ Shorts: Operators and Boolean Expressions

Operators are the tools we use to manipulate data, while Boolean expressions allow our programs to make decisions by evaluating conditions as `true` or `false`.

## 1. Arithmetic Operators
In C, standard mathematical operations work as expected, but with some powerful shorthands.

* **Basic Operations:** `+` (Addition), `-` (Subtraction), `*` (Multiplication), `/` (Division).
* **Modulus (`%`):** Returns the **remainder** of a division.
    * Example: `int m = 13 % 4; // m is 1` (Because 13 = 4 * 3 + **1**).
* **Compound Assignment:** A shorthand to update a variable's value.
    * `x = x * 5;` is the same as `x *= 5;`
    * This works for all five basic operators (`+=`, `-=`, `*=`, `/=`, `%=`).
* **Increment/Decrement:** * `x++;` (Increments x by 1).
    * `x--;` (Decrements x by 1).

---

## 2. Boolean Expressions
A Boolean expression is any statement that evaluates to either **true** or **false**. 

> **Important in C:** There is no native "Boolean" type in standard C (until C99/CS50 library). Internally:
> * **`0`** is equivalent to **false**.
> * **Any non-zero value** is equivalent to **true**.

### A. Logical Operators
Used to combine multiple conditions.

| Operator | Name | Description |
| :--- | :--- | :--- |
| `&&` | **Logical AND** | True only if **both** operands are true. |
| `||` | **Logical OR** | True if **at least one** operand is true. |
| `!` | **Logical NOT** | Inverts the value (True becomes False, and vice-versa). |



### B. Relational Operators
Used to compare two values. They look similar to elementary arithmetic:
* `x < y` (Less than)
* `x <= y` (Less than or equal to)
* `x > y` (Greater than)
* `x >= y` (Greater than or equal to)

### C. Equality vs. Assignment (The Common Trap ⚠️)
* **`==` (Equality):** Tests if two values are the same. (`x == y`)
* **`=` (Assignment):** Sets the value on the right to the variable on the left. (`x = y`)

> **Warning:** Using `if (x = 5)` instead of `if (x == 5)` will not result in a comparison. It will assign 5 to x, and since 5 is non-zero, the condition will **always be true**.
