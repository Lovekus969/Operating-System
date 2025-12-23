# Virtual Memory Notes

## What is Virtual Memory?

- Virtual memory is a **memory management technique** used by modern OS.
- It gives each process the illusion of having a **large, continuous memory space**, independent of physical RAM.
- Managed by the **Memory Management Unit (MMU)** in the CPU.

---

## Key Concepts

1. **Virtual Address vs Physical Address**
   - Virtual address: Used by the process.
   - Physical address: Actual location in RAM.
   - OS translates virtual → physical using page tables.

2. **Benefits of Virtual Memory**
   - **Process isolation**: Each process has its own address space.
   - **Efficient memory usage**: Only loads needed pages into RAM.
   - **Security & stability**: Prevents processes from accessing each other’s memory.

3. **Paging & Swapping**
   - When RAM is full, OS moves pages to **disk (swap space)**.
   - OS brings pages back into RAM when needed (page fault).

4. **Segments in Virtual Memory**
   - **Text segment**: Executable code
   - **Data segment**: Global/static variables
   - **Heap**: Dynamically allocated memory
   - **Stack**: Local variables, function calls

---

## Summary

- Virtual memory is **transparent to programs**.
- It allows **efficient multitasking**.
- Paging and page tables are key mechanisms.
- Understanding virtual memory is critical for:
  - Process management
  - Memory protection
  - Efficient OS design
