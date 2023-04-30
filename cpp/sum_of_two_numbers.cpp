/**
 * @file sum_of_two_numbers.cpp
 * @brief Sum of Two Numbers in C++
 * @details This program adds two numbers and prints the result to the console.
 * @github: https://www.github.com/awesomelewis2007/examples
 */

#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int sum = num1 + num2;

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}