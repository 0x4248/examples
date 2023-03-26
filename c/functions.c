/**
 * @file functions.c
 * @brief Simple function example in C
 * @details This program defines and calls a simple function in C.
 * @github: https://www.github.com/awesomelewis2007/examples
*/

#include <stdio.h>

/**
 * @function: square
 * @brief Square function
 * @details This function takes an integer and returns its square.
 * @param x The integer to square.
 * @returns The square of x.
*/
int square(int x)
{
    return x * x;
}


int main()
{
    int result = square(5);
    printf("%d\n", result);
    return 0;
}
