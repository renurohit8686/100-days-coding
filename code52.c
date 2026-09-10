/*Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*




/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.

*/
#include<stdio.h>
int main()
{
    int i,j;
    int stars[]={1,4,5,3,1};
    for(i=0;i<5;i++)
    {
        for(j=1;j<=stars[i];j++)
        {
            printf("*\n");
        }
        printf("\n");
    }
    return 0;
}
