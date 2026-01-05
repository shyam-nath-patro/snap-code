/* Given an array of integers, compute the sum of all elements present in the array.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the sum of all elements in the array. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   long n,sum=0;
    scanf("%ld",&n);
    long a[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
        sum= sum+ a[i];
    }

    printf("%ld",sum);
    
    return 0;
}
