# Deadlocks & Avoidance

This folder contains C examples for deadlocks & avoidance, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Deadlock_Demonstration.c`

**What it demonstrates:** Creates two vehicle threads that each acquire one lane semaphore and then wait for the other lane, demonstrating circular wait.

**Use case:** Shows how processes can become stuck when each holds a resource the other needs. This is intentionally a deadlock demonstration.

### `Deadlock_Avoidance.c`

**What it demonstrates:** Makes both vehicle threads acquire lane semaphores in the same order, then release them after entering the parking area.

**Use case:** Illustrates a simple strategy for preventing circular wait by enforcing a consistent resource-acquisition order.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Deadlock_Demonstration.c`

```bash
gcc Deadlock_Demonstration.c -o deadlock_demonstration -pthread
./deadlock_demonstration
```

### `Deadlock_Avoidance.c`

```bash
gcc Deadlock_Avoidance.c -o deadlock_avoidance -pthread
./deadlock_avoidance
```

These examples use POSIX threads and/or semaphores and should be compiled in Linux or WSL with GCC.
