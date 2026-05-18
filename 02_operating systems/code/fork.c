#include <sys/types.h>
#include <unistd.h>
int main(){
    int pid; 
    if ((pid = fork()) == 0) { // fork()를 통해 생성된 정수가 0이면 본인이 자식 프로세스, 0보다 크면 부모 프로세스
        printf("Child of %d is %d", getppid(), getpid());
    }
    else {
        printf("I am %d, My child is %d", getpid(), pid);
    }
}