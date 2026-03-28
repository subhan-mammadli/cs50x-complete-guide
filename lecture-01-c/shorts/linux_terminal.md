# 💻 Shorts: The Linux Command Line

While modern Operating Systems use Graphical User Interfaces (GUI), programmers spend most of their time in the **Terminal**. In CS50, we use a cloud-based Ubuntu environment, which is a popular flavor of **Linux (UNIX-based)**.

## 📂 Navigation and Exploration

The terminal allows you to move through your file system using text-based paths.

* **`ls` (List):** Lists all files and folders in the current directory.
* **`cd <directory>` (Change Directory):** Moves you into the specified folder.
    * **`.`**: Shorthand for the **current** directory.
    * **`..`**: Shorthand for the **parent** (one level up) directory.
* **`pwd` (Present Working Directory):** Prints the full path of where you are currently located.



## 🛠️ File and Folder Manipulation

* **`mkdir <name>` (Make Directory):** Creates a new folder.
* **`cp <source> <destination>` (Copy):** Creates a duplicate of a file.
    * **`cp -r`**: Recursive copy. Required to copy a directory and everything inside it.
* **`mv <source> <destination>` (Move):** Used to move a file to a new location or simply **rename** it.
* **`rm <file>` (Remove):** Deletes a file.
    * **`rm -r`**: Deletes a directory and its contents.
    * **`rm -f`**: Force delete (skips the confirmation prompt).
    * **`rm -rf`**: The most powerful (and dangerous) command. Forcefully removes a directory and all sub-contents. **Use with extreme caution!**

## 🔍 Advanced Utilities for Exploration

As you progress, you will encounter these specialized commands:

| Command | Purpose |
| :--- | :--- |
| **`touch`** | Creates a new empty file. |
| **`rmdir`** | Removes an **empty** directory. |
| **`man`** | Opens the manual for any command (e.g., `man ls`). |
| **`diff`** | Compares two files and shows the differences. |
| **`sudo`** | Executes a command with administrative (root) privileges. |
| **`clear`** | Clears the terminal screen for a fresh start. |
| **`chmod`** | Changes file permissions (Read/Write/Execute). |
