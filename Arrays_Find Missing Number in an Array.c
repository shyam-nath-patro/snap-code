/* You are given an array of size N-1 containing distinct integers from 1 to N (inclusive). This means exactly one number is missing from the sequence.

Your task is to read the input, determine the missing number, and print the output.

Input Format

The first line contains a single integer N (size of the full sequence).
The second line contains N-1 distinct integers in the range [1, N] in any order.
Constraints

2 ≤ N ≤ 10^5
1 ≤ arr[i] ≤ N
The array contains distinct integers and is missing exactly one number.
Output Format

Print the missing number in the sequence. */

#include <stdio.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    int total= n*(n+1)/2;
        int res=total-sum;
    printf("%d",res);
    
    return 0;
}
