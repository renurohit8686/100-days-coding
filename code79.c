Q79: Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
  #include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int matrix[m][n];

    // Input matrix elements
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Diagonal traversal
    for (int k = 0; k < m + n - 1; k++) {
        int row = (k < n) ? 0 : k - n + 1;
        int col = (k < n) ? k : n - 1;

        while (
