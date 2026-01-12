/* Given an array of integers and a value K, count how many elements in the array are strictly greater than K.

Input Format

First line: An integer N, representing the size of the array
Second line: N space-separated integers
Third line: An integer K
Constraints

1 ≤ N ≤ 10⁵
−10⁹ ≤ A[i], K ≤ 10⁹
Output Format

Print a single integer representing the count of elements strictly greater than K. */

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
    int k=0,count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
      if(k<a[i])
      {
         count++ ;
      }
    }
    printf("%d",count);
    return 0;
}
