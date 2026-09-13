Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
  #include <stdio.h>

int main() {
    int n, k, i;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read k (number of rotations)
    scanf("%d", &k);
    
    // Normalize k (in case k > n)
    k = k % n;
    
    // Print rotated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[(n - k + i) % n]);
    }
    
    return 0;
}
