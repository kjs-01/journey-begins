## Process
프로세스란
- I/O-bound process : spend more time doing I/O than computations
- CPU-bound process : spend more time doing computations

프로그램을 프로세스로 나눠서 아래 5가지 주요 동작을 실행한다.
그 전에 필요한 사전 지식은 **argc**(argument count), **argv**(argument vector)로 둘다 main 함수의 매개변수이다.

- **argc**: `int` 타입. 메인 함수에 전달되는 정보의 개수(공백으로 구분된 인자 개수 + 1)를 의미<br>
- **argv** `char* argv[]` 또는 `char** argv`. 실제 전달된 문자열의 배열이다. 여기서 `argv[0]`: 프로그램 이름 또는 실행 경로.
`argv[1]~`: 사용자가 입력한 첫 번쨰, 두 번째 ... 인자.

### Process Creation
- 프로그램 코드를 메모리와 프로세스 주소 공간에 로드
- 프로그램의 런타임 스택 할당
  - local variables, function parameters, and return address
- 프로그램 heap 생성
  - 동적할당 `malloc()` and `free()` etc..
- OS는 초기화 작업함
  - I/O setup : file, monitor etc..
- `main()` 에서 프로그램 시작

### `fork()`
- 부모 프로세스(주소 공간 포함) 복제
- 자식 프로세스가 종료될 때 까지 기다리던지 병행해서 계속한다
- 쉘이나 GUI가 이 시스템 콜을 내부적으로 사용한다
- **리턴값**으로 부모는 자식의 pid를 반환, 자식은 0을 반환
  - 이를 분기점으로 활용
---
when implementing `fork()` 
- Creates and initializes a new **PCB**
- Creates and initializes a new **address space**
- Initializes the **address space** with a **copy** of the entire contents of the address space of the parent
- Initializes the **kernel resources** to point to the resources used by the parent
- Places the **PCB** on the ready queue
- Returns the **child's PID to the parent**, and **zero to the child**
### `exec()`
- 현재 프로세스 이미지를 새로운 프로그램으로 교체한다.
- 윈도우 : 프로세스 생성() = fork() + exec()
> 윈도우는 GUI 기반 OS 이다. MS-DOS는 텍스트 기반 OS이다.