/* Given an array of integers, calculate the average value of all elements in the array and count how many elements are strictly greater than the average.

The average is defined as: (sum of all elements) / N
Comparison must be strictly greater (>), not greater than or equal to
Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print a single integer — the count of elements strictly greater than the average. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    double sum=0;
    double avg=0;
    long count=0;
  
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum+a[i];
        
    }
    avg=sum/n;
    for(int i=0;i<n;i++)
    {
        if(a[i]>avg)
        {
            ++count;
        }
        
    
    }
    printf("%ld",count);
    return 0;
}
