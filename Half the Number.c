/* Write a program that takes an integer as input and print its half value as a floating-point number with 2 decimals.

Input Format

Single integer.

Constraints

Input can be positive or negative integer.
Output should use float division. */

#include <stdio.h>
int main() {
    int num;
    scanf("%d", &num);
    float halfValue = num / 2.0;
    printf("Half of %d is %.2f\n", num, halfValue);
    return 0;
}
