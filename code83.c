Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]); // convert to lowercase for simplicity
        if (isalpha(ch)) { // check if character is a letter
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }
    
    printf("Vowels=%d, Consonants=%d\n", vowels, consonants);
    return 0;
}
