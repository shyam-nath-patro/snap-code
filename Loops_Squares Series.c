/* Write a program to generate the series 1, 4, 9, 16, 25, ... of N numbers, but skip the numbers that are divisible by 3.

Input Format

A single integer N.
Constraints

0 ≤ N ≤ 1000
Output Format

A single line containing the series, separated by spaces. */

#include <stdio.h>
#include<math.h>
int main() {

    int n,count=1;
    scanf("%d",&n);
    for (int i = 1; count <= n;i++) {
        int sqr = i * i;
        if (sqr % 3 != 0) {
             printf("%d ", sqr);
        count++;
        }
       
    }

    return 0;
}
