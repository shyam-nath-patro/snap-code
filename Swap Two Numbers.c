/*Write a program to swap two numbers.*/

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
