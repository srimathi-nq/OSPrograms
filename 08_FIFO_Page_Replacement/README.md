# FIFO Page Replacement

This folder contains C examples for fifo page replacement, with a brief description and practical use case for each program.

## Programs and Use Cases

### `FIFO_Page_Replacement_Hits_Faults.c`

**What it demonstrates:** Processes a fixed page/reference sequence using FIFO replacement and counts cache hits and page faults.

**Use case:** Demonstrates how FIFO page replacement behaves when memory frames are limited.

### `FIFO_Warehouse_Request_Queue.c`

**What it demonstrates:** Processes warehouse requests in the order they arrive and prints each request as processed.

**Use case:** Shows the first-in, first-out queue principle using warehouse orders; it is a queue demonstration rather than a page-table simulation.

### `Product_Cache_Page_Fault.c`

**What it demonstrates:** Simulates product names in a small cache and reports whether each request is a hit or a page fault.

**Use case:** Models a product lookup cache where requested items may already be cached or need to be loaded.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `FIFO_Page_Replacement_Hits_Faults.c`

```bash
gcc FIFO_Page_Replacement_Hits_Faults.c -o fifo_page_replacement_hits_faults
./fifo_page_replacement_hits_faults
```

### `FIFO_Warehouse_Request_Queue.c`

```bash
gcc FIFO_Warehouse_Request_Queue.c -o fifo_warehouse_request_queue
./fifo_warehouse_request_queue
```

### `Product_Cache_Page_Fault.c`

```bash
gcc Product_Cache_Page_Fault.c -o product_cache_page_fault
./product_cache_page_fault
```
