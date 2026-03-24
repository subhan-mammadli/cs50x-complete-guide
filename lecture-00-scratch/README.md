# 🐱 CS50x - Lecture 0: Scratch & Computer Science Fundamentals

This folder contains my progress for **Week 0** of Harvard's **CS50x: Introduction to Computer Science**. It includes my first programming project and detailed study notes covering how computers process information.

## 📁 Repository Structure

  * **`Penalty Game`**: An interactive Scratch project (Problem Set 0) demonstrating core programming logic.
  * **`Notes/`**: Comprehensive documentation on binary systems, data representation, and algorithmic thinking.

-----

## 🧠 Core Concepts Learned

Before touching a single block of code, this lecture focused on the "under the hood" mechanics of computing:

### 1\. Data Representation

Computers don't see "A" or "Red"; they see numbers.

  * **Binary (Base-2):** Understanding how transistors represent data using only `0` (Off) and `1` (On).
  * **Text Encoding:** \* **ASCII:** Mapping characters to numbers (e.g., `A = 65`).
      * **Unicode (UTF-8):** The global standard that allows us to use emojis (like 🚀) and different languages by using multiple bytes.

### 2\. Digital Media

  * **Color (RGB):** How every pixel is a combination of Red, Green, and Blue, usually stored in 24-bit "True Color."
  * **Audio & Video:** \* **Audio:** Sampling sound waves into digital numbers.
      * **Video:** A rapid sequence of still images (Frames) combined with clever compression math.

### 3\. Algorithms & Efficiency

A program's quality is defined by its **correctness** and its **efficiency**.

  * **Linear Search:** Checking items one by one ($O(n)$).
  * **Binary Search:** Dividing the problem in half repeatedly ($O(\log n)$). This is significantly faster as the dataset grows.

-----

## 🎮 Featured Project: Penalty Game

For the first Problem Set, I developed a **Penalty Shootout** game in Scratch. It utilizes several fundamental programming constructs:

  * **Variables:** Tracking the player's score and ball speed.
  * **Functions (Custom Blocks):** Creating reusable "Meow" or "Goal" actions to keep the code clean.
  * **Loops & Conditionals:** Using `Forever` loops and `If-Then` statements to detect if the ball hits the goalkeeper or the net.
  * **Input/Output:** Taking user keyboard/mouse input and providing visual/audio feedback.

-----

## 🚀 How to Run the Project

1.  Go to [Scratch MIT](https://www.google.com/search?q=https://scratch.mit.edu/).
2.  Click on **File** \> **Load from your computer**.
3.  Select the `.sb3` file located in this folder.
4.  Click the **Green Flag** to start the game\!

-----

## 🛠️ Technical Outlook

> "The compiler is the bridge between human thought and machine execution."

This week provided the foundation for moving from visual blocks to text-based languages. Understanding that **Input → Algorithm → Output** is a universal truth regardless of the language used (C, Python, or Scratch).

**Next Step:** Moving into [Week 1: C Programming](../lecture-01-c/).

