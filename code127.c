Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
  #include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin, *fout;
    char ch;

    // Open input file for reading
    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Could not open input.txt\n");
        return 1;
    }

    // Open output file for writing
    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Could not open output.txt\n");
        fclose(fin);
        return 1;
    }

    // Read each character, convert if lowercase, and write to output
    while ((ch = fgetc(fin)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;  // Convert to uppercase
        }
        fputc(ch, fout);
    }

    // Close files
    fclose(fin);
    fclose(fout);

    printf("Conversion complete. Check output.txt\n");
    return 0;
}
