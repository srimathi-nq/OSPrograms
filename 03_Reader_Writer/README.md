# Reader-Writer Problem

Allowing concurrent read access while ensuring updates are performed with exclusive write access.

## Programs

- `Reader_Writer_Problem.c`

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
