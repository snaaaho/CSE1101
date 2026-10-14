# 💻 CSE 1101: Structured Programming Language

Welcome to the main repository for **CSE 1101: Structured Programming Language**! This repository houses all academic course materials, theory-related assignments, and lab practice codes written in **C**.

To maintain a clean structure, the course content is divided into two main tracks across dedicated branches: **Theory (`CSE1101-T`)** and **Lab (`CSE1101-L`)**.

---

## 🌿 Course Branches & Navigation

| Track | Branch Link | Description | Primary Language |
| :--- | :--- | :--- | :--- |
| 🧪 **Lab Track** | [`CSE1101-L`](https://github.com/snaaaho/CSE-1101/tree/CSE1101-L) | Contains **30+ C lab codes**, assignments, and problem-solving programs with full bash compilation guidelines. | C |
| 📖 **Theory Track** | [`CSE1101-T`](https://github.com/snaaaho/CSE-1101/tree/CSE1101-T) | Contains theory lecture implementations, conceptual code examples, logic building, and theory assignment solutions. | C |

---

## ⚙️ Prerequisites

To run any C program from these branches, ensure you have a C compiler installed:

* **macOS**: Installed via Xcode Command Line Tools (`xcode-select --install`).
* **Linux**: GCC Compiler (`sudo apt install build-essential`).
* **Windows**: [MinGW-w64](https://www.mingw-w64.org/) / VS Code C/C++ Extensions / WSL.

---

## 🚀 How to Clone a Specific Branch

You can clone either track directly using the branch flag (`-b`):

### 1. Clone the Lab Track (`CSE1101-L`)
```bash
git clone -b CSE1101-L https://github.com/snaaaho/CSE-1101.git
```

### 2. Clone the Theory Track (`CSE1101-T`)
```bash
git clone -b CSE1101-T https://github.com/snaaaho/CSE-1101.git
```

---

## 🛠️ Compilation & Execution Commands

Open terminal inside any downloaded branch directory and run these commands to compile and execute C programs:

### 1. Single Program Compilation & Execution

**Standard Compilation:**
```bash
gcc filename.c -o output_name
```

**Compile with strict warnings enabled (Recommended):**
```bash
gcc -Wall filename.c -o output_name
```

**Run on macOS / Linux:**
```bash
./output_name
```

**Run on Windows (CMD / PowerShell):**
```cmd
output_name.exe
```

**Compile & Run in a Single Command:**
```bash
gcc filename.c -o output_name && ./output_name
```

---

### 2. Batch Compilation (Compile All `.c` Files)

```bash
for file in *.c; do gcc "$file" -o "${file%.c}"; done
```

---

### 3. Cleanup Compiled Executables

```bash
rm -f *.out *.exe a.out
```

---

## 📝 Academic Integrity & License

This repository is maintained for educational purposes, coursework submission, and personal archiving for the CSE 1101 course.
