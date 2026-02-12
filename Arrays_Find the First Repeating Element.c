/* You are given an array of integers. Your task is to find the first repeating element in the array. An element is considered "repeating" if it occurs more than once. If multiple elements repeat, the answer is the one whose first occurrence appears earliest in the array. If no element repeats, print "No Repeating Element".

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print the first repeating element.
If there is no repeating element, print "No Repeating Element". */

#include <stdio.h>

int fre[2000001];

int main(){

    int n;

    scanf("%d",&n);

    int a[n];

for(int i=0;i<n;i++){

        scanf("%d",&a[i]);

        fre[a[i]+1000000]++;}

for(int i=0;i<n;i++){

        if(fre[a[i]+1000000] > 1){
            printf("%d",a[i]);

            return 0;}

}
printf("No Repeating Element");

return 0;

}
