/*n the ancient kingdom of Zabiria, there exists a magical gate known as the Prime Gate.

The gate reacts differently depending on the nature of the number it receives:

It opens when given a Prime number
It remains closed when given a Composite number
It stays inactive when given a number that is neither Prime nor Composite
A young programmer Omkar has been chosen to guard the gate. Every day, the gate provides a natural number.
Omkar must determine the correct nature of the number so the gate behaves accordingly.

Your task is to help Omkar by writing a program that checks whether the given number is Prime, Composite, or Neither.

Input Format

A single line containing one natural number N.

Constraints

-10^9 ≤ 𝑁 ≤ 10^9
Output Format

Print Prime, if the number is prime
Print Composite, if the number is composite
Print None, if the number is neither prime nor composite*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i;
    int flag=0;
    scanf("%d",&n);
    for(i=2;i<=sqrt(n);++i)
    {
        if(n%i==0)
        {
            printf("Composite");
            flag=1;
                break;
        }
        
    }
    if(n<2)
    {
        printf("None");
    }
    else if(flag==0)
    {
        printf("Prime");
    }
    return 0;
}
