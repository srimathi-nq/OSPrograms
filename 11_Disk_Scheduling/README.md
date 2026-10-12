# Disk Scheduling

This folder contains C examples for disk scheduling, with a brief description and practical use case for each program.

## Programs and Use Cases

### `FCFS_Disk_Scheduling.c`

**What it demonstrates:** Services disk-cylinder requests in the order provided and calculates total head movement.

**Use case:** Models a simple storage device serving I/O requests in arrival order.

### `SSTF_Disk_Scheduling.c`

**What it demonstrates:** Chooses the pending request nearest to the current disk head and calculates total movement.

**Use case:** Demonstrates Shortest Seek Time First scheduling to reduce head travel in the sample workload.

### `SCAN_Disk_Scheduling.c`

**What it demonstrates:** Services requests in one direction toward the end cylinder, then reverses direction to serve remaining requests.

**Use case:** Models the elevator-style disk scheduling strategy.

### `C_SCAN_Disk_Scheduling.c`

**What it demonstrates:** Services requests in one direction to the disk boundary, then wraps to the beginning before continuing.

**Use case:** Demonstrates Circular SCAN and its wrap-around behavior.

### `LOOK_Disk_Scheduling.c`

**What it demonstrates:** Services requests in one direction and reverses at the last pending request instead of travelling to the physical disk boundary.

**Use case:** Demonstrates LOOK scheduling and how it can avoid unnecessary head travel.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `FCFS_Disk_Scheduling.c`

```bash
gcc FCFS_Disk_Scheduling.c -o fcfs_disk_scheduling
./fcfs_disk_scheduling
```

### `SSTF_Disk_Scheduling.c`

```bash
gcc SSTF_Disk_Scheduling.c -o sstf_disk_scheduling
./sstf_disk_scheduling
```

### `SCAN_Disk_Scheduling.c`

```bash
gcc SCAN_Disk_Scheduling.c -o scan_disk_scheduling
./scan_disk_scheduling
```

### `C_SCAN_Disk_Scheduling.c`

```bash
gcc C_SCAN_Disk_Scheduling.c -o c_scan_disk_scheduling
./c_scan_disk_scheduling
```

### `LOOK_Disk_Scheduling.c`

```bash
gcc LOOK_Disk_Scheduling.c -o look_disk_scheduling
./look_disk_scheduling
```

For the disk-scheduling programs, enter the request count, initial head position, and then the requested cylinder numbers when prompted (or enter them on standard input if the program does not print prompts).
