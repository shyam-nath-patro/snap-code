/* You are given an array of integers. Your task is to implement a function that reverses the order of the elements in the array in-place. You do not need to return anything.

Function Signature

void reverseArray(int arr[], int n);
Input Format

The function reverseArray will receive:
An integer array arr of size n.
An integer n representing the number of elements in the array.
Constraints

1 ≤ n ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶
You must modify the given array in-place → No additional arrays should be used.
Output Format

The function should modify the given array in-place by reversing its elements.
You do not need to print anything. */

#include <stdio.h>

void reverseArray(int arr[], int n) {
    for(int i=0,j=n-1;i<n/2;i++,--j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
