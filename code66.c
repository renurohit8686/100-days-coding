Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
  #include <stdio.h>

int main() {
    int n, key, i, j;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n+1]; // +1 for the new element
    
    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read the element to insert
    scanf("%d", &key);
    
    // Find position to insert
    for (i = 0; i < n; i++) {
        if (arr[i] > key) {
            break;
        }
    }
    
    // Shift elements to the right
    for (j = n; j > i; j--) {
        arr[j] = arr[j-1];
    }
    
    // Insert the element
    arr[i] = key;
    n++;
    
    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
