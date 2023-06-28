/**
 * @file random.cpp
 * @brief Random number generator in C++
 * @details This is a simple random number generator in C++.
 * @github: https://www.github.com/lewisevans2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    for (int i = 0; i < 5; i++) {
        std::cout << rand() % 50 << " ";
    }
    std::cout << std::endl;
    return 0;
}