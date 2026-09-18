Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
  #include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    scanf("%d %d", &m1, &n1);
    int A[m1][n1];

    // Input first matrix
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d %d", &m2, &n2);
    int B[m2][n2];

    // Input second matrix
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Check compatibility
    if (n1 != m2) {
        printf("Matrix multiplication
