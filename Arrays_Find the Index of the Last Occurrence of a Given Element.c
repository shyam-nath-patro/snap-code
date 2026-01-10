/* Given an array of integers and a target value K, determine the index of the last occurrence of K in the array.

Indexing is 0-based
If the element does not exist in the array, print -1
Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Third line: An integer K, the element to search for
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i], K ≤ 10⁹
Output Format

Print a single integer — the 0-based index of the last occurrence of K.
If K is not present, print -1. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2,n3=-1;
    scanf("%d",&n2);
    for( i=0;i<n;i++)
    {
        if(n2==a[i])
        {
            n3=i;
        }
    }
    if(n3==-1)
    {
        printf("-1");
    }
    else
    printf("%d",n3);
    
    return 0;
    
}
