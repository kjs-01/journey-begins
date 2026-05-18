#include <iostream>

// Exercise 1.3 : Print Hello, World
// int main()
// {
//     std::cout << "Hello, World" << std::endl;
//     return 0;
// }

// /** reference code here!
//  * #include <iostream>
//  * int main()
//  * {
//  *    std::cout << "Enter two numbers: " << std::endl;
//  *    int v1 = 0, v2 = 0;
//  *    std::cin >> v1 >> v2;
//  *    std::cout << " The sum of " << v1 << " and " << v2
//  *    << " is " << v1 + v2 << std::endl;
//  *    return 0;
//  * }
//  **/

// Exercise 1.4 : Write the program use operator *(multiplication) instead +(add)
// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The multiplication of " << v1 << " and " << v2 
//     << " is " << v1 * v2 << std::endl;
//     return 0;
// }

// Exercise 1.5 : Rewrite the program to use a seperate statement
// int main()
// {
//     std::cout << "Enter two numbers: " << std::endl;
//     int v1 = 0, v2 = 0;
//     std::cin >> v1 >> v2;
//     std::cout << "The sum of ";
//     std::cout << v1;
//     std::cout << " and ";
//     std::cout << v2;
//     std::cout << " is ";
//     std::cout << v1 + v2;
//     std::cout << std::endl;
//     return 0;
// }

// Exercise 1.6 : Explain whether the following program fragment is legal.
int main()
{
    std::cout << "Enter two numbers: " << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << std::endl;
}

/*
1_2.cpp:58:15: error: expected expression
   58 |               << " and " << v2;
      |               ^
1_2.cpp:59:15: error: expected expression
   59 |               << " is " << v1 + v2 << std::endl;
      |               ^
2 errors generated.

위와 같은 2 errors가 발생한다.

<< 연산자는 left-hand operand 에 데이터를 보낼 대상이 있어야 한다.

문제 해결을 위한 
첫 번째 방법
- 첫 번째 줄과 두 번째 줄에 세미콜론(;) 제거

두 번째 방법
- 두 번째 줄과 세 번째 줄에 std::cout 객체를 명시하기
   - 위와 같은 방법이 가능한 이유는 std::cout << a;
     연산은 std::cout 객체를 반환하기 때문이다.(chaining)
*/