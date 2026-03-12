## 💰 Project 4: Cash (The Greedy Algorithm)

This project implements a program that calculates the minimum number of coins required to give a user change. This is a classic example of a **Greedy Algorithm**, which always makes the locally optimal choice at each step (using the largest possible coin) to find the global optimum.

### 📝 Logic & Algorithmic Thinking

The program operates on a simple but effective principle: always use the largest denomination possible before moving to a smaller one. This ensures that the total number of coins dispensed is minimized.

1. **Input Validation**: A `do-while` loop ensures the user provides a non-negative integer representing cents.
2. **Sequential Deduction**: The program checks for denominations in descending order:
* **Quarters** (25¢)
* **Dimes** (10¢)
* **Nickels** (5¢)
* **Pennies** (1¢)


3. **Modular Abstraction**: Each denomination has its own helper function (e.g., `calculate_quarters`), which isolates the logic for that specific coin.

### 🧩 Function Breakdown

Each helper function follows a similar logic:

* It receives the current amount of `cents`.
* It uses a `while` loop to count how many times that specific coin can "fit" into the remaining balance.
* It returns the count to the `main` function, where the total balance is updated.

```c
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

```

> 💡 **Aha! Moment:** By subtracting the value of the coins from the total in `main` after each function call, we ensure that the next function only sees the "remainder" of the money. This prevents us from over-counting.

### 🛠️ Technologies Used

* **C Language**
* **Greedy Algorithm Logic**
* **Top-Down Design (Functional Decomposition)**
* **Integer Arithmetic**

---

### 📂 How to Run

1. Compile: `make cash`
2. Run: `./cash`
3. Enter the amount of change owed (e.g., `70`) and the program will output the minimum number of coins (e.g., `4` — two quarters and two dimes).
