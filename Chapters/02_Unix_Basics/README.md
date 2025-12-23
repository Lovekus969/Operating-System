# Unix Basics – File Descriptors & I/O

This directory covers the fundamental Unix/Linux concepts related to
**file descriptors**, **low-level I/O**, and **system calls**.
These concepts are essential for understanding how the operating system
interacts with files, devices, and processes.

---

## 📌 Topics Covered

- What file descriptors (FDs) are
- Standard file descriptors (stdin, stdout, stderr)
- Opening and closing files using system calls
- Reading from and writing to files
- Difference between user-level I/O and kernel-level I/O

---

## 📂 Files Explanation

### 1️⃣ `file_descriptor_intro.c`
Introduces **file descriptors**:
- What a file descriptor is
- How the OS represents open files
- Why integers (0, 1, 2, 3...) are used as file identifiers

Key concepts:
- Kernel maintains a file table
- File descriptor is an index to that table

---

### 2️⃣ `open_close.c`
Demonstrates how to:
- Open a file using `open()`
- Close a file using `close()`

System calls used:
- `open()`
- `close()`

Why it matters:
- Every open file consumes OS resources
- Not closing files can cause resource leaks

---

### 3️⃣ `read_write.c`
Shows **low-level I/O** using:
- `read()`
- `write()`

Key ideas:
- Data moves between **user space ↔ kernel space**
- Buffers are used for temporary storage
- Read/write works on file descriptors, not file names

---

### 4️⃣ `std_fds.c`
Explains **standard file descriptors**:
- `0` → stdin (keyboard)
- `1` → stdout (terminal)
- `2` → stderr (error output)

Demonstrates:
- Writing directly to stdout and stderr
- How shell redirection works internally

---

## 🧠 Important OS Concepts Learned

- User space vs Kernel space
- System calls
- Buffers
- File tables
- Process I/O handling

---

## 🎯 Why This Matters for Operating Systems

These programs explain **how Unix actually works internally**, not just
how to use libraries like `printf()`.

Understanding this helps with:
- Operating Systems course
- Systems programming
- Interviews (Linux, OS, backend roles)
- Debugging real-world software

---

## 🚀 How to Compile & Run

```bash
gcc filename.c -o filename
./filename
