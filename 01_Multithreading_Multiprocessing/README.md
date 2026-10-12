# Multithreading & Multiprocessing

Creating concurrent threads and exploring processor affinity while processing separate sets of student data.

## Programs

- `Multiprocessor_Multithreading.c`
- `Single_Processor_Multithreading.c`

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
