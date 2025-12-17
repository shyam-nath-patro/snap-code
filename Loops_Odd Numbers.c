/*Write a program to print all odd numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single positive integer, N, representing the range limit.
Constraints

0 <= N <= 10^6
Output Format

Print all odd numbers from 1 to N (inclusive), separated by a space.*/

#include <stdio.h>

int main() {

   int n;
    scanf("%d",&n);
    for(int i=1; i<=n; i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
