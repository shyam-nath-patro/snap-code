/* Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.

Difference = (Product of digits) − (Sum of digits)
Input Format

A single integer: n

Constraints

1 ≤ 𝑛 ≤ 10^5
1 ≤ n ≤ 10^5
Output Format

Print a single integer representing: (product of digits of n) − (sum of digits of n)*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,rem,sum,pr=1,diff;
    scanf("%d",&n);
    while(n>0)
    {
        rem= n%10;
        pr= pr*rem;
        sum= sum+rem;
        n=n/10;
        
    }
    diff= pr - sum;
    printf("%d",diff);
    return 0;
}
