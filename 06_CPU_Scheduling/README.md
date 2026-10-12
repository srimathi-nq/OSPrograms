# CPU Scheduling

This folder contains C examples for cpu scheduling, with a brief description and practical use case for each program.

## Programs and Use Cases

### `FCFS_Scheduling.c`

**What it demonstrates:** Processes a fixed set of jobs in arrival order and prints each job’s waiting time, turnaround time, and the averages.

**Use case:** Models a simple first-come, first-served queue such as print jobs waiting to run.

### `SJF_Scheduling.c`

**What it demonstrates:** Sorts the fixed set of jobs by burst length and calculates waiting and turnaround times in that order.

**Use case:** Demonstrates how shortest-job-first scheduling changes job order and waiting times.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `FCFS_Scheduling.c`

```bash
gcc FCFS_Scheduling.c -o fcfs_scheduling
./fcfs_scheduling
```

### `SJF_Scheduling.c`

```bash
gcc SJF_Scheduling.c -o sjf_scheduling
./sjf_scheduling
```
