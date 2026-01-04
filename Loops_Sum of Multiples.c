/* Given a positive integer n, find the sum of all integers from 1 to n (inclusive) that are divisible by 3, 5, or 7.

You must print the result, not return it.

Input Format

A single integer input: n

Constraints

1 ≤ 𝑛 ≤ 10^3
Output Format

Print a single integer — the sum of all numbers in the given range divisible by 3, 5, or 7

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%3==0)
        {
            sum = sum +i;
        }
        else if(i%5==0)
        {
            sum = sum+i;
        }
        else if(i%7==0)
        {
            sum = sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
