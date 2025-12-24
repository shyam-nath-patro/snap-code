/* Write a program that takes two inputs from the user and output the first n multiples of x.

Input Format

An integer n, which represents the number of multiples to print.
An integer x, which represents the number whose multiples need to be printed.
Constraints

0 ≤ n ≤ 1000
-1000 ≤ x ≤ 1000
Output Format

Print the first n multiples of x in a single line, separated by spaces.*/

#include <stdio.h>

int main() {

    int n,n2;
    scanf("%d %d",&n,&n2);
    for(int i=1; i<=n;++i)
    {
        int res=n2*i;
        printf("%d ",res);
    }
    return 0;
}
