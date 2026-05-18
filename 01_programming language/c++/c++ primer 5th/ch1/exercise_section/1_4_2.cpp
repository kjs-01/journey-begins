#include <iostream>

// Exercise 1.12 : What does the following for loop do? What is final value of sum?
// int main() {
//     int sum = 0;
//     for (int i = -100; i <= 100; ++i)
//         sum += i;
//     std::cout << sum << std::endl;
//     return 0;
// }
// Answer of Exercise 1.12 : -100 부터 100 더하기, 최종 sum 값은 0

// Exercise 1.13 : Rewrite the exercise from section 1.4.1 using for loop
// Exercise 1.9 while -> for loop
// int main(){
//     int sum = 0;
//     for(int val = 50; val <= 100; ++val)
//         sum += val;
//     std::cout << sum << std::endl;
//     return 0;
// }

// Exercise 1.10 while -> for loop
// int main()
// {
//     for(int val = 10; val >= 0; --val)
//         std::cout << val << std::endl;
//     return 0;
// }

// Exercise 1.11 while -> for loop
// int main(){
//     int val1 = 0 , val2 = 0;
//     std::cout << "Enter two integers : ";
//     std::cin >> val1 >> val2;
//     for( ; val1 < val2; ++val1)
//         std::cout << val1 << std::endl;
    
//     for( ; val1 > val2; --val1)
//         std::cout << val1 << std::endl;
    
//     std::cout << val1 << std::endl;
//     return 0;
// }

// Exercise 1.14 : Compare and contrast the loops that used a for with those using a while.
// Are there advantages or disadvantages to using either form?
// Answer for Exercise 1.14 : for는 '횟수'에 집중, while은 '조건'에 집중.

// Exercise 1.15 : Familiarize yourself with the message the compiler generates
int main()
{
    std::cout << "Read each file" << std::endl:
    // 1_4_2.cpp : 53 : 47 : error : expected ';' after expression 
    // 53 | std::cout << "Read each file" << std::endl : 
    //    |                                            ^
    //    |                                            ;
    // 1 error generated.

    std::cout << Update master. << std::endl;
    // error : use of undeclared identifier 'Update' and 'master' -- q1
    // error : expected unqualified-id (<<) -- q2
    // Update와 master를 변수 이름이라 인식. '.'은 클래스나 구조체의 멤버에 접근할 때 사용하는 연산자. -- a1
    // 따라서 << 연산자가 나올 위치가 아니라 생각해서 에러 발생 -- a2

    std::cout << "Write new master." std::endl;
    // 1_4_2.cpp : 64 : 37 : error : expected ';' after expression 
    // 64 | std::cout << "Write new master." std::endl;
    //    |                                 ^ 
    //    |                                 ;

    // 큰 따움표("") 뒤에 연산자 또는 세미콜론(;)이 존재하지 않아서 에러 발생

    // 1_4_2.cpp : 64 : 38 : error : reference to overloaded function could not be resolved;
    // did you mean to call it ?
    // 64 | std::cout << "Write new master." std::endl;
    //    |                                  ^~~~~~~~~

    // std::cout 에는 데이터를 보낼 때 마다 << 연산자를 사용해줘야 함.
}