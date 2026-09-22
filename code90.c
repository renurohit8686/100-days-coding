Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/
  #include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    scanf("%s", str);  // Input string
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
    
    printf("%s\n", str);  // Output toggled string
    return 0;
}
