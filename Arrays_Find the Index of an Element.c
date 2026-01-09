/* You are given an array of integers and a target element. Your task is to find the first occurrence index of the target element in the array. If the element is not found, return -1.

Input Format

The first line contains an integer N, the size of the array.
The second line contains N space-separated integers, representing the array elements.
The third line contains a single integer, target, the element to search for.
Constraints

1 ≤ N ≤ 10^5
−10^6 ≤ arr[i] ≤ 10^6
1 ≤ target ≤ 10^5
Output Format

Print the 0-based index of the first occurrence of target in the array.
If target is not found, print -1. */

#include <stdio.h>

int main() {

       int n,i;
     scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int target;
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target)
        {
            printf("%d",i);
            return 0;
        }
        
    }
    if(i==n)
    {
        printf("-1");
    }
    return 0;
}
