Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
  def reverse_each_word(sentence):
    # Split sentence into words
    words = sentence.split()
    
    # Reverse each word
    reversed_words = [word[::-1] for word in words]
    
    # Join back into a sentence
    return " ".join(reversed_words)


# Sample Test Cases
print(reverse_each_word("I love coding"))  # Output: I evol gnidoc
print(reverse_each_word("Hello World"))    # Output: olleH dlroW
