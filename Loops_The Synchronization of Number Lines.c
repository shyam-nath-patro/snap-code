/* On a number line starting from 1, two points begin moving forward.

The first point jumps forward by A units at a time.
The second point jumps forward by B units at a time.
Both points can only land on numbers that are multiples of their jump length.

The mathematician observing the number line wants to know:

At what smallest positive number will both points land together for the first time?
Task:

Given two natural numbers A and B, determine the smallest positive integer that is a multiple of both numbers.

Input Format

A single line containing two space-separated natural numbers A and B.

Constraints

1 ≤ A, B ≤ 10^9

Output Format

Print a single integer — the first common landing point of both sequences i.e. LCM. */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  int n,n2,lcm;
    scanf("%d %d",&n,&n2);
    if(n>n2)
    {
        lcm= n;
    }
    else
    {
        lcm=n2;
    }
    for(;;lcm++)
    {
        if(lcm%n==0 && lcm%n2==0)
        {
           printf("%d",lcm);
            return 0;
        }
    }
    return 0;
}
