/* You are given two sorted arrays of integers. Your task is to find:

Union: A sorted array containing all unique elements from both arrays.
Intersection: A sorted array containing only the common elements from both arrays.
You must write a code which takes two array inputs and outputs union and intersection of two arrays, if possible.

Input Format

The first line contains an integer n₁, the number of elements in the first array.
The second line contains n₁ space-separated integers.
The third line contains an integer n₂, the number of elements in the second array.
The fourth line contains n₂ space-separated integers.
Constraints

1 ≤ n₁,n₂ ≤ 10⁵
-10⁶ ≤ arr[i] ≤ 10⁶ for each element in both arrays
The input arrays are already sorted in non-decreasing order
Duplicates may appear in the input arrays.
The final union and intersection arrays should be printed in ascending order.
Output Format

First line: The union of the two arrays (all unique elements from both arrays, in ascending order).
Second line: The intersection of the two arrays (all common unique elements, in ascending order), or "Intersection Not Possible" if the intersection is empty. */

#include <stdio.h>
int main(){
 int n,n1;
scanf("%d",&n);
 int a[n];

for(int i=0;i<n;i++){
scanf("%d",&a[i]);}

scanf("%d",&n1);

 int b[n1];

for(int i=0;i<n1;i++){
   scanf("%d",&b[i]);}
    
int i=0,j=0,last=0;

while(i<n && j<n1){

    
    if(a[i] < b[j]){
      if(a[i] != last)
        {printf("%d ",a[i]);
         
            last = a[i];
        }
      i++;

    }

    else if(a[i] > b[j]){

     if(b[j] != last){
        printf("%d ",b[j]);}
        last = b[j];

        j++;

}

else{
     if(a[i] != last){
       printf("%d ",a[i]);
         }

        last = a[i];
   i++;
   j++;

}

}

while(i<n){

    if(a[i] != last){
      printf("%d ",a[i]);
        }
        last = a[i];

   i++;

}

while(j<n1){

     if(b[j] != last)
      {
      printf("%d ",b[j]);
       }
        last = b[j];

      j++;

}

printf("\n");

 i=0,j=0,last=0;
int found = 0;

while(i<n && j<n1){

 if(a[i]<b[j]) 
     {i++;
}
else if(a[i]>b[j]){
    j++;}

else{

    if(a[i]!=last)
      {
       printf("%d ",a[i]);
         last = a[i];

        found = 1;
      }
    i++;
}
}

if(found == 0)

printf("Intersection Not Possible");

return 0;

}
