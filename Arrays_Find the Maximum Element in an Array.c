/* Given an array of integers, determine the maximum element present in the array.

Input Format

First line: An integer N, the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the maximum element of the array.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
    scanf("%d",&n);
    int a[n];
    
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max= a[0];
    for(int i=0;i<n;i++)
    {
       if(max<=a[i])
       {
           max=a[i];
       }
    }

    printf("%d",max);
    
    return 0;
}
