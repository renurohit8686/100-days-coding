Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
  #include <stdio.h>

int main() {
    int n, pos, elem, i;
    
    // Read size of array
    scanf("%d", &n);
    
    int arr[n+1]; // +1 for new element
    
    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Read position and element to insert
    scanf("%d %d", &pos, &elem);
    
    // Shift elements to the right from position
    for (i = n; i >= pos; i--) {
        arr[i+1] = arr[i];
    }
    
    // Insert element
    arr[pos] = elem;
    
    // Print updated array
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
