Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
  def max_subarray_sum(arr):
    # Initialize with the first element
    max_so_far = arr[0]
    max_ending_here = arr[0]
    
    # Traverse the array starting from the second element
    for i in range(1, len(arr)):
        # Either extend the previous subarray or start new from current element
        max_ending_here = max(arr[i], max_ending_here + arr[i])
        # Update the global maximum
        max_so_far = max(max_so_far, max_ending_here)
    
    return max_so_far


# Sample Test Cases
print(max_subarray_sum([2, 3, -8, 7, -1, 2, 3]))   # Output: 11
print(max_subarray_sum([-2, -4]))                  # Output: -2
print(max_subarray_sum([5, 4, 1, 7, 8]))           # Output: 25
