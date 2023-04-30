/**
 * @file bubble_sort.cpp
 * @brief Program to sort an array using bubble sort
 * @details This program sorts an array using bubble sort.
 * @github: https://www.github.com/awesomelewis2007/examples
 */

#include <iostream>
#include <vector>

/**
 * @function: bubble_sort
 * @brief Sorts an array using bubble sort
 * @param arr - the array to be sorted
 * @return the sorted array
 */
std::vector<int> bubble_sort(std::vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    return arr;
}

int main() {
    std::vector<int> arr = {5, 4, 3, 2, 1};

    arr = bubble_sort(arr);

    for (std::vector<int>::size_type i = 0; i < arr.size(); i++) {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}