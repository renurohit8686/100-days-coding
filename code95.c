Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
  def is_rotation(s1, s2):
    # Step 1: Check length
    if len(s1) != len(s2):
        return "Not rotation"
    
    # Step 2: Check if s2 is in s1+s1
    if s2 in (s1 + s1):
        return "Rotation"
    else:
        return "Not rotation"


# Sample Test Cases
print(is_rotation("abcde", "deabc"))  # Output: Rotation
print(is_rotation("abc", "acb"))      # Output: Not rotation
