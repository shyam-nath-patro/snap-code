/* You are given an array of N integers. Compute the difference between the sum of elements stored at even indices and the sum of elements stored at odd indices.

Use 0-based indexing
Difference = (sum of even-index elements) − (sum of odd-index elements)
Input Format

First line: Integer N
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print a single integer representing the required difference. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    long long odd=0,even=0;
    long long diff=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i%2==0)
        {
            even+= a[i];
        }
        else
        {
            odd+=a[i];
        }
    }
      
    diff= even-odd;
    printf("%lld",diff);
    
    return 0;
}
