/*A year is considered a leap year if:

It is divisible by 4.
However, if it is divisible by 100, it must also be divisible by 400 to be considered a leap year.
Write a program that checks if a given year is a leap year or not, outputs the result in a specific format, and handles invalid years as well.*/

#include <stdio.h>

int main() {
    int Y;
    scanf("%d", &Y);

    if (Y <= 0 || Y > 100000) {
        printf("The given year %d is Invalid year.\n", Y);
    } 
    else if ((Y % 400 == 0) || (Y % 4 == 0 && Y % 100 != 0))
    {
        printf("Yes, %d is a leap year.\n", Y);
    } 
    else {
        printf("No, %d is not a leap year.\n", Y);
    }

    return 0;
}
