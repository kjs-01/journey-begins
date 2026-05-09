## 01_Introduction to Operating Systems
primary component of an operating System
- Virtualization(가상화): 물리적 자원을 어떻게 관리하고 유저 프로그램에 제공하는가?
- Consistency(일관성): 여러 프로그램이 동시에 실행될 때 OS는 어떻게 일관성을 유지시키는가?
- Persistence(지속성): 데이터를 어떻게 저장소에 안전하게 유지시키느냐?

### A typical Intruction-Execution Cycle
- Load a program 
  - The CPU can load instructions only from memory, so any program to run must be stored in the memory
- Fetch an instructions
  - The processor fetches an instruction from memory
  - **Fetch(인출):** RAM(memory) -> CPU Register
- Decode the instruction
  - **Decode:** Figure out which instruction this is (Opcode, Operand)
  - **Opcode(연산 코드):** 어떤 연산을 수행할 지 결정(덧셈, 뺄셈, 데이터 이동, 분기)
  - **Operand(피연산자):** 그 연산에 필요한 데이터가 어디에 있는지 파악(레지스터 번호, 메모리 주소)
- Fetch operands
  - 연산에 필요한 피연산자가 CPU에 없다면 메모리로 부터 실제 데이터를 CPU 내부로 가져오는 과정
- Execute the instruction
  - **Execute:** 실제로 명령어를 수행(덧셈, 메모리 접근, 조건문 확인, 분기)
- Store the result(끝나면 다음 명령어로 이동)

> 디스크 -> 메모리(Load) -> CPU(Fetch)<br>
> CPU에서 코드를 해독(Decode: 각 명령어를 분석-> Opcode, Operand)하고 피연산자를 레저스터로 옮긴다.<br>
> 그 이후 명령어를 수행(Excute)하고 결과를 저장한다.

### 소드 코드부터 실행 파일까지
**컴파일**(소드 코드 -> 오브젝트 파일)<br>
**링킹**(오브젝트 파일 + 라이브러리 -> 실행 파일(바이너리))<br>
빌드(컴파일 + 링킹)

### Virtualization
물리적 자원을 가상의 형태로 전송한다
- 물리적 자원이란?: 프로세서, 메모리, 디스크 등등
- 가상화는 일반적이고, 강력하고, 사용하기 쉽다.
- 운영체제를 가상머신이라고 여기기도 한다.

### System call 
**시스템 콜**이란 유저가 OS에게 무엇을 할지 명령하는 것.<br>
OS는 인터페이스를 제공한다.(APIs, standard library)
- 프로그램을 실행하는 것
- 메모리에 접근하는 것
- 디바이스에 접근하는 것

### Operating System
운영체제(OS)는 사실상 리소스 매니저다. CPU, memory, disk
- 프로그램을 실행하는 것: CPU 공유
- 많은 프로그램이 동시에 자신의 명령어와 데이터에 접근하는 것: 메모리 공유
- 많은 프로그램이 디바이스에 접근하는 것: 디스크 공유

CPU를 가상화 한다는 것
- 단일 CPU가 무한 개의 CPU가 존재하는 것 처럼 작업한다.
- 다수의 프로그램이 한 번에 동작하는 것 처럼 보이게한다.

### CPU
- Core : 실제 연산이 이루어지는 공간, 과거에는 싱글 코어로 CPU = Core,
  - ALU(Arithmatic Logic Unit): 덧셈, 뺼셈, 비교하는 수학적/논리적 계산 수행
  - CU(Control Unit): Fetch, Decode 수행, ALU나 레지스터에게 전기 신호를 보내 명령
  - Register: CU가 지시를 내리기 전이나 후, ALU가 계산을 하기 위해 필요한 데이터나 명령어 자체를 임시 저장하고 있는 공간
- Thread: 운영체제가 밖에서 볼 때 일어하고 있다고 생각하는 코어 수

- Cache Memory : CPU(코어 내부)에 존재하며 L1, L2, L3 캐시 메모리가 존재한다. L1, L2는 코어 내부, L3는 CPU 칩 안에서 여러 코어가 사용하느 공용 메모리

CPU 내부 동작과정
1. CU이 메모리에서 'Add A and B' 라는 명령어를 가져와서 Register에 올려주고 해석한다.
2. CU이 메모리에 있는 데이터 A와 B를 가져와서(Fetch Operand) 각각 다른 레지스터에 저장한다.
3. CU가 ALU에게 지금 레지스터에 있는 두 값을 더하라고 신호를 보낸다.
4. ALU는 Register 두 곳에서 A와 B를 꺼내와 실제 덧셈을 수행한다.
5. ALU는 덧셈 결과를 비어있는 Register에 저장한다.

### Register vs Disk
레지스터는 전기가 통하는 논리 회로(트랜지스터)의 복잡한 조합으로 만들어진다.

반면에 디스크는 HDD, SSD로 나뉜다.
- HDD: 자석의 N과 S극을 이용해 쇳덩어리 원판에 물리적으로 기스를 내며 기록한다.
- SSD: 전자를 작은 방(셀)에 가둬두는 화학적/전기적 방식을 사용한다.

### CU, ALU
`int a = 5;`와 같이 단순한 상수 값 저장하는 명령어의 경우 메모리에서 CPU로 명령어를 올리고,
CPU의 제어 장치(CU)가 Decode해서 연산이 필요없다 라는 판단을 하면 ALU로 넘어가지 않고, 시스템 버스(주소 버스, 데이터 버스, 제어 버스-Write, Read etc)를 통해서 다이렉트로 저장된다.

### Paging
운영체제는 프로그램마다 Page Table을 가지고 있다. 

페이징이 필요한 이유? 운영체제는 여러 프로그램을 동시에 실행시키는 듯 보여야 하고, 메모리는 한정되어 있다. 하나의 프로그램을 메모리에서 연속으로 사용하지 않으므로 각 데이터는 메모리 이곳 저곳에 흩어져 저장되어 있고 이를 잇는게 Page Table이다.

메모리 공간을 가상화 시키기 위해 잘게 찢은 단위가 Page(주로 4KB)

하지만 물리 주소(실제 RAM에 있는 위치)를 Frame이라고 하고
page 0 -> frame 81
page 1 -> frame 15
page 2 -> frame 20
이런식으로 가상 주소가 물리 주소로 변환이 된다.
  