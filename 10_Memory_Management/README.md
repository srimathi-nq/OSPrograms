# Memory Management

This folder contains C examples for memory management, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Best_Fit_Memory_Allocation.c`

**What it demonstrates:** Allocates each sample camera-buffer request to the smallest available memory block that can fit it.

**Use case:** Demonstrates Best Fit allocation and the remaining size of each memory block.

### `Worst_Fit_Memory_Allocation.c`

**What it demonstrates:** Allocates each sample camera-buffer request to the largest available memory block that can fit it.

**Use case:** Demonstrates Worst Fit allocation and how the selected block changes after each request.

### `Best_Worst_Fit_Comparison.c`

**What it demonstrates:** Runs Best Fit and Worst Fit against the same sample memory blocks and requests, reporting successes and failures.

**Use case:** Allows a direct comparison of two allocation policies for CCTV/camera buffer memory.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Best_Fit_Memory_Allocation.c`

```bash
gcc Best_Fit_Memory_Allocation.c -o best_fit_memory_allocation
./best_fit_memory_allocation
```

### `Worst_Fit_Memory_Allocation.c`

```bash
gcc Worst_Fit_Memory_Allocation.c -o worst_fit_memory_allocation
./worst_fit_memory_allocation
```

### `Best_Worst_Fit_Comparison.c`

```bash
gcc Best_Worst_Fit_Comparison.c -o best_worst_fit_comparison
./best_worst_fit_comparison
```
