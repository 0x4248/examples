/**
 * @file read_file.c
 * @brief Program to read data from a file
 * @details This program reads the contents of a file named "input.txt" and
 * prints them to the console.
 * @github: https://www.github.com/lewisevans2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;

    fptr = fopen("input.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr);

    return 0;
}
