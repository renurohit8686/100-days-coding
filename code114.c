Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
  #include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int lastIndex[256];  // Array to store last index of every character
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;  // Initialize with -1
    }

    int maxLen = 0;   // Result
    int start = 0;    // Start index of current window

    for (int i = 0; i < n; i++) {
        // If character is already seen, move start to avoid repetition
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }

        // Update last index of current character
        lastIndex[(unsigned char)s[i]] = i;

        // Update max length
        int currentLen = i - start + 1;
        if (currentLen > maxLen) {
            maxLen = currentLen;
        }
    }

    return maxLen;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    scanf("%s", s);

    int result = lengthOfLongestSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", result);

    return 0;
}


  
