/*You are given a 4-digit integer N.

Your task is to rearrange its digits in descending order, using only if-else statements.

Note:

You must not use arrays, loops, sorting functions, built-in sort utilities, or library functions.

Instead, manually compare the digits using nested if-else conditions and determine their order from largest to smallest.

Finally, print the rearranged digits without spaces.

Input Format

A single integer: {N}

Constraints

1000 ≤ N ≤ 9999
N is always a 4-digit integer.
Only if-else statements may be used for comparisons.
No loops, no arrays, no sorting algorithms, no built-in functions like sort/max/min.
Output Format

Print the four digits of N, rearranged in descending order, without spaces.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a,b,c,d,num;
    scanf("%d",&num);
     a= num/1000;
    b= (num/100)%10;
    c= (num/10)%10;
    d= num%10;
    if(a>=b && a>=c && a>=d)
    {
        printf("%d",a);
        if(b>=c && b>=d)
        {
            printf("%d",b);
            if(c>=d)
            {
                printf("%d",c);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",c);
            }
        }
        else if(c>=b && c>=d)
        {
            printf("%d",c);
            if(b>=d)
            {
                printf("%d",b);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",b);
            }
        }
        else if(d>=b && d>=c)
        {
            printf("%d",d);
            if(b>=c)
            {
                printf("%d",b);
                printf("%d",c);
            }
            else
            {
                printf("%d",c);
                printf("%d",b);
            }
        }
        
    }
    else if(b>=a && b>=c && b>=d)
    {
        printf("%d",b);
        if(a>=c && a>=d)
        {
            printf("%d",a);
            if(c>=d)
            {
                printf("%d",c);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",c);
            }
        }
        else if(c>=a && c>=d)
        {
            printf("%d",c);
            if(a>=d)
            {
                printf("%d",a);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",a);
            }
        }
        else if(d>=a && d>=c)
        {
            printf("%d",d);
            if(a>=c)
            {
                printf("%d",a);
                printf("%d",c);
            }
            else
            {
                printf("%d",c);
                printf("%d",a);
            }
        }
        
    }
     else if(c>=a && c>=b && c>=d)
    {
        printf("%d",c);
        if(a>=b && a>=d)
        {
            printf("%d",a);
            if(b>=d)
            {
                printf("%d",b);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",b);
            }
        }
        else if(b>=a && b>=d)
        {
            printf("%d",b);
            if(a>=d)
            {
                printf("%d",a);
                printf("%d",d);
            }
            else
            {
                printf("%d",d);
                printf("%d",a);
            }
        }
        else if(d>=a && d>=b)
        {
            printf("%d",d);
            if(a>=b)
            {
                printf("%d",a);
                printf("%d",b);
            }
            else
            {
                printf("%d",b);
                printf("%d",a);
            }
        }
        
    }
    else if(d>=a && d>=b && d>=c)
    {
        printf("%d",d);
        if(a>=b && a>=c)
        {
            printf("%d",a);
            if(b>=c)
            {
                printf("%d",b);
                printf("%d",c);
            }
            else
            {
                printf("%d",c);
                printf("%d",b);
            }
        }
        else if(b>=a && b>=c)
        {
            printf("%d",b);
            if(a>=c)
            {
                printf("%d",a);
                printf("%d",c);
            }
            else
            {
                printf("%d",c);
                printf("%d",a);
            }
        }
        else if(c>=a && c>=b)
        {
            printf("%d",c);
            if(a>=b)
            {
                printf("%d",a);
                printf("%d",b);
            }
            else
            {
                printf("%d",b);
                printf("%d",a);
            }
        }
        
    }
     
    return 0;
}
