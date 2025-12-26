/* Write a program to generate a sequence of n terms where each term is double the previous one, starting from 1.

Input Format

A single integer n.
Constraints

0 ≤ n ≤ 35
Output Format

A single line containing the first n terms of the sequence, separated by spaces, starting with '<' and ending with '>'.
If series doesn't exist, do not print anything. */

#include <stdio.h>
#include <math.h>
int main() {

    int n;
    scanf("%d",&n);
    if(n>0)
    {
    printf("<1");
    for(int i=1;i<n;++i)
    {   int res= pow(2,i);
        printf(" %d",res);
    }
    printf(">");
    }
    return 0;
    
}
