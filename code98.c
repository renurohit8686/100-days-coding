Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
  #include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);

    // Print the first initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Loop through the string to find spaces
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            // If it's not the last word, print initial
            // Otherwise, print the surname in full
            int j = i+1;
            int isLastWord = 1;
            for (int k = j; k < len; k++) {
                if (name[k] == ' ') {
                    isLastWord = 0;
                    break;
                }
            }
            if (isLastWord) {
                printf(" %s", &name[j]); // print surname in full
                break;
