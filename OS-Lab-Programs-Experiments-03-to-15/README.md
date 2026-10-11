# Operating Systems Lab Programs — Experiments 3–15

Subject: 21CSC202J — Operating Systems Lab  
Language: C  
Scope: Experiments 3 through 15 only. Experiments 1 and 2 are intentionally excluded.

Each experiment is in its own folder, and each manual subpart is a separate `.c` file. The source code was extracted from the uploaded lab manual and organized under descriptive filenames. All 31 files passed a GCC syntax-only check, but that does not confirm that every program’s logic or runtime output is correct.

## Experiments included

### Experiment-03-Multithreading
- `Experiment-03-Multithreading/3A_Single_Processor_Multithreading.c` — Single Processor Multithreading - Student Result Processing and Report Generation System
- `Experiment-03-Multithreading/3B_Multiprocessor_Multithreading.c` — Multiprocessor Multithreading - Student Result Processing and Report Generation System

### Experiment-04-Mutual-Exclusion
- `Experiment-04-Mutual-Exclusion/4A_Mutex_Mutual_Exclusion.c` — Mutual Exclusion using Mutex - College Computer Lab Management System
- `Experiment-04-Mutual-Exclusion/4B_Semaphore_Mutual_Exclusion.c` — Mutual Exclusion using Semaphore - College Computer Lab Management System
- `Experiment-04-Mutual-Exclusion/4C_Semaphore_and_Monitor.c` — Mutual Exclusion using Semaphore and Monitor - College Computer Lab Management System

### Experiment-05-Reader-Writer
- `Experiment-05-Reader-Writer/5_Reader_Writer_Problem.c` — Reader-Writer Problem - Live Flight Status and Seating Board System

### Experiment-06-Dining-Philosopher
- `Experiment-06-Dining-Philosopher/6_Dining_Philosopher_Problem.c` — Dining Philosopher Problem - Automated Railway Junction Dispatcher

### Experiment-07-Bankers-Deadlock-Avoidance
- `Experiment-07-Bankers-Deadlock-Avoidance/7A_Deadlock_Demonstration.c` — Deadlock Demonstration - Car Parking Deadlock
- `Experiment-07-Bankers-Deadlock-Avoidance/7B_Deadlock_Avoidance.c` — Deadlock Avoidance - Car Parking Deadlock Avoidance

### Experiment-08-FCFS-SJF-Scheduling
- `Experiment-08-FCFS-SJF-Scheduling/8A_FCFS_Scheduling.c` — First-Come, First-Served Scheduling - College Printing Queue
- `Experiment-08-FCFS-SJF-Scheduling/8B_SJF_Scheduling.c` — Shortest Job First Scheduling - College Printing Queue

### Experiment-09-Priority-Round-Robin-Scheduling
- `Experiment-09-Priority-Round-Robin-Scheduling/9A_Round_Robin_Scheduling.c` — Round Robin Scheduling - Hostel Laundry Machine Scheduler
- `Experiment-09-Priority-Round-Robin-Scheduling/9B_Priority_Scheduling.c` — Priority Scheduling - Hostel Laundry Machine Scheduler
- `Experiment-09-Priority-Round-Robin-Scheduling/9C_Priority_Round_Robin_Scheduling.c` — Priority Scheduling with Round Robin - Hostel Laundry Machine Scheduler

### Experiment-10-FIFO-Page-Replacement
- `Experiment-10-FIFO-Page-Replacement/10A_FIFO_Warehouse_Request_Queue.c` — FIFO Warehouse Product Request Queue
- `Experiment-10-FIFO-Page-Replacement/10B_Product_Cache_Page_Fault.c` — Product Cache Page Fault Demonstration
- `Experiment-10-FIFO-Page-Replacement/10C_FIFO_Page_Replacement_Hits_Faults.c` — FIFO Page Replacement with Hits and Faults

### Experiment-11-LRU-LFU-Page-Replacement
- `Experiment-11-LRU-LFU-Page-Replacement/11A_LRU_Page_Replacement.c` — LRU Page Replacement - SMART E-LIBRARY MEMORY MANAGER
- `Experiment-11-LRU-LFU-Page-Replacement/11B_LFU_Page_Replacement.c` — LFU Page Replacement - SMART E-LIBRARY MEMORY MANAGER

### Experiment-12-Best-Worst-Fit-Memory-Management
- `Experiment-12-Best-Worst-Fit-Memory-Management/12A_Best_Fit_Memory_Allocation.c` — Best Fit Memory Allocation - CCTV BufferFit
- `Experiment-12-Best-Worst-Fit-Memory-Management/12B_Worst_Fit_Memory_Allocation.c` — Worst Fit Memory Allocation - CCTV BufferFit
- `Experiment-12-Best-Worst-Fit-Memory-Management/12C_Best_Worst_Fit_Comparison.c` — Best Fit and Worst Fit Comparison - CCTV BufferFit

### Experiment-13-Disk-Scheduling
- `Experiment-13-Disk-Scheduling/13A_FCFS_Disk_Scheduling.c` — FCFS Disk Scheduling - Retail Billing and Transaction Log Scheduler
- `Experiment-13-Disk-Scheduling/13B_SSTF_Disk_Scheduling.c` — SSTF Disk Scheduling - Retail Billing and Transaction Log Scheduler
- `Experiment-13-Disk-Scheduling/13C_SCAN_Disk_Scheduling.c` — SCAN Disk Scheduling - Retail Billing and Transaction Log Scheduler
- `Experiment-13-Disk-Scheduling/13D_C_SCAN_Disk_Scheduling.c` — C-SCAN Disk Scheduling - Retail Billing and Transaction Log Scheduler
- `Experiment-13-Disk-Scheduling/13E_LOOK_Disk_Scheduling.c` — LOOK Disk Scheduling - Retail Billing and Transaction Log Scheduler

### Experiment-14-File-Allocation
- `Experiment-14-File-Allocation/14A_Sequential_File_Allocation.c` — Sequential File Allocation - ReceiptVault Retail Billing Archive
- `Experiment-14-File-Allocation/14B_Indexed_File_Allocation.c` — Indexed File Allocation - ReceiptVault Retail Billing Archive

### Experiment-15-Directory-Organization
- `Experiment-15-Directory-Organization/15A_Single_Level_Directory.c` — Single-Level Directory - EV Charging Station Maintenance Record System
- `Experiment-15-Directory-Organization/15B_Two_Level_Directory.c` — Two-Level Directory - EV Charging Station Maintenance Record System

## Notes

- Keep each subpart in its own source file because each program may define its own `main()` function.
- Do not upload generated executables such as `a.out` or `.exe` files unless your instructor requests them.
- Several programs use POSIX threads/semaphores or Linux-specific APIs. They are intended for a Linux/Ubuntu environment. Programs using pthreads generally need to be compiled with `-pthread`.
- This package organizes the code as shown in the manual; please test each program before submitting if your instructor requires working outputs.
