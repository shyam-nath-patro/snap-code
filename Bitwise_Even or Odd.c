/*Write a program to determine whether a given integer N is even or odd using only bitwise operators.*/

#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);

    n = n &1; 
    if (n==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    

    return 0;
}
