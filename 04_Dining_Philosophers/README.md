# Dining Philosophers & Shared Resources

This folder contains C examples for dining philosophers & shared resources, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Dining_Philosophers.c`

**What it demonstrates:** Uses semaphores to coordinate four train threads requesting pairs of adjacent rail segments. The code orders resource acquisition to avoid circular wait.

**Use case:** Illustrates the same shared-resource coordination issues as the dining-philosophers problem, using train routes and rail segments as the scenario.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Dining_Philosophers.c`

```bash
gcc Dining_Philosophers.c -o dining_philosophers -pthread
./dining_philosophers
```

These examples use POSIX threads and/or semaphores and should be compiled in Linux or WSL with GCC.
