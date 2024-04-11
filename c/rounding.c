/**
 * @file rounding.c
 * @brief Rounding numbers in C
 * @details Turns a number form a float to an int, rounding up or down depending
 * on the decimal value.
 * @github: https://www.github.com/0x4248/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <math.h>
#include <stdio.h>

int main() {
    float a;
    int b;
    while (0 == 0) {
        printf("Enter a number: ");
        scanf("%f", &a);

        b = (int)a;
        if (a - b >= 0.5) {
            b++;
        }
        printf("Rounded: %d\n", b);
    }
    return 0;
}