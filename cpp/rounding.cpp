/**
 * @file rounding.cpp
 * @brief Rounding numbers in C++
 * @details Turns a number form a float to an int, rounding up or down depending
 * on the decimal value.
 * @github: https://www.github.com/awesomelewis2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <iostream>

int main() {
    float a;
    int b;
    while (0 == 0) {
        std::cout << "Enter a number: ";
        std::cin >> a;
        b = a;
        if (a - b >= 0.5) {
            b++;
        }
        std::cout << "Rounded: " << b << std::endl;
    }
    return 0;
}