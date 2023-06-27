/**
 * @file functions.cpp
 * @brief Functions in C++
 * @details This program demonstrates how to define and call functions in C++.
 * @github: https://www.github.com/lewisevans2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <iostream>

/**
 * @function: add
 * @brief Add two numbers
 * @details This function takes two integers as input and returns their sum.
 * @param a The first integer to be added.
 * @param b The second integer to be added.
 * @returns The sum of the two integers.
 */
int add(int a, int b) { return a + b; }

int main() {
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    int result = add(num1, num2);

    std::cout << "Result = " << result << std::endl;

    return 0;
}
