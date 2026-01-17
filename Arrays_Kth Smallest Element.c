/* Given an array of integers that may contain duplicate elements and an integer K, your task is to find the Kth smallest element in the array without using a sorting algorithm. Instead of sorting the entire array, solve the problem using an efficient algorithm.

Function Signature

int kthSmallest(int arr[], int n, int k);
Note: Each unique number should be considered only once. For example, given the array [1, 1, 2], the 2nd smallest element is 2, not 1.

Input Format

Line 1: An integer n representing the number of elements in the array.
Line 2: n space-separated integers representing the elements of the array.
Line 3: An integer k, representing the order of the smallest element to find.
Constraints

1 ≤ n ≤ 10^5
-10^9 ≤ arr[i] ≤ 10^9
1 ≤ k ≤ n
Output Format

A single integer representing the Kth smallest element in the array. */

#include <stdio.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
  
    for(int i=0;i<k;i++)
    {
        int index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index=j;
            }
            
        }
        if(arr[i-1]==arr[index] && i>0)
        {
            k++;
        }
        int temp=arr[i];
        arr[i]=arr[index];
        arr[index]= temp;
        
    }
    return arr[k-1];
    
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}
