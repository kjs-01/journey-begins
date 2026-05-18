// Compile cpp file with prompt % g++ (source code) -> generate executable file named a.out

// Exercise 1.1 : Compile and run code
// int main()
// {
//     return 0;
// }


// Excercise 1.2 : Change the program to return -1;
int main()
{
    return -1;
}
/*
Nothing happened. Why?
터미널에서 컴파일하고 실행하면 아무런 일도 일어나지 않는 것 처럼 보인다.
하지만 echo $? 명령어를 통해서 종료 코드를 확인하면 255를 출력한다.
이는 프로그램이 운영체제에정상적이지 않은 이유로 종료되었다는 신호를 보냈다는 것을 의미한다.
*/
