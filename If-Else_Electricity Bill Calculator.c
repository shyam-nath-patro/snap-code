/*A user consumes a certain number of electricity units, and the electricity bill is calculated as follows:

For units ≤ 100: The rate is ₹5 per unit.
For units > 100 and ≤ 300: The rate is ₹7 for the remaining units.
For units > 300: The rate is ₹10 for units above 300.
Additionally, if the total bill amount is ₹1,200 or less, a 10% discount is applied to the bill.

Write a program to compute the total electricity bill based on the given number of units and handles invalid input as well.*/

#include <stdio.h>

int main() {
    int n;
    double bill = 0;
    scanf("%d", &n);

    if (n < 0 || n > 1000000) 
    {
        printf("Invalid Input!\n");
        return 0;
    }

    if (n <= 100) 
    {
        bill = n * 5;
    }
    else if (n <= 300) 
    {
        bill = (100 * 5) + (n - 100) * 7;
    } 
    else {
        bill = (100 * 5) + (200 * 7) + (n - 300) * 10;
    }

    if (bill <= 1200) {
        bill = bill - (bill * 0.10);
    }

    printf("The electricity bill is: %.2f.\n", bill);
    return 0;
}
