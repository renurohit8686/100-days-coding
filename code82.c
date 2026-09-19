Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/
  #include <stdio.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string
    
    int i = 0;
    while (str[i] != '\0') {   // Loop until null terminator
        printf("%c\n", str[i]);  // Print each character on new line
        i++;
    }
    
    return 0;
}
