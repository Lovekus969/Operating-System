# System Calls in Unix/Linux

System calls are the **interface between user programs and the kernel**. They allow programs to request services from the operating system.

This directory explains:
- What system calls are
- How they work internally
- Examples of basic system calls (`read` and `write`)
- The flow from user space to kernel space

---

## 📌 Topics Covered

1. Introduction to system calls
2. How system calls work (user ↔ kernel)
3. Flow of `read()` and `write()` system calls
4. Error handling
5. Practical examples in C

---

## 📂 Files Explanation

---

### 1️⃣ `syscall_intro.c`

**Purpose:** Introduces system calls in C.

**Key Concepts:**

- **Definition:** A system call is a **controlled entry point into the kernel** that allows a process to perform operations that it cannot do directly in user space.
- **Common system calls:**
  - File operations: `open()`, `read()`, `write()`, `close()`
  - Process management: `fork()`, `exec()`, `wait()`
  - Memory management: `mmap()`, `brk()`, `sbrk()`
  - Signals: `kill()`, `signal()`

**How system calls differ from library functions:**

- Library function (like `printf`) may use system calls internally.
- System calls execute **in kernel mode**; library functions execute in **user mode**.
- Example:
  ```c
  #include <unistd.h>
  int main() {
      write(1, "Hello, System Call!\n", 20);
      return 0;
  }
