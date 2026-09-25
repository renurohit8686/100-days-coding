Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
  def are_anagrams(str1, str2):
    # Normalize: remove spaces and convert to lowercase
    str1 = str1.replace(" ", "").lower()
    str2 = str2.replace(" ", "").lower()
    
    # Compare sorted characters
    if sorted(str1) == sorted(str2):
        return "Anagrams"
    else:
        return "Not anagrams"


# Sample Test Cases
print(are_anagrams("listen", "silent"))  # Output: Anagrams
print(are_anagrams("hello", "world"))    # Output: Not anagrams
