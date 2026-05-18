// Exercise 1.16 : Write your own version of a program that prints
//                 the sum of a set of intergers read from cin
#include <iostream>

int main()
{
    int sum = 0, input = 0;

    for(int i = 0; i < 3; i++){
        std::cin >> input;
        sum += input;
    }

    std::cout << "Sum of 3 inputs is: " << sum << std::endl;
    return 0;
}