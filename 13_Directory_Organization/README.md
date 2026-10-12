# Directory Organization

This folder contains C examples for directory organization, with a brief description and practical use case for each program.

## Programs and Use Cases

### `Single_Level_Directory.c`

**What it demonstrates:** Creates a common records directory and appends a sample EV-station maintenance record to one shared file, then displays stored records.

**Use case:** Illustrates the single-level idea: records are collected in one common location rather than in per-station subdirectories.

### `Two_Level_Directory.c`

**What it demonstrates:** Creates a top-level records directory and a subdirectory for a station ID, then writes and displays that station’s maintenance record.

**Use case:** Illustrates grouping files by station in separate subdirectories, as in a two-level directory structure.

## Compile and Run

Run these commands from this folder in Linux or WSL. Compile each source file separately because each has its own `main()` function.

### `Single_Level_Directory.c`

```bash
gcc Single_Level_Directory.c -o single_level_directory
./single_level_directory
```

### `Two_Level_Directory.c`

```bash
gcc Two_Level_Directory.c -o two_level_directory
./two_level_directory
```
