Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
  #include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Read each character until end of file
    while ((ch = fgetc(fp)) != EOF) {
        // Check for vowels (both uppercase and lowercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        // Check for consonants (letters but not vowels)
        else if ((ch >=
