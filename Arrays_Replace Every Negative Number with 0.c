/* Given an array of integers, replace every negative number in the array with 0 and print the updated array.

The relative order of elements must remain unchanged.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the updated array after replacing all negative numbers with 0.
Elements must be printed in a single line, space-separated. */

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            a[i]=0;

        }
    }
     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
