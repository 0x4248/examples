/**
 * @file write_to_file.cpp
 * @brief Write to File in C++
 * @details This program demonstrates how to write to a file in C++.
 * @github: https://www.github.com/0x4248/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <fstream>
#include <iostream>

int main() {
    std::ofstream file("output.txt");

    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    file << "Hello, World!" << std::endl;
    file.close();

    return 0;
}
