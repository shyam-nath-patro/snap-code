/* Given a positive integer num, count how many of its digits divide num evenly.

A digit d divides num if:

num % d == 0
You must print the count, not return it.

Input Format

A single integer: num

Constraints

1 ≤ 𝑛𝑢𝑚 ≤ 10^9
Input does NOT contain the digit 0
Output Format

Print a single integer — the count of digits that divide num */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rem,count=0;
    scanf("%d",&n);
    int n2=n;
    while(n>0)
    {
        rem=n%10;
            if(n2%rem==0)
            {
                count++;
                
            }
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
