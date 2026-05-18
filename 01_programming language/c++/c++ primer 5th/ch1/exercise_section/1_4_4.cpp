// Exercise 1.17: What happens in the program presented in this section 
// if the input values are all equal? What if there are no duplicated values?

// 대략적인 로직 (pseudo-code)
// if (cin >> currVal) {
//     int cnt = 1;
//     while (cin >> val) {
//         if (val == currVal)
//             ++cnt;
//         else {
//             cout << currVal << " occurs " << cnt << " times" << endl;
//             currVal = val;
//             cnt = 1;
//         }
//     }
//     cout << currVal << " occurs " << cnt << " times" << endl;
// }

// Answer 1 for Exercise 1.17 : 에러 값이 입력될 때 까지 루프는 무한 반복. EOF 의 경우에는 입력값 수가 출력
// Answer 2 for Exercise 1.17 : "occurs 1 times" 반복

// Exercise 1.18: Compile and run the program from this section giving it only
// equal values as input. Run it again giving it values in which no number is repeated.

// 이건 위의 질문과 사실상 같은 결과

// Exercise 1.19: Revise the program you wrote for the exercises in § 1.4.1 (p.
// 13) that printed a range of numbers so that it handles input in which the first
// number is smaller than the second.

#include <iostream>
int main()
{
    // currVal is the number we're counting: we'll read new values into val
    int currVal = 0, val = 0;
    // read first number and ensure that we have data to process
    if (std::cin >> currVal)
    {
        while (std::cin >> val) {                    
            std::cout << "The smaller number starts here!" << std::endl;
            while(currVal < val){
                std::cout << currVal << std::endl;
                ++currVal;
            }
            std::cout << currVal << std::endl << "The larger number ends here!" << std::endl;
        } // while loop ends here
        // remember to print the count for the last value in the file
        std::cout << currVal << " occurs "
                  << " times" << std::endl;
    } // outermost if statement ends here
    return 0;
}