/*Write a program to find the minimum of two integers a and b without using any comparison operators (<, >, <=, >=). Use only bitwise operators and logical operators to determine which number is smaller.

Input Format

Two space-separated integers a and b.
Constraints

−10^9 ≤ a,b ≤ 10^9
Output Format

Print the smaller of the two integers.*/

#include <stdio.h>

int main() {

    int m,n;
    scanf("%d %d",&m,&n);
    
    int res=  m-n;
     int final=res>>31;
    if(final==-1)
    {
        printf("%d",m);
    }
    else if(final==0)
    {
        printf("%d",n);
    }
    
    return 0;
}
