/*Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.*/

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);

    n = n | (1 << i); 
    printf("%d\n", n);

    return 0;
}


