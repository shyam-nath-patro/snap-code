/* Write a program to print the squares of numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single integer n representing representing the range limit.
Constraints

0 <= N <= 10^4
Output Format

Print all squares of numbers from 1 to N (inclusive), separated by a space.
*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1; i<=n;++i)
    {
        printf("%d ",i*i);
    }
    return 0;
}
