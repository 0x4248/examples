/**
 * @file bubble_sort.c
 * @brief Program to sort an array using bubble sort
 * @details This program sorts an array using bubble sort.
 * @github: https://www.github.com/awesomelewis2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <stdio.h>

/**
 * @function: bubble_sort
 * @brief Sorts an array using bubble sort
 * @param arr The array to be sorted
 * @param n The size of the array
 * @return void
 */
void bubble_sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, n);
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}