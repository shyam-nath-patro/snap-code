/*Write a C program that takes two input coordinates x and y. 
  The program should determine whether the point (x, y) lies in the first,
second, third, or fourth quadrant, on the positive or negative X-axis, 
  on the positive or negative Y-axis, or at the origin. */

#include <stdio.h>

int main() {
    float x, y;

    printf("Enter x coordinate: ");
    scanf("%f", &x);
    printf("Enter y coordinate: ");
    scanf("%f", &y);

    if (x > 0) {
        if (y > 0)
            printf("Point lies in the First Quadrant.\n");
        else if (y < 0)
            printf("Point lies in the Fourth Quadrant.\n");
        else
            printf("Point lies on the positive X-axis.\n");
    }
    else if (x < 0) {
        if (y > 0)
            printf("Point lies in the Second Quadrant.\n");
        else if (y < 0)
            printf("Point lies in the Third Quadrant.\n");
        else
            printf("Point lies on the negative X-axis.\n");
    }
    else {
        if (y > 0)
            printf("Point lies on the positive Y-axis.\n");
        else if (y < 0)
            printf("Point lies on the negative Y-axis.\n");
        else
            printf("Point lies at the Origin.\n");
    }

    return 0;
}
