## 💳 Project 5: Credit (Luhn's Algorithm)

This project involves building a tool to validate credit card numbers and identify the issuing network (AMEX, MasterCard, or VISA). It utilizes **Luhn’s Algorithm**, a checksum formula used to distinguish valid numbers from random sequences of digits or typing errors.

### 📝 Logic & Algorithmic Thinking

The core challenge of this project is the mathematical extraction of individual digits from a `long` integer without converting it into a string.

#### 1. The Checksum (Luhn's Algorithm)

To validate the number, the program follows these steps:

* Multiply every other digit by 2, starting with the number’s second-to-last digit.
* Add those products' digits (not the products themselves) together.
* Add the sum to the sum of the digits that weren’t multiplied by 2.
* If the total’s last digit is 0 (total modulo 10 is 0), the number is valid.

#### 2. Brand Identification

Once validated, the program checks the **length** and the **starting digits** (IIN ranges) to determine the brand:

* **AMEX**: 15 digits, starts with 34 or 37.
* **MASTERCARD**: 16 digits, starts with 51, 52, 53, 54, or 55.
* **VISA**: 13 or 16 digits, starts with 4.

### 🧩 Key Code Features

* **Modulo and Division**: I used `% 10` to peel off the last digit and `/ 10` to shift the number to the right. This allows for efficient iteration through the `long` value.
* **Boolean Logic**: The `calculate_checksum` function returns a `bool`, making the `main` function highly readable and logical.
* **State Management**: Using a `position` counter within the loop to toggle between digits that need to be multiplied and digits that are added normally.

```c
// Example of the doubling logic for Luhn's
int product = current_digit * 2;
if (product >= 10)
{
    // Seperate digits of the product (e.g., 12 becomes 1 + 2)
    sum_multiplied += (product % 10) + (product / 10);
}

```

> 💡 **Aha! Moment:** The most interesting part of this project was handling products greater than 10. Realizing that `(product % 10) + (product / 10)` effectively splits a two-digit number into its individual parts was a major breakthrough in optimizing the math.

### 🛠️ Technologies Used

* **C Language**
* **Luhn’s Algorithm (Checksum Logic)**
* **Data Types**: Specifically using `long` to accommodate 16-digit numbers.
* **Modular Function Design**

---

### 📂 How to Run

1. Compile: `make credit`
2. Run: `./credit`
3. Enter a credit card number to verify its authenticity and brand.
