Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/
def longest_word(sentence):
    words = sentence.split()  # Split by spaces
    longest = ""
    
    for word in words:
        if len(word) > len(longest):
            longest = word
    
    return longest


# Sample Test Cases
print(longest_word("I love programming"))  # Output: programming
print(longest_word("Python is powerful"))  # Output: powerful
