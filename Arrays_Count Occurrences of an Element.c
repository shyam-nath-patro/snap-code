/* You are given an array of integers and a target element. Your task is to count how many times the target element occurs in the array and output that count.

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers representing the array elements.
The third line contains a single integer, the target element whose occurrences you need to count.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
-10⁶ ≤ target ≤ 10⁶
Output Format

Print a single integer representing the number of times the target element occurs in the array. */

#include <stdio.h>

int main() {

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int n2;
    scanf("%d",&n2);
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(n2==a[i])
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
