#include <stdio.h>
#include <stdlib.h>
// #include "common.h"

volatile int counter = 0;
int loops;

void *worker(void *arg) {
    int i;
    for(i = 0; i < loops; i++) {
        counter++;
    }
    return NULL;
}
// ...

int main(int argc, char* argv[]) {
    if(argc != 2) {
        fprintf(stderr, "usage: threads <value>\n");
        exit(1);
    }
    loops = atoi(argv[1]);
    pthread_t p1, p2;
    printf("Initial value : %d\n", counter);

    Pthread_create(&p1, NULL, worker, NULL);
    Pthread_create(&p2, NULL, worker, NULL);
    Pthread_join(&p1, NULL);
    Pthread_join(&p2, NULL);
    printf("Final value : %d\n", counter);
    return 0;
}

// 여기서 병행성(Concurrency) 문제가 생긴다. 두 스레드가 동시에 메모리에 접근하지 못하게 막는
// Mutex나 Lock의 개념이 필요하다.

