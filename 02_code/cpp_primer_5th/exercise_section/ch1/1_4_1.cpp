#include <iostream>
// Exercise 1.9 : Write a program that uses a while to sum the numbers from 50 to 100
// int main()
// {
//     int sum = 0, val = 50;
//     while(val <= 100) {
//         sum += val;
//         ++val;
//     }
//     std::cout << sum << std::endl;
//     return 0;
// }

// Exercise 1.10 : Use the decrement operator (--) to write a while that prints the numbers from ten down to zero
// int main()
// {
//     int val = 10;
//     while (val >= 0) {
//         std::cout << val << std::endl;
//         --val;
//     }
//     return 0;
// }

// Exercise 1.11 : Prompts the use for two integers. Print each number in the range specified by those two integers
int main()
{
    int val1 = 0, val2 = 0;
    std::cout << "Enter two intergers : ";
    std::cin >> val1 >> val2;
    
    while (val1 < val2) {
        std::cout << val1 << std::endl;
        ++val1;
    }
    while (val1 > val2) {
        std::cout << val1 << std::endl;
        --val1;
    }
    std::cout << val1 << std::endl;
    return 0;
}