#include <iostream>
// Exercise 1.7 : Compile a program that has incorrectly nested comments

// /**
//  * this is incorrectly nested comments
//  *  /* hello, world */
//  *
//  */
// int main()
// {
//     return 0;
// }

// Exercise 1.8 : Indicate which, if any, of the following output statements are legal
int main()
{
    std::cout << "/*";
    std::cout << "*/";
    // std::cout << /* "*/" */; instead next(lower) line
    std::cout << /* "*/" */";
    std::cout << /*  "*/" /* "/*" */;

    return 0;
}
// Answer of Exercise 1.8 : comments pair 로 인해서 double-quotes의 시작 부분이 사라졌다.