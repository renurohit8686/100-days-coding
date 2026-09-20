Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
  #include <stdio.h>

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        // Check if character is lowercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // Convert to uppercase
        }
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
