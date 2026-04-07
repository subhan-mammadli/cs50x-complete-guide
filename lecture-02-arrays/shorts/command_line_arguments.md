## ⌨️ The `main` Function Signature

In C, the `main` function can be designed to accept inputs directly from the terminal. This allows users to pass data to the program at the moment of execution rather than during runtime. To handle these arguments, the `main` function must be declared with two specific parameters:

```c
int main(int argc, string argv[]) {
    // Program logic here
}
```

---

## 🧩 Core Parameters

* **`argc` (Argument Count):** An integer representing the total number of strings typed into the command line.
* **`argv[]` (Argument Vector):** An array of strings where each element contains one of the words entered in the terminal.



---

## 📂 Understanding the Indexing

When a command is executed, the operating system populates `argv` automatically:

* **`argv[0]`**: This always contains the name of the program being executed (e.g., `./caesar`).
* **`argv[1]` through `argv[n]`**: These indices contain the actual data or "arguments" provided by the user.

### 🔍 Practical Example
If you run the command `./caesar 13`:
* **`argc`** is `2` (The program name + one argument).
* **`argv[0]`** is `./caesar`.
* **`argv[1]`** is `"13"`.

---

## ⚠️ Important Considerations

* **Data Types:** All elements in `argv` are stored as **strings**, even if they look like numbers.
* **String Conversion:** To use a command-line argument as an integer (for math or loops), you must convert it using a function like `atoi()`.
* **Null Terminator:** Like all strings in C, each string inside the `argv` array is terminated by a `\0` (NUL character).