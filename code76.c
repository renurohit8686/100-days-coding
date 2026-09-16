Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int A[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin >> A[i][j];

    if(n != m) {
        cout << "False";
        return 0;
    }

    bool symmetric = true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(A[i][j] != A[j][i]) {

