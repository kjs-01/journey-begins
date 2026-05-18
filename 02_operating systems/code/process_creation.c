#include <stdio.h>

int main(){
    pid_t pid;
    /*fork another process*/

    pid = fork();
    if(pid < 0) {
        fprintf(stsderr, "Fork error ...\n");
        exit(-1);
    }
    else if(pid ==0) { /* child process */
        execlp("/bin/ls", "ls", NULL);
    }
    else { /* parent process */
        wait(NULL);
        printf("Child Completed ...\n");
        exit(0);
    }
}