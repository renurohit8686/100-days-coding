Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/#include <stdio.h>

// Define enum for months
typedef enum {
    JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC
} Month;

// Function to check leap year
int isLeapYear(int year) {
    return (year % 400 == 0) ||
           (year % 4 == 0 && year % 100 != 0);
}

// Function to get days in a month
int getDaysInMonth(Month m, int year) {
    switch (m) {
        case JAN: return 31;
        case FEB: return isLeapYear(year) ? 29 : 28;
        case MAR: return 31;
        case APR: return 30;
        case MAY: return 31;
        case JUN: return 30;
        case JUL: return 31;
        case AUG: return 31;
        case SEP: return 30;
        case OCT: return 31;
        case NOV: return 30;
        case DEC: return 31;
        default: return -1; // Invalid month
    }
}

int main() {
    Month m;
    int year;

    // Input month and year
    printf("Enter month (1-12): ");
    scanf("%d", (int *)&m);

    printf("Enter year: ");
    scanf("%d", &year);

    int days = getDaysInMonth(m, year);

    char *monthNames[] = {
        "",
        "January"
