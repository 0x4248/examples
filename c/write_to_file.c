/**
 * @file write_to_file.c
 * @brief Program to write data to a file
 * @details This program writes some text to a file named "output.txt".
 * @github: https://www.github.com/lewisevans2007/examples
 * @license: GNU General Public License v3.0
 * @author Lewis Evans
 */

#include <stdio.h>

int main() {
    FILE *fptr;
    char text[100] = "This is some text to write to a file.";

    fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "%s", text);
    fclose(fptr);

    printf("Data written to file!\n");

    return 0;
}
