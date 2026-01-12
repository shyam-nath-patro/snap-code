/* You are given an array of integers. Your task is to determine whether the array is sorted in non-decreasing order.

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print "Sorted" if the array is sorted in non-decreasing order.
Otherwise, print "Not Sorted". */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            break;
        }
    }
    if(i==n-1)
    {
        printf("Sorted");
        
    }
    else
    {
        printf("Not Sorted");
    }
    
     
    
    return 0;
}
