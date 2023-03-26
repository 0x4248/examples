/**
 * @file read_file.cpp
 * @brief Read File in C++
 * @details This program demonstrates how to read from a file in C++.
 * @github: https://www.github.com/awesomelewis2007/examples
*/

#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("input.txt");

    if (!file) {
        std::cout << "Error opening file." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}
