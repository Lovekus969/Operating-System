# Process Management in Unix/Linux

This directory focuses on **process creation, execution, and synchronization**
in Unix/Linux using core system calls such as `fork()`, `exec()`, and `wait()`.

Understanding these concepts is essential for learning how an operating system
manages multiple programs running at the same time.

---

## 📌 Topics Covered

- What a process is
- How new processes are created
- Parent–child process relationships
- Process IDs (PID & PPID)
- Replacing a process image
- Waiting for child processes to finish

---

## 📂 Files Explanation

### 1️⃣ `fork_intro.c`
Introduces **process creation** using `fork()`.

Key concepts:
- `fork()` creates a **child process**
- Parent and child run the **same code**
- Return values of `fork()`:
  - `0` → Child process
  - `> 0` → Parent process (child PID)
  - `< 0` → Error

Important ideas:
- Parent and child have **separate memory spaces**
- Both processes continue execution after `fork()`

---

### 2️⃣ `fork_exec.c`
Demonstrates how `fork()` works together with `exec()`.

Key concepts:
- `fork()` → creates a new process
- `exec()` → replaces the process code
- After `exec()`, old program **no longer exists**

Why this matters:
- This is how shells (like `bash`) run commands
- `exec()` does not create a new process
- PID remains the same after `exec()`

---

### 3️⃣ `wait_example.c`
Explains **process synchronization** using `wait()`.

Key concepts:
- Parent waits for child to finish
- Prevents **zombie processes**
- Parent can collect child exit status

Important ideas:
- `wait()` blocks parent until child exits
- Kernel cleans up child process resources

---

## 🧠 Important OS Concepts Learned

- Process vs Program
- Parent–child process relationship
- PID and PPID
- Zombie and orphan processes
- Context switching (conceptual)
- Kernel process table

---

## 🔄 Process Lifecycle (High Level)

1. Program is loaded
2. Process is created (`fork`)
3. Process executes (`exec`)
4. Process terminates
5. Parent collects status (`wait`)

---

## 🎯 Why This Matters for Operating Systems

These system calls are the **foundation of multitasking** in Unix.

Used in:
- Shells
- Servers
- Daemons
- Operating system kernels

Understanding this helps with:
- OS exams
- System programming
- Backend & Linux interviews

---

## 🚀 How to Compile & Run

```bash
gcc filename.c -o filename
./filename
