Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
  #include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open file in read mode
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (isspace(ch) || ch == '\n') {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If file ends with a word (no trailing space/newline)
    if (inWord) {
        words++;
    }

    fclose(fp);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
