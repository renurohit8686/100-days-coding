Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <string.h>

int main() {
    char str[100];
    
    // Read input string
    scanf("%s", str);
    
    int n = strlen(str);
    
    // Reverse string in place
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
    
    // Print reversed string
    printf("%s\n", str);
    
    return 0;
}
