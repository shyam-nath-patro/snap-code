/* You are given an array of integers. A majority element in an array is an element that appears more than ⌊n/2⌋ times, where n is the size of the array. Your task is to determine if the array contains a majority element. If it does, print the majority element; otherwise, print "No Majority Element".

Input Format

The first line contains an integer n, the number of elements in the array.
The second line contains n space-separated integers representing the array elements.
Constraints

1 ≤ n ≤ 10⁶
-10⁶ ≤ arr[i] ≤ 10⁶
Output Format

Print the majority element if one exists.
If no majority element exists, print "No Majority Element". */

#include <stdio.h>

int main() {
    int n,i,j,count=1;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
int x= a[0]; 
    for (i=1;i<n;i++) {
        if (a[i]==x) {
        count++;
        } else {
           count--;
        if (count == 0) {
          x=a[i];
             count = 1;
            }
        }
    }
    int count2 =0;
  for(i=0;i<n;i++){
      if(a[i]==x) count2++;
   }
   if(count2 >n/2){
      printf("%d",x);
      return 0;
   }else{
printf("No Majority Element");
       }
    return 0;
}
