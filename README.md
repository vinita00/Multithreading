# Multithreading

This is a simple thread library written in C that provides basic functionalities for thread management. The library supports creating, deleting, suspending, resuming, running, and sleeping threads. Additionally, it includes functions for yielding control, initializing statistics, and obtaining thread status.

## Getting Started

To use this thread library, follow these steps:

1. **Compile the Library:**
   ```bash
   gcc -c MyThread.c
   ```

2. **Compile Your Program:**
   ```bash
   gcc -c Yourprogram.c
   ```

3. **Link the Object Files:**
   ```bash
   gcc MyThread.o Yourprogram.o -o executable
   ```

4. **Run the Executable:**
   ```bash
   ./executable
   ```

Make sure to include the necessary headers, and note that this code has been tested on Ubuntu.

## Library Functions

- `int create(void (*f)(void))`: Create a thread without function arguments.
- `int createWithArgs(void* (*f)(void*), void* arg)`: Create a thread with function arguments.
- `int getID(void)`: Get the ID of the current thread.
- `void dispatch(int signalID)`: Scheduler function.
- `void start(void)`: Start executing threads.
- `void run(int threadID)`: Set thread status to RUNNING.
- `void suspend(int threadID)`: Set thread status to SUSPENDED.
- `void resume(int threadID)`: Set thread status to READY.
- `void yield(void)`: Yield control to the scheduler.
- `void initStatistics(struct statistics* stat, int id)`: Initialize thread statistics.
- `void deleteThread(int threadID)`: Delete a thread.
- `void sleep1(int sec)`: Put the thread to sleep.
- `struct statistics* getStatus(int threadID)`: Get thread statistics.
- `void clean(void)`: Stop the master thread.
- `void JOIN(int threadID)`: Bonus: Join a thread.
- `void* GetThreadResult(int threadID)`: Bonus: Get thread result.

## Dependencies

This code assumes the use of the pthread library for thread management.

Include `allstdlib.h` for commonly used standard headers and macros.

