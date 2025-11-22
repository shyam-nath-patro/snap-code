/* You will be given four digits, each from 0–9.
Your task is to combine them into a single 4-digit number in the same order and multiply it by 5 to get the final number.

Important Instructions

Do NOT write the entire logic in main().
Create a function int buildNumber(int a, int b, int c, int d) and call it from main().*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int buildNumber(int a, int b, int c, int d)
{
    int res = a*1000+ b*100 + c*10 + d;
    return res*5;
}

int main() {
    int n1,n2,n3,n4;
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    int result=buildNumber(n1,n2,n3,n4);
    printf("The number is: %d",result);
    return 0;
}
