# Priority & Round Robin Scheduling

This folder contains C examples for priority & round robin scheduling, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Priority_Scheduling.c`

**What it demonstrates:** Orders the sample processes by priority and reports completion, waiting, and turnaround times.

**Use case:** Models systems where more urgent jobs are scheduled before lower-priority jobs.

### `Round_Robin_Scheduling.c`

**What it demonstrates:** Runs sample processes in turns using a fixed time quantum and reports completion, waiting, and turnaround times.

**Use case:** Models time-sharing systems where each ready task receives a limited CPU time slice.

### `Priority_Round_Robin_Scheduling.c`

**What it demonstrates:** Combines priority levels with time-sliced execution for the high-priority processes before processing the lower-priority process.

**Use case:** Illustrates a hybrid scheduler for workloads that need priority differentiation while sharing CPU time.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Priority_Scheduling.c`

```bash
gcc Priority_Scheduling.c -o priority_scheduling
./priority_scheduling
```

### `Round_Robin_Scheduling.c`

```bash
gcc Round_Robin_Scheduling.c -o round_robin_scheduling
./round_robin_scheduling
```

### `Priority_Round_Robin_Scheduling.c`

```bash
gcc Priority_Round_Robin_Scheduling.c -o priority_round_robin_scheduling
./priority_round_robin_scheduling
```
