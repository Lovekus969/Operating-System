# Paging Concepts

## What is Paging?

- Paging is a memory management technique where **physical memory is divided into fixed-size blocks called frames**.
- Corresponding **virtual memory is divided into pages** of the same size.
- Pages are mapped to frames using a **page table**.

---

## Key Components

1. **Page Table**
   - Maps **virtual addresses → physical addresses**
   - Each process has its own page table.

2. **Page Frame**
   - Fixed-size block in RAM.
   - Typical size: 4 KB, 8 KB, etc.

3. **Page Fault**
   - Occurs when a process accesses a page **not in RAM**.
   - OS brings the page from disk into RAM.

---

## Address Translation

