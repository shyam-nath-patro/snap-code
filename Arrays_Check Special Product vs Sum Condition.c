/* You are given an array of integers. Your task is to check if the product of the second largest and first smallest element is greater than the sum of the second smallest and first largest element.

Input Format

First line contains an integer n, the number of elements in the array.

Second line contains n space-separated integers.

Constraints

4 ≤ n ≤ 10⁵

-10⁶ ≤ arr[i] ≤ 10⁶

Output Format

Print "True" if (second_largest * smallest) > (second_smallest + largest), otherwise print "False". */

#include<stdio.h>
#include<limits.h>

int main()
{
 int n;
scanf("%d",&n);

int arr[n],i;

 for(i=0;i<n;i++)
 scanf("%d",&arr[i]);

int sm=INT_MAX, lg=INT_MIN;

for(i=0;i<n;i++){
   if(arr[i]<sm)
   {
 sm=arr[i];
   }

    if(arr[i]>lg)
    {
   lg=arr[i];
    }
}

int ssm=INT_MAX;
int slg=INT_MIN;

 for(i=0;i<n;i++)
{
   if(arr[i]!=sm && arr[i]<ssm)
   {
    ssm=arr[i];
   }
}

for(i=0;i<n;i++){
    if(arr[i]!=lg && arr[i]>slg)
    {
    slg=arr[i];
    }
    }

   if(slg*sm > ssm+lg)
   printf("True");
   else
   printf("False");

 return 0;
}
