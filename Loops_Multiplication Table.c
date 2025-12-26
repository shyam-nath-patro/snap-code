/* Write a program to print the multiplication table of a given number n from 1 to 10.

Input Format

A single integer n
Constraints

0 <= n <= 1000
Output Format

For a given n, the output should look like this: */

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;++i)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
