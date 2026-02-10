/* Problem Statement

You are given an array of integers. Your task is to:

Find the maximum and minimum elements of the array.
Compute the median of the array.
Check if the difference between the maximum and minimum element (i.e., the range) is greater than the median.

Input Format

A single line of input containing n integers: arr[0] arr[1] ... arr[n-1]

Constraints

1 ≤ n ≤ 10⁵

-10⁶ ≤ arr[i] ≤ 10⁶

Output Format

Print "True" if the difference between the maximum and minimum element is greater than the median, else print "False". */

#include<stdio.h>

int main()
{
 int n , i , j ;
scanf("%d",&n);

int a[n];

 for( i=0;i<n;i++ )
 {
 scanf("%d",&a[i]);
 }

int min = a[0];
int max = a[0];

for(i=1;i<n;i++){
   if(a[i]<min)
   {
    min = a[i];}

    if(a[i]>max){
    max = a[i];
    }
}

for(i=0;i<n-1;i++){
 for( j=0 ; j<n-i-1 ; j++ )
 {
  if(a[j] > a[j+1]){
      
   int temp = a[j];
      
   a[j]= a[j+1];
      
   a[j+1] = temp ;
      
  }
     
 }
}

   int med ;

   if(n%2!=0){
    med = a[n/2];
   }
   else
   med = ( a[n/2 -1] + a[n/2] ) /2 ;

   if( max - min  > med )
   printf("True");
   else{
   printf("False");
   }

 return 0;
}
