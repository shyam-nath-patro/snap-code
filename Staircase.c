/* Staircase detail

This is a staircase of size :

   #
  ##
 ###
####
Its base and height are both equal to . It is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size .

Function Description

Complete the  function with the following parameter(s):

: an integer
Print

Print a staircase as described above. No value should be returned.
Note: The last line is not preceded by spaces. All lines are right-aligned.

Input Format

A single integer, , denoting the size of the staircase. */

#include<stdio.h>
 int main()
 {
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         for(int k=2; k <= n-i+1;k++)
         {
             printf(" ");
         }
         for(int j=1;j<=i;j++)
         {
             printf("#");
         }
         printf("\n");
     }
     return 0;
 }
