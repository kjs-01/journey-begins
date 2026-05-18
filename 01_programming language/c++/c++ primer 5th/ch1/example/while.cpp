#include <iostream>

/**
 * while (condition) 
 *      statement
 * 
 */
// int main()
// {
//     int sum = 0, val = 1;
//     // keep executing the while as long as val is less than or equal to 10
//     while (val <= 10) {
//         sum += val;
//         ++val;
//     }
//     std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
//     return 0;
// }

int main()
{
    int sum = 0, value = 0;
    // read until eof(end-of-file), calculating a running total of all values read
    while (std::cin >> value)
        sum += value; // equivalent to sum = sum + value
    std::cout << "Sum is: " << sum << std::endl;
    return 0;
}
// 조건문(condition)이 끝나지 않는다.
// istream(std::cin) 이 조건문에 사용되면 while문은 stream을 테스트한다.
// std::cin 은 에러를 만나지 않는 이상 반복문은 계속 실행된다.