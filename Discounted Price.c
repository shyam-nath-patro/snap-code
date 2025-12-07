/*A shop offers a discount on an item based on a percentage.

You must compute the final price after applying the discount using:

discountAmount = ( price * percent ) / 100

discountedPrice = price - discountAmount
Important Instructions

Do NOT write the full logic inside main().
Create and use the following function: float discounted(float price, float percent);
This function must return the final price after applying the percentage discount.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
float discounted(float price, float percent) {
    float discountAmount = (price * percent) / 100;
    float discountedPrice = price - discountAmount;
    return discountedPrice;
}

int main() {
    float price, percent;
    scanf("%f %f", &price, &percent);

    float res = discounted(price, percent);
    printf("The final price is: %f\n", res);

    return 0;
}
