# Multithreading & Multiprocessing

This folder contains C examples for multithreading & multiprocessing, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Single_Processor_Multithreading.c`

**What it demonstrates:** Processes two students’ marks using separate POSIX threads, then displays each student’s total and average.

**Use case:** Useful as a small example of dividing independent work into threads within one program.

### `Multiprocessor_Multithreading.c`

**What it demonstrates:** Processes each student’s marks on a worker thread and requests CPU affinity for different cores. It also reports the CPU core observed by each thread.

**Use case:** Illustrates thread affinity and parallel task distribution on a Linux machine. CPU-affinity behavior depends on available cores and permissions.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Single_Processor_Multithreading.c`

```bash
gcc Single_Processor_Multithreading.c -o single_processor_multithreading -pthread
./single_processor_multithreading
```

### `Multiprocessor_Multithreading.c`

```bash
gcc Multiprocessor_Multithreading.c -o multiprocessor_multithreading -pthread
./multiprocessor_multithreading
```

These examples use POSIX threads and/or semaphores and should be compiled in Linux or WSL with GCC.
