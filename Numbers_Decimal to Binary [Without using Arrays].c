/* Given a decimal integer N, convert it into its binary representation without using built-in conversion functions. The output should display only the used bits (ignoring any leading or padding zeros). [Without using Arrays]

Input Format

A single integer N
Constraints

0 ≤ N ≤ 1023
Output Format

A single integer number representing the binary equivalent of N, with a message, "Binary equivalent of [N]: */


#include <stdio.h>

int main() {

    int n,i=0;
    scanf("%d",&n);
    int b[11];
    int n2=n;
    for( i=0;n>0;i++)
    {
        b[i]=n%2;
        n=n/2;
    }
    printf("Binary equivalent of %d: ",n2);
    if(n2==0)
    {
        printf("0");
        return 0;
    }
    for(i=i-1;i>=0;i--)
    {
        printf("%d",b[i]);
    }
    return 0;
}
