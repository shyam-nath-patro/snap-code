/* In the land of Arithmia, there are two neighboring kingdoms ruled by King Shivam and Queen Belia. Each kingdom owns a magical seal engraved with a positive integer.

To form an alliance, both seals must be stamped with the largest possible common magical power that can divide both numbers exactly.

The royal mathematician must determine the Greatest Common Divisor (GCD) of the two numbers to create the alliance seal.

Your mission is to help the mathematician find the GCD of two natural numbers.

Input Format

A single line containing two space-separated natural numbers A and B

Constraints

1 ≤ 𝐴, 𝐵 ≤ 10^9
Output Format

Print a single integer i.e. the GCD of A and B */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,n2;
    scanf("%d %d",&n,&n2);
    if(n2==0)
    {
        printf("%d",n);
        return 0;
    }
    if(n==0)
    {
        printf("%d",n2);
        return 0;
    }
    for(int i=n2;i>0;i--)
    {
        if(n%i==0 && n2%i==0)
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
