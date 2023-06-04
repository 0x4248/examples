/**
 * @file fibonacci_series.c
 * @brief Program to print the fibonacci series up to a given limit
 * @details This program takes a limit as input and prints the fibonacci series
 * up to that limit.
 * @github: https://www.github.com/awesomelewis2007/examples
 * @author Lewis Evans
 */

#include <stdio.h>

int main() {
    int limit, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    printf("Fibonacci Series: ");
    for (i = 1; i <= limit; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
