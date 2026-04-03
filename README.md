# 🖥️ MiniOS (CLI-Based OS in C)

> 🚀 A minimal **Command-Line Interface (CLI) based operating system** built in C to explore low-level system programming and core OS concepts.

---

## 🧠 Overview

**MiniOS** is a lightweight, CLI-based operating system developed in **C**, designed to simulate how an operating system works internally.

Instead of a graphical interface, MiniOS uses a **command-line shell**, allowing users to interact directly with the system — just like early operating systems.

---

## 🎯 Objectives

* Understand **Operating System fundamentals**
* Build a **custom CLI shell in C**
* Learn how **commands are parsed and executed**
* Explore **low-level system design**

---

## ✨ Features

* 💻 CLI-based interaction (custom shell)
* ⌨️ Command parsing and execution
* 📁 Basic file/utility commands
* 🧠 Modular and extendable architecture
* ⚙️ Built entirely using C

---

## 🛠️ Tech Stack

| Category | Technology             |
| -------- | ---------------------- |
| Language | C                      |
| Concepts | OS Design, CLI Systems |
| Tools    | GCC                    |
| Platform | Cross-platform         |

---

## 📂 Project Structure

```bash
miniOS/
│
├── src/              # Source code
│   ├── shell.c       # CLI shell logic
│   ├── commands.c    # Command implementations
│   ├── parser.c      # Input parsing
│
├── include/          # Header files
├── main.c            # Entry point
├── Makefile
└── README.md
```

---

## ⚙️ How It Works

1. 🟢 System starts from `main.c`
2. 💻 CLI shell is initialized
3. ⌨️ User enters commands
4. 🧠 Input is parsed and matched
5. ⚙️ Corresponding function executes

---

## 🚀 Getting Started

### 🔧 Prerequisites

* GCC Compiler
* Make (optional)

---

### 📦 Installation

```bash
git clone https://github.com/samar2341/miniOS.git
cd miniOS
```

---

### ⚙️ Compile the Project

```bash
gcc main.c -o miniOS
```

*(or use Makefile if available)*

```bash
make
```

---

### ▶️ Run the OS

```bash
./miniOS
```

---

## 💡 Example Commands

```bash
help        # List available commands
clear       # Clear the screen
echo Hello  # Print text
exit        # Exit the OS
```

---

## 🤝 Contributing

```bash
git checkout -b feature/new-feature
git commit -m "Added feature"
git push origin feature/new-feature
```

---

## 👤 Author

**Samar**

---

## 📜 License

MIT License

---

## ⭐ Support

If you like this project:

* ⭐ Star the repo
* 🍴 Fork it
* 📢 Share it

---

## 🚀 Future Improvements

* 📂 File system simulation
* 🧠 Process management
* 🔐 User authentication
* 🖥️ Advanced shell commands
* ⚡ Script execution support

---

## 💡 Inspiration

Inspired by early operating systems where **command-line interfaces were the primary way to interact with computers**.

---

> 🔥 *“Before GUIs, there was pure logic.”*
