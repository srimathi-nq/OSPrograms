# FIFO Page Replacement

Demonstrating FIFO replacement behavior, page faults and request queues.

## Programs

- `FIFO_Page_Replacement_Hits_Faults.c`
- `FIFO_Warehouse_Request_Queue.c`
- `Product_Cache_Page_Fault.c`

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
