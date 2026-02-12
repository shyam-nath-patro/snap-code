/* You are given an array that contains only the integers 7, 8, and 9 in arbitrary order. Your task is to write a function sortArray() that sorts the array in non-decreasing order. In other words, after sorting, all 7s should appear first, followed by all 8s, and finally all 9s. The function should modify the array in-place.

Function Signature

void sortArray(int arr[], int n);
Input Format

The first line contains an integer n denoting the size of the array.
The second line contains n space-separated integers. Each integer is either 7, 8, or 9.
Constraints

1 ≤ n ≤ 10^6
Each element in the array is one of {7, 8, 9}.
Output Format

After sorting the array, the sorted array is printed as space-separated integers on a single line. */

#include <stdio.h>
#include <stdlib.h>

void sortArray(int arr[], int n) {
int c7=0,c8=0,c9=0,k=0;

for(int i=0;i<n;i++){

        if(arr[i]==7){
        c7++;
        }
        else if(arr[i]==8) {
        c8++;
}
        else {
        c9++;}

}
for(int i=0;i<c7;i++){
        arr[k++]=7;
    }

for(int i=0;i<c8;i++){
        arr[k++]=8;}

for(int i=0;i<c9;i++){
        arr[k++]=9;
}

}




int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    sortArray(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
