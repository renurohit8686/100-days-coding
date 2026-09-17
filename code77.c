Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

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
        printf("False"); // Not a square matrix
        return 0;
    }

    int distinct = 1;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(A[i][i] == A[j][j]) {
                distinct = 0;
                break;
            }
        }
        if(!distinct) break;
    }

    printf(distinct ? "True" : "False");
    return 0;
}
