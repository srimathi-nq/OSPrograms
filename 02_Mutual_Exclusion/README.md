# Mutual Exclusion

This folder contains C examples for mutual exclusion, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Mutex_Mutual_Exclusion.c`

**What it demonstrates:** Uses a POSIX mutex to ensure that only one student thread uses Computer 101 at a time.

**Use case:** Models exclusive access to a shared computer, printer, or other single-user resource.

### `Semaphore_Mutual_Exclusion.c`

**What it demonstrates:** Uses a binary semaphore initialized to one to control access to Computer 101.

**Use case:** Shows how a semaphore can represent one available shared resource.

### `Semaphore_and_Monitor.c`

**What it demonstrates:** Combines a mutex-protected request step with a binary semaphore for resource allocation.

**Use case:** Demonstrates coordination of a shared computer request using locking and semaphore operations.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Mutex_Mutual_Exclusion.c`

```bash
gcc Mutex_Mutual_Exclusion.c -o mutex_mutual_exclusion -pthread
./mutex_mutual_exclusion
```

### `Semaphore_Mutual_Exclusion.c`

```bash
gcc Semaphore_Mutual_Exclusion.c -o semaphore_mutual_exclusion -pthread
./semaphore_mutual_exclusion
```

### `Semaphore_and_Monitor.c`

```bash
gcc Semaphore_and_Monitor.c -o semaphore_and_monitor -pthread
./semaphore_and_monitor
```

These examples use POSIX threads and/or semaphores and should be compiled in Linux or WSL with GCC.
