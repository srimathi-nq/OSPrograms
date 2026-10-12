# LRU & LFU Page Replacement

This folder contains C examples for lru & lfu page replacement, with a brief description and practical use case for each program.

## Programs and Use Cases

### `LRU_Page_Replacement.c`

**What it demonstrates:** Simulates a reference sequence using Least Recently Used replacement and counts hits and faults.

**Use case:** Illustrates replacing the page that has gone unused for the longest time.

### `LFU_Page_Replacement.c`

**What it demonstrates:** Simulates a reference sequence using Least Frequently Used replacement, with recency used to break frequency ties, and counts hits and faults.

**Use case:** Illustrates replacing a page with a lower usage frequency when memory is full.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `LRU_Page_Replacement.c`

```bash
gcc LRU_Page_Replacement.c -o lru_page_replacement
./lru_page_replacement
```

### `LFU_Page_Replacement.c`

```bash
gcc LFU_Page_Replacement.c -o lfu_page_replacement
./lfu_page_replacement
```
