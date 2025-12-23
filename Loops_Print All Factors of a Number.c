/*Given a positive integer N, print all its factors in ascending order.

You need to write a program that reads N and prints all its factors separated by spaces.

Input Format

A single line containing the integer N.

Constraints

1 ≤ 𝑁 ≤ 10^9
Output Format

Print all factors of N in ascending order, separated by a single space.*/

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;++i)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
