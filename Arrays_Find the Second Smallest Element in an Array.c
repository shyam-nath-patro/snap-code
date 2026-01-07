/* Given an array of integers, determine the second smallest distinct element in the array.

The second smallest element is defined as the element that is strictly greater than the smallest element and smaller than all other remaining elements.
If the array does not contain at least two distinct elements, print -1.
Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the second smallest distinct element in the array.
If no such element exists, print -1. */

#include <stdio.h>

int main() {

    int n,min,min2;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    if(n<2)
    {
        printf("-1");
        return 0;
    }
    min=a[0];
    min2=a[0];
    for(int i=0;i<n;i++)
    {
    if(min>a[i])
    {
        min2=min;
        min=a[i];
    }
    else if(a[i]>min && (min2==min || a[i]<min2))
    {
        min2=a[i];
    }
    }
    if(min2==min)
    {
        printf("-1");
    }
    else
    {
    printf("%d",min2);
    }
    return 0;
}
