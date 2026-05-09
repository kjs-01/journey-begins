#include <stdio.h> // 입출력
#include <stdlib.h> // 프로그램을 강제종료 시키는 exit() 같은 함수
#include <sys/time.h> // 시간 관련 시스템 호출(sys call) -> 이후 Spin(1)함수가 정확히 1초를 세기 위해 필요한 헤더파일
#include <assert.h> // 디버깅용 라이브러리, 예제 코드들의 안정성을 위해 존재
// #include "common.h" -> include 이후 " "에 들어있는 헤더 파일은 같은 디렉토리에 저장되어 있다는 뜻.

int main(int argc, char *argv []) {// 터미널에 %./cpu A 라고 입력하면 argc = 2, argv[0] = './cpu', argv[1] = A가 된다.
    if(argc != 2) { // 터미널에 입력한 단어가 2개가 아닐 경우 에러 메시지를 출력하고 강제 종료
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }

    char *str = argv[1]; // 입력한 두 번째 단어를 str이라는 문자열 포인터 변수에 저장.

    while(1) {
        Spin(1); // 1초 동안 CPU를 혹사시키는 명령어, 운영체제가 프로세스로 부터 CPU 점유를 어떻게 뺏고 스케줄링 하는지 관찰하기 위한 함수
        printf("%s\n", str); // 1초가 지나면 다시 이 프로세스가 점유하여 str 출력하고 줄바꿈
    }
    return 0;
}
