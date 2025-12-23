# Buffer Overflow Demo (Conceptual)

## What is a Buffer?

- A buffer is a **temporary memory storage** for data.
- Can be an array, string, or memory block.

## What is Buffer Overflow?

- Occurs when **more data is written than the buffer can hold**.
- Overflows can **overwrite adjacent memory**.
- Can cause:
  - Program crashes
  - Unexpected behavior
  - Security vulnerabilities (if unsafe code)

---

## Example Concept (Safe)

```c
char buffer[5];
strcpy(buffer, "hello"); // safe
strcpy(buffer, "overflow"); // unsafe, exceeds 5 bytes
