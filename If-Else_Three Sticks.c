/*Aman has three sticks and wants to classify the shape he can form by connecting their ends. The classification is based on the following rules:

The shape(triangle) is classified as:

Equilateral: All three sticks are of the same length.
Isosceles: Exactly two sticks are of the same length.
Scalene: All three sticks have different lengths.
However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.*/

#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("Lengths: [%d, %d, %d]\n", a, b, c);

    if (a + b <= c || a + c <= b || b + c <= a) {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    } else if (a == b && b == c) {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    } else if (a == b || b == c || a == c) {
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    } else {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }

    return 0;
}
