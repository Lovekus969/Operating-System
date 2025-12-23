# Memory Management in Operating Systems

This directory focuses on how memory is organized, allocated, protected,
and managed in Unix/Linux systems.

Memory management is a **core responsibility of the operating system** and
is critical for performance, security, and stability.

---

## 📌 Topics Covered

- Stack vs Heap memory
- Virtual memory concepts
- Paging and address translation
- Memory protection
- Buffer overflow basics (conceptual understanding)

---

## 📂 Files Explanation

### 1️⃣ `stack_vs_heap.c`
Explains the difference between **stack memory** and **heap memory**.

Key concepts:
- Stack memory:
  - Automatic allocation
  - Function calls & local variables
  - Fast access, limited size
- Heap memory:
  - Dynamic allocation (`malloc`, `free`)
  - Slower but flexible
  - Managed by the programmer

Why it matters:
- Helps understand memory layout of a process
- Prevents memory leaks and crashes

---

### 2️⃣ `virtual_memory_notes.md`
Covers **virtual memory** concepts used by modern operating systems.

Key ideas:
- Each process gets its own virtual address space
- OS maps virtual addresses → physical memory
- Programs believe they have large, continuous memory

Important benefits:
- Process isolation
- Efficient memory usage
- Security and stability

---

### 3️⃣ `paging_concepts.md`
Explains **paging**, the most common memory management technique.

Key concepts:
- Pages and frames
- Page tables
- Logical address vs physical address
- Page faults

Why paging matters:
- Eliminates external fragmentation
- Enables virtual memory
- Allows efficient multitasking

---

### 4️⃣ `buffer_overflow_demo.c`
Demonstrates the **concept** of buffer overflow in a controlled, educational way.

Key ideas:
- What a buffer is
- What happens when memory boundaries are crossed
- Why operating systems enforce memory protection

Important note:
- This file is for **learning and awareness only**
- Helps understand why protections like stack canaries,
  ASLR, and memory segmentation exist

---

## 🧠 Important OS Concepts Learned

- Process memory layout
- Stack, heap, data, and text segments
- Virtual vs physical memory
- Paging and page tables
- Memory safety and protection

---

## 🧱 Typical Process Memory Layout

