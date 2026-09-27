Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
  #include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);

    // Print the first character as initial
    if (name[0] != ' ')
        printf("%c.", name[0]);

    // Loop through the string to find spaces
    for (int i = 0; i < strlen(name); i++) {
        if (name[i] == ' ' && name[i+1] != ' ' && name[i+1] != '\0') {
            printf("%c.", name[i+1]);
        }
    }

    return 0;
}
