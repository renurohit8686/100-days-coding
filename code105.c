Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
  def majorityElement(nums):
    # Phase 1: Find candidate
    candidate, count = None, 0
    for num in nums:
        if count == 0:
            candidate = num
        count += (1 if num == candidate else -1)

    # Phase 2: Verify candidate
    if nums.count(candidate) > len(nums) // 2:
        return candidate
    return -1


# Sample Test Cases
print(majorityElement([3, 2, 3]))          # Output: 3
print(majorityElement([2, 2, 1, 1, 1, 2, 2]))  # Output: 2
print(majorityElement([2, 2, 1, 1, 1, 2, 2, 3])) # Output: -1
