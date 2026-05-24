## 3.Objects, Tyeps, and Values
### 3.1 Input
프로그램이 무언가를 읽기 위해서는 읽을 것이 필요하고, 이는 컴퓨터 메모리의 어딘가에 있어야 한다. 그 장소를 객체라고 부른다.

객체(object)는 어떤 종류의 정보가 저장될 수 있는지를 결정해주는 타입(자료형)이 지정된 **메모리 영역을** 의미한다. 이름이 지정된 객체를 변수(variables)라고 한다.

정의(definition): 프로그램에서 변수(이름이 부여된 객체)를 위해 메모리를 할당하는 문장을 정의라고 부른다.

Enter(New line)은 문자열의 일부가 아니며 메모리에 저장되지 않는다.

### 3.2 Variables
변수에 저장한 데이터를 값(value)라고 한다. 변수는 이름이 붙여진 객체고, 객체는 자료형이 명시된 메모리 영역이다.

변수를 정의할 때 초기값을 설정할 수 있다.

맞지 않는 자료형의 데이터를 부여할 떄 컴파일은 에러를 발생한다.

**소수를 float가 아니라 double로 부르는 이유**는 부동 소수점이라는 실수라는 수학적 개념에 대한 컴퓨터의 근사값을 줄여 부르는 것이다. 이중 정밀 부동소수점(double-precision floating point)을 줄여서 double이라 부른다.

- char: individual character enclosed in single quotes
- string: a sequence of characters delimited by double quotes
enclosed는 단일한 데이터 하나를 감싸고 있다에 초점을 맞추고 있고, string의 경우 길이가 변할 수 있는 데이터 묶음의 시작과 끝 경계를 다른 코드와 구분 지어준다는 점에 초점을 맞춰서 표현하는 단어가 다르다. (가변에 초점을 두었다.)

### 3.3 Input and type
input operation >>("get from")는  자료형에 민감하다.

string을 읽을 때 space, newline, tab을 읽으면 종료된다. 이를 whitespace라고 부른다.

### 3.4 Operations and operators
문자열에서 + 는 concatenation, ==, <, > 비교는 알파벳 사전 비교이다.

### 3.5 Assignment and Initialize
### 3.5.1 An example: detect repreated word
### 3.6 Composition assignment operators
a oper=b means a = a oper b

### 3.6.1 An example: find repeated words
### 3.7 Names