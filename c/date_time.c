/**
 * @file date_time.c
 * @brief Program to get the current date and time
 * @details This program gets the current date and time and prints them to the
 * console.
 * @github: https://www.github.com/awesomelewis2007/examples
 */

#include <stdio.h>
#include <time.h>

int main() {
    time_t t = time(NULL);
    struct tm *tm = localtime(&t);
    char date[100];
    char time[100];

    strftime(date, sizeof(date), "%d-%m-%Y", tm);
    strftime(time, sizeof(time), "%H:%M:%S", tm);

    printf("Date: %s\n", date);
    printf("Time: %s\n", time);

    return 0;
}
