#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <pthread.h>

typedef enum {
    READY,
    RUNNING,
    SUSPENDED,
    SLEEPING
} ThreadStatus;

struct ThreadControlBlock {
    pthread_t threadID;
    ThreadStatus status;
    // Add other relevant information as needed
};

struct statistics {
    int id;
    // Add other fields as needed
};

void initStatistics(struct statistics* stat, int id);
int create(void (*f)(void));
int createWithArgs(void* (*f)(void*), void* arg);
int getID(void);
void dispatch(int signalID);
void start(void);
void run(int threadID);
void suspend(int threadID);
void resume(int threadID);
void yield(void);
void deleteThread(int threadID);
void sleep1(int sec);
struct statistics* getStatus(int threadID);
void clean(void);
void JOIN(int threadID);
void* GetThreadResult(int threadID);

#endif  // MYTHREAD_H
