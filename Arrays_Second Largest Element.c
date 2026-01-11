/* Complete the function findSecondLargest() which takes an array of integers and its size as input and returns the second largest element in the array. If there is no second largest element, return -1.

Function Signature

int findSecondLargest(int arr[], int n);
Input Format

The function will receive:
An integer n, the number of elements in the array.
An integer array arr[] of size n, where arr[i] represents the i-th element.
Constraints

1 ≤ n ≤ 10^5
−10^9 ≤ arr[i] ≤ 10^9
The function should run in O(N) time complexity and use O(1) extra space.
Output Format

Return the second largest element in the array.
If there is no valid second largest element, return -1. */

#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    int i, max=arr[0],max2=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]<max && (max2==max || max2<arr[i]))
        {
            max2=arr[i];
        }
        
    }
    if(max2==max)
    {
        max2=-1;
    }
    return max2;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if(n<2)
    {
        printf("-1");
        return 0;
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}
