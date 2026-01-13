/* Given an array of integers, determine whether the array is sorted.

Print "Ascending" if the array is sorted in non-decreasing (ascending) order
Print "Descending" if the array is sorted in non-increasing (descending) order
Print "Not Sorted" otherwise
NOTE: An array with equal adjacent elements is considered sorted - "Ascending"

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print one of the following:

Ascending
Descending
Not Sorted */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,asc=1,desc=1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            asc=0;
        }
        if(a[i]<a[i+1])
        {
            desc=0;
        }
    }
    if(asc)
    {
        printf("Ascending");
    }
    else if(desc)
    {
        printf("Descending");
    }
    else
    {
        printf("Not Sorted");
    }
    return 0;
}
