/* Given an array of integers, calculate the average of all elements in the array.

The average must be computed as the sum of all elements divided by N and printed as a floating-point value.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i] ≤ 10⁹
Output Format

Print the average of the array elements as a floating-point value. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n;
   double sum=0;
    scanf("%d",&n);
    double a[n];
    int size=sizeof(a)/sizeof(a[0]);
    
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&a[i]);
        sum= sum+ a[i];
    }
    double avg= sum/size;

    printf("%f",avg);
    
    return 0;
}
