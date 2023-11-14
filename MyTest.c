#include <stdio.h>
#include "MyThread.h"

void* threadFunction(void* arg) {
    int* threadID = (int*)arg;
    printf("Thread %d is running.\n", *threadID);
    return NULL;
}

int main() {
    int threadID1 = create((void (*)(void))threadFunction);
    int threadID2 = createWithArgs((void* (*)(void*))threadFunction, (void*)&threadID2);

    start();

    run(threadID1);
    sleep1(2);
    suspend(threadID1);
    resume(threadID1);

    run(threadID2);

    clean();

    return 0;
}
