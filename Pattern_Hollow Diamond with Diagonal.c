/* Write a program that prints a hollow diamond pattern with diagonals for a given integer n, where n represents the number of rows in the top half of the diamond (including the middle row).

The pattern must be structured as follows:

Horizontal diagonal: The middle row of the diamond contains astericks with no spaces.
Vertical diagonal: The center column of the diamond contains an asterisk in every row.
Each subsequent row above or below the middle row reduces the number of astericks symmetrically.
The astericks in each row form the hollow diamond shape with visible diagonals.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the pattern cannot be drawn by the given input value.

Input Format

A single integer n.
Constraints

-50 ≤ n ≤ 50
Output Format

Print the hollow diamond pattern with diagonals.
Print "Shape Not Possible" if the pattern cannot be drawn.
*/

#include <stdio.h>

int main() {
    int n, i, j,k;
    scanf("%d", &n);
    if(n>1)
    {
    for(i = 1;i<=n; i++) {
        for(k=2; k<=n-i+1;k++) {
            printf(" ");
        }
        for(j=1;j<=(2 * i - 1);j++) {
           if(i==n||j==1||j==2*i-1|| j==i)
        {
            printf("*");
        }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
     for(i =2;i<=n; i++) {
        for(k=2; k<=i;k++) {
            printf(" ");
        }
        for(j=1;j<=(2 * (n-i+1)- 1);j++) {
           if(j==1||j==2*(n-i+1)-1|| j == (n - i + 1))
        {
            printf("*");
        }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}
