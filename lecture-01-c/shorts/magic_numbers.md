# 🪄 Shorts: Magic Numbers and Symbolic Constants

As your programs grow, you will often use constant values (like the number of cards in a deck or the maximum height of a pyramid). Writing these numbers directly into your code creates what programmers call **Magic Numbers**.

## 1. The Problem with Magic Numbers
A "Magic Number" is a hard-coded numeric value that appears without explanation.
* **Lack of Clarity:** If a collaborator sees the number `52` in your code, they might guess it refers to a deck of cards, but it isn't explicitly clear.
* **Maintenance Nightmare:** If you use the number `52` in ten different places and later decide to change the deck size to `32`, you have to find and replace every single instance manually. This is prone to errors.



## 2. The Solution: `#define` (Macros)
C provides a **preprocessor directive** called `#define` to create **Symbolic Constants**. 

* **The Analogy:** If `#include` is like "copy and paste," then `#define` is like **"find and replace."**
* **How it works:** Before your code is even compiled, the preprocessor goes through your file and replaces every instance of your defined name with its replacement value.

### Syntax:
> `#define NAME REPLACEMENT`
*(Note: There is no semicolon `;` or equals sign `=` used here.)*

**Examples:**
```c
#define PI 3.14159265
#define COURSE "CS50"
#define DECKSIZE 52
```

## 3. Best Practices in Implementation
By using symbolic constants, your functions become much more robust and readable.

**Before (Hard-coded):**
```c
for (int i = 0; i < 52; i++)
{
    // What does 52 mean?
}
```

**After (Professional):**
```c
#define DECKSIZE 52

for (int i = 0; i < DECKSIZE; i++)
{
    // Now it's clear: we are iterating through a deck.
}
```

* **Naming Convention:** By convention, symbolic constants are written in **ALL CAPS** to distinguish them from regular variables.
* **Global Scope:** Place your `#define` statements at the very top of your file (below the `#include` lines) so they are available to every function in your program.
