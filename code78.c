Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
  #include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int A[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    if(n != m) {
        printf("Matrix is not square!");
        return 0;
    }

    int sum = 0;
    for(int i=0; i<n; i++) {
        sum += A[i][i];  // main diagonal element
    }

    printf("%d", sum);
    return 0;
}
