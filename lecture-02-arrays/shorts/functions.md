# 📦 Functions: The "Black Box" Concept

In programming, a function is a self-contained unit of code designed to perform a specific task. It acts as a "Black Box": a mechanism that takes a set of inputs (0 or more) and produces exactly one output.

## 🌑 The Power of Abstraction

* **Implementation Independence:** If you are using a function written by someone else, you do not need to know the underlying code or how it works internally.
* **The Functional Contract:** You only need to understand the "contract"—what inputs to provide and what result to expect. This is why functions should have clear, descriptive names.
* **Example:** A `mult(a, b)` function might calculate a product by simple multiplication or by adding $a$ to itself $b$ times. As long as the output is correct, the internal method remains hidden.

## 🛠️ Why Use Functions?

* **Organization:** They break a complicated, unwieldy problem into smaller, manageable subparts.
* **Simplification:** Smaller components are significantly easier to design, implement, and debug.
* **Reusability:** You only need to write the code once, but you can recycle and use it as often as needed.

## 🏗️ Creating a Function (The Two-Step Process)

### 1. Function Declaration (The Prototype)
The declaration serves as a "heads-up" to the compiler that a user-written function exists in the code. These should always be placed at the top of your file, before `main()`.

**Standard Syntax:**
`return-type name(argument-list);`

* **Return-type:** The data type of the output (e.g., `int`, `float`, `double`). Use `void` if the function has no output.
* **Name:** A relevant, appropriate name describing the action.
* **Argument-list:** A comma-separated set of inputs, each with a specific type and name. Use `void` if the function takes no inputs.

### 2. Function Definition (The Implementation)
The definition is where the actual logic of the "black box" is written. It looks identical to the declaration but includes a body wrapped in curly braces `{}`.

```c
float mult_two_reals(float x, float y) {
    return x * y; // The calculation and return statement
}
```

## 🚀 Function Calls
To execute a function, you "call" it by passing the required arguments and assigning the resulting value to a variable of the matching type.

```c
int sum = add_two_ints(5, 10);
```

## 📐 Practice Case: valid_triangle
To verify if three side lengths ($x, y, z$) can form a valid triangle, the function must pass two tests based on geometric rules:

1.  **Positive Lengths:** All sides must be greater than zero.
2.  **Triangle Inequality Theorem:** The sum of any two sides must be greater than the length of the third side.

**Implementation:**
```c
bool valid_triangle(float x, float y, float z) {
    // Check for non-positive sides
    if (x <= 0 || y <= 0 || z <= 0) 
    {
        return false;
    }

    // Check if the sum of any two sides is greater than the third
    if ((x + y <= z) || (x + z <= y) || (y + z <= x)) 
    {
        return false;
    }

    return true; // Passed all geometric requirements
}
```