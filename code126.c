Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
  #include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *fp;

    // Ask user for filename
    printf("Enter filename: ");
    scanf("%s", filename);

    // Try opening the file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        // File does not exist
        printf("Error: File does not exist!\n");
    } else {
        // File exists, display content
        char ch;
        printf("File opened successfully.\n");
        printf("File content:\n");

        while ((ch = fgetc(fp)) != EOF) {
            putchar(ch);
        }

        fclose(fp);
    }

    return 0;
}
