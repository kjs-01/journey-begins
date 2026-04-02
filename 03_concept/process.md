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

### Process Hierarchy
**Resource sharing modes**
- Parents and children share all resources
- Children shate a subset of parent's resources
- Parents and children share no resources

**Execution modes**
- Parent and children execute concurrently
- Parent waits until children terminate

**Address space modes**
- Child is a duplicate of the parent
- Child has a new program loaded into it

### Process Termination
**Normal exit (voluntary)**
- Process executes last statement and asks the operating system to delete it(via exit())
  - Output data from child to parent(via wait())
  - Process's resources are deallocated by the operating system
  
**Error exit(voluntary)**

**Fatal error(involuntary)**
- Segmentation error fault - illegal memory access
- Protection fault
- Exceed allocated resources, etc.

**Killed by another process (involuntary)**
- By receiving a signal

**The parent process may wait for termination of a child process by using the wait() system call**
`pid = wait(&status);`
- If parent did not invoke wait(), child process become a zombie process

### System call(Kernel -> User)
Allow the kernel to carefully expose certain key pieces of functionality to user program, such as
- Accessing the file system
- Creating and destroying processes
- Communicating with other processes
- Allocating more memory
**System-call number**
- 각 시스템 콜에 할당되어 있다.
- 유저 코드에는 원하는 시스템 콜 넘버를 레지스터에 placing 해야한다.

### Trap
- 트랩은 커널 모드로 진입 하는 것(hardware의 resource를 다 사용가능 
  한 것)
  - 권한 레벨을 높임
- Return-from-trap: Kernel -> User program
  -  권한 레벨을 낮춤
- 그래서 트랩이 OS에서 작동해야 하는 코드를 어떻게 구분하냐?
  - trap table
  - trap handler
