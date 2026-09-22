Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
  #include <stdio.h>
#include <ctype.h>  // for isdigit(), isalpha()

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);  // Input string with spaces

    int spaces = 0, digits = 0, special = 0;
    
    for (int i = 0; str[i] != '\0'; i++)
