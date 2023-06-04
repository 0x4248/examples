/**
 * @file random.c
 * @brief Random number generator in C
 * @details This is a simple random number generator program in C.
 * @github: https://www.github.com/awesomelewis2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, n;
    time_t t;

    /* Intializes random number generator */
    srand((unsigned)time(&t));

    /* Print 5 random numbers from 0 to 49 */
    for (i = 0; i < 5; i++) {
        n = rand() % 50;
        printf("%d ", n);
    }
    printf("\n");
}
