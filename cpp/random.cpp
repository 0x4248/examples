/**
 * @file random.cpp
 * @brief Random number generator in C++
 * @details This is a simple random number generator in C++.
 * @github: https://www.github.com/awesomelewis2007/examples
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << rand() % 50 << " ";
    }
    std::cout << std::endl;
    return 0;
}