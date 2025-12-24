/* You are given a single integer N.
Your task is to print a reverse number stair pattern using numbers from N to 1.

The first row should contain numbers from N to 1
Each next row should start from N-1, then N-2, and so on
The last row should contain only 1
Numbers in a row must be separated by a single space
Input Format

A single integer N

Constraints

1 ≤ 𝑁 ≤ 100
Output Format

Print the required pattern
Each row should be printed on a new line*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    for(int i=n;i>=1;--i)
    {
        int res=i;
        for(int j=i;j>=1;--j)
        {
            printf("%d ",res--);
     
        }
        printf("\n");
    }
    
    return 0;
}
