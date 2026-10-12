# Reader-Writer Problem

This folder contains C examples for reader-writer problem, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Reader_Writer_Problem.c`

**What it demonstrates:** Uses a POSIX read-write lock so traveler threads can read the available-seat count while an employee thread updates it exclusively.

**Use case:** Models a flight seating board or shared status page where multiple users read data and an authorized updater changes it.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Reader_Writer_Problem.c`

```bash
gcc Reader_Writer_Problem.c -o reader_writer_problem -pthread
./reader_writer_problem
```

These examples use POSIX threads and/or semaphores and should be compiled in Linux or WSL with GCC.
