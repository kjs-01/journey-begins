### Problem 1: Restricted Operation
기존에는 쭈루루룩 메모리 할당, 프로그램 실행 끝.

Limited direction Execution protocol의 경우
레지스터를 커널 스택에 저장, 커널 모드로 진입, 트랩 핸들러로 이동
trap : user mode -> kernel mode
커널 스택으로부터 레지스터에 저장, 유저 모드로 이동, 트랩 이후 PC 이동
main trap으로 부터 리턴값을 받음(via exit)
프로세스의 메모리 해제, 프로세스 리스트로 부터 제거


- User mode: Applications do not have full access to hardware resources
- Kernel mode: The OS has access to the full resources of the machine

직접 실행 프로토콜 -> 제한된 직접 실행 프로토콜

### Problem 2: Switching Between Processes
