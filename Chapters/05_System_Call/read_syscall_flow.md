# `read()` System Call Flow in Unix/Linux

The `read()` system call allows a process to **read data from a file descriptor (FD)** into a user-space buffer. It is a fundamental **interface between user programs and the kernel**.

---

## 1️⃣ Purpose

- Move data from **kernel-managed resources** (files, devices, pipes, sockets) into **user-space memory**.
- Ensure **safety**, **isolation**, and **protection**.
- Operates on **file descriptors** instead of filenames directly.

---

## 2️⃣ System Call Signature

```c
#include <unistd.h>

ssize_t read(int fd, void *buf, size_t count);
