/* Given an array of N integers, your task is to determine the maximum and minimum values in the array.

Input Format

The first line contains an integer N, the number of elements in the array.
The second line contains N space-separated integers A[i], representing the elements of the array.
Constraints

1 ≤ N ≤ 10^5
−10^9 ≤ A[i] ≤ 10^9
Output Format

Print two space-separated integers: the maximum and minimum values in the array. */

#include <stdio.h>

int main() {

    int n;
    
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
        
    }
    printf("%d %d",max,min);
    return 0;
}
