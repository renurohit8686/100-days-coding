//Q38: Write a program to find the sum of digits of a number.

/*
Sample Test Cases:
Input 1:
123
Output 1:
6

Input 2:
999
Output 2:
27

*/
#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int digit;

    // 1. Take the input number
    scanf("%d", &n);

    // 2. Loop until the number becomes 0
    while (n > 0) {
        digit = n % 10;       // Get the last digit
        sum = sum + digit;    // Add it to the total sum
        n = n / 10;           // Remove the last digit
    }

    // 3. Print the result
    printf("%d\n", sum);

    return 0;
}