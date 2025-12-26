/* A Harshad Number is a number that is divisible by the sum of its digits.

Compute the sum of the digits of the number.
If the number is divisible by this sum, it is a Harshad Number.
Otherwise, it is not a Harshad Number.
Input Format

A single integer 𝑁.

Constraints

1 <= N <= 106

Output Format

Print,"[N] is a harshad number" if N is a Harshad number.
Print, "[N] is not a harshad number" otherwise.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,rem,sum=0;
    scanf("%d",&n);
    int orgn=n;
    while(n>0)
    {
         rem= n%10;
         sum= sum+rem;
        n=n/10;
    }
    if(orgn%sum==0)
    {
        printf("%d is a harshad number",orgn);
    }
    else
    {
        printf("%d is not a harshad number",orgn);
    }
    return 0;
}
