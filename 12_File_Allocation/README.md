# File Allocation

This folder contains C examples for file allocation, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Sequential_File_Allocation.c`

**What it demonstrates:** Accepts a starting block and size for each sample file, checks that the blocks are free and within range, and allocates consecutive blocks.

**Use case:** Demonstrates contiguous/sequential disk-block allocation for files.

### `Indexed_File_Allocation.c`

**What it demonstrates:** Assigns an index block to a file and records the data-block numbers allocated to that file.

**Use case:** Demonstrates indexed file allocation, in which an index block stores references to the file’s data blocks.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Sequential_File_Allocation.c`

```bash
gcc Sequential_File_Allocation.c -o sequential_file_allocation
./sequential_file_allocation
```

### `Indexed_File_Allocation.c`

```bash
gcc Indexed_File_Allocation.c -o indexed_file_allocation
./indexed_file_allocation
```
