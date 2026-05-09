int main(void) {
    char cmdline[MAXLINE];
    char *argv[MAXARGS];
    pid_t pid;
    int satus;
    while (getcmd(cmdline, sizeof(buf)) >= 0 ) {
        parsecmd(cmdline, argv);
        if(!builtin_command(argv)) {
            if((pid = fork()) == 0) {
                if(execv(argv[0], argv) < 0) { // 여기서 exec()이 됐고 리턴값에 따라 값이 바뀜
                    printf("%s: command not found\n", argv[0]);
                    exit(0);
                } 
            }
            waitpid(pid, &status, 0);
        }
    }
}