/* Given an integer n, write a program to calculate the n-th prime number, starting from 1.

Input Format

A single integer 𝑛.
Constraints

1 <= n <=104
Output Format

Print the n-th prime number. */

#include <stdio.h>

int main() {
 int n,num,n2,count,i;
    scanf("%d",&n);
    while(count < n) {
        num++;
        for(i = 2; i <= num; i++) {
            if(num % i == 0) 
            {
                break;
            }
        }
        if(i == num) 
        {
            count++;
        }
    }

    printf("%d",num);
    return 0;
}
