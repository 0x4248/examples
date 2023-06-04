/**
 * @file fibonacci_series.cpp
 * @brief Fibonacci Series in C++
 * @details This program prints the Fibonacci series up to a given number of
 * terms.
 * @github: https://www.github.com/awesomelewis2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int first = 0, second = 1;

    for (int i = 0; i < n; i++) {
        std::cout << first << " ";

        int temp = first;
        first = second;
        second = temp + second;
    }

    std::cout << std::endl;

    return 0;
}
