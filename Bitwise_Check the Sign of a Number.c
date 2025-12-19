/* Write a program to determine whether a given integer n is positive or negative using bitwise operators.

Note: You are not allowed to use comparison operators like <, >, <=, or >=.

Input Format

A single integer n.
Constraints

−2^31 ≤ n < 2^31
Output Format

Print "Positive" if n is positive or zero.
Print "Negative" if n is negative. */

#include <stdio.h>

int main() {

      int n;
    scanf("%d",&n);
    int res= n>>31;
    if(res==0)
    {
        printf("Positive\n");
        
    }
    else
    {
        printf("Negative");
    }
    return 0;
}
