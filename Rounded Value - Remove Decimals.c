/*Write a program that takes a floating-point number and prints it without decimal values.*/

#include <stdio.h>

int main() {
float dec;
    scanf("%f",&dec);
    int val;
    val= (int)dec;
    printf("Rounded Value = %d",val);
    return 0;
}
