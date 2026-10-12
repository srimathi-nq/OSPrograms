# Mutual Exclusion

Using mutexes, semaphores and monitor-style locking to coordinate access to a shared resource.

## Programs

- `Mutex_Mutual_Exclusion.c`
- `Semaphore_Mutual_Exclusion.c`
- `Semaphore_and_Monitor.c`

## Compile and Run

For a standard C program:

```bash
gcc program.c -o program
./program
```

For programs that use POSIX threads:

```bash
gcc program.c -o program -pthread
./program
```

Replace `program.c` with the source filename you want to run. Some programs require Linux or WSL. Compile each source file separately.
