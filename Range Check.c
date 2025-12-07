/* You are given three integers n, low, high.

Your task is to check if n is in the inclusive range [low, high].

Input Format

Three space separated integers: {n} {low} {high}*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,low,high;
    scanf("%d %d %d",&n,&low,&high);
    if(n>=low && n<=high)
    {
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
