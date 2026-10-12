# Operating Systems — Mini Projects

Processes • Threads • Synchronization • Deadlocks • Scheduling

A collection of Operating Systems concepts implemented in C through practical, real-world scenarios.

## About

This repository explores core Operating Systems concepts through small C programs built around familiar scenarios. The examples show how processes and threads work together, how shared resources are protected, how deadlocks can occur, and how scheduling and memory policies influence system behavior.

## Concepts & Use Cases

| # | Concept | Use Case |
|---|---|---|
| 01 | Multithreading & Multiprocessing | Student Result Processing |
| 02 | Mutual Exclusion | College Computer Lab Management |
| 03 | Reader-Writer Problem | Flight Status and Seating Board |
| 04 | Dining Philosophers | Shared Resource Coordination |
| 05 | Deadlocks & Avoidance | Parking-Lane Coordination |
| 06 | CPU Scheduling | College Printing Queue |
| 07 | Priority & Round Robin | Hostel Laundry Scheduler |
| 08 | FIFO Page Replacement | Product Cache and Request Queues |
| 09 | LRU & LFU Page Replacement | Cache Replacement Strategies |
| 10 | Memory Management | Camera Buffer Allocation |
| 11 | Disk Scheduling | Retail Billing and Transaction Logs |
| 12 | File Allocation | Sequential and Indexed Storage |
| 13 | Directory Organization | Maintenance Record Archive |

## Core Topics

```text
PROCESSES & THREADS
        ↓
MULTITHREADING
        ↓
SYNCHRONIZATION
        ↓
RESOURCE MANAGEMENT
        ↓
DEADLOCKS
        ↓
CPU SCHEDULING
        ↓
MEMORY & PAGE REPLACEMENT
        ↓
DISK SCHEDULING & FILE ORGANIZATION
```

## Multithreading & Multiprocessing

Creating concurrent threads and exploring processor affinity while processing separate sets of student data.

## Mutual Exclusion

Using mutexes, semaphores and monitor-style locking to coordinate access to a shared resource.

## Reader-Writer Problem

Allowing concurrent read access while ensuring updates are performed with exclusive write access.

## Dining Philosophers

Exploring how multiple participants coordinate access to limited shared resources without conflicting resource use.

## Deadlocks

Demonstrating resource conflicts and a consistent-order approach to avoiding a deadlock scenario.

## CPU Scheduling

Implementing scheduling approaches such as First-Come, First-Served (FCFS) and Shortest Job First (SJF).

## Priority & Round Robin

Exploring priority-based scheduling and time-sliced execution of competing tasks.

## FIFO Page Replacement

Demonstrating FIFO replacement behavior, page faults and request queues.

## LRU & LFU Page Replacement

Comparing Least Recently Used (LRU) and Least Frequently Used (LFU) replacement strategies.

## Memory Management

Comparing Best Fit and Worst Fit methods for assigning memory blocks to requests.

## Disk Scheduling

Exploring FCFS, SSTF, SCAN, C-SCAN and LOOK strategies for ordering disk requests.

## File Allocation

Representing sequential and indexed allocation methods for organizing file storage.

## Directory Organization

Representing single-level and two-level directory structures.

## Tech Stack

- C
- POSIX Threads
- Semaphores
- Mutexes
- GCC
- Linux / Ubuntu / WSL
- Git & GitHub

## Repository Structure

```text
operating-systems-mini-projects/
├── 01_Multithreading_Multiprocessing/
├── 02_Mutual_Exclusion/
├── 03_Reader_Writer/
├── 04_Dining_Philosophers/
├── 05_Deadlocks/
├── 06_CPU_Scheduling/
├── 07_Priority_Round_Robin/
├── 08_FIFO_Page_Replacement/
├── 09_LRU_LFU_Page_Replacement/
├── 10_Memory_Management/
├── 11_Disk_Scheduling/
├── 12_File_Allocation/
├── 13_Directory_Organization/
├── README.md
├── LICENSE
└── .gitignore
```

Each topic folder contains its own README with a description, list of programs, and basic compile commands. Compile each C file separately because each source file has its own `main()` function.

## Running the Programs

Clone the repository:

```bash
git clone https://github.com/srimathi-nq/operating-systems-mini-projects.git
cd operating-systems-mini-projects
```

Move into the topic folder that contains the program you want to run. For example:

```bash
cd 06_CPU_Scheduling
gcc FCFS_Scheduling.c -o fcfs
./fcfs
```

For programs that use POSIX threads:

```bash
cd ../01_Multithreading_Multiprocessing
gcc Single_Processor_Multithreading.c -o multithreading -pthread
./multithreading
```

Use the compile command shown in the relevant topic README. Linux or WSL is recommended for programs that use POSIX threads, semaphores or CPU-affinity APIs.

## Purpose

The aim is to connect Operating Systems theory with practical scenarios and make the behavior of processes, threads, synchronization, resource allocation, and scheduling easier to explore.

The examples are intended for learning and experimentation. Review the source code and test its behavior with suitable inputs before relying on its output.

Built with C • Threads • Synchronization • Scheduling
