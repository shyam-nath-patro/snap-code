/* Bhaskar participates in a lottery for n days, starting with an initial amount of money x. His fate follows certain rules for each day, and Bhaskar might either gain or lose money based on these conditions. Here's how it works:

For each day i:

If day i is divisible by 2, Bhaskar suffers a loss of 1/8th of his current amount.
If day i is divisible by 3, Bhaskar suffers a loss of 1/5th of his current amount.
If day i is divisible by both 2 and 3, Bhaskar gains 70% profit of his current amount. To enjoy his success, he takes a break and plays on the same day the next week, if possible.
If none of the above conditions apply, Bhaskar suffers a loss of 10% of his current amount.
Stop condition: If Bhaskar's money goes below 40% of the initial amount he had, at any point, he stops playing the lottery for the remaining days.

Lucky condition: If Bhaskar's money stays above 70% of the initial amount he had, at the end of the lottery, he is considered lucky, otherwise, unlucky.

At the end of n days, print the final amount Bhaskar has, the minimum amount he held from the start untill the end, and if Bhaskar was Lucky/Unlucky after playing lottery.

Input Format

The first line contains two inputs:

x (the initial amount of money)
n (the number of days Bhaskar wants to play the lottery)
Constraints

50 ≤ x ≤ 1000000
0 ≤ i ≤ 100
Output Format

Print in three lines:

Print the final amount (upto 2 decimal places) Bhaskar has,"After [n] days: [amount]", or, if he stops early, print "Stopped early after [i] days: [amount]".
Print the minimum amount (upto 2 decimal places) Bhaskar held from the start until the end of the game, "Minimum amount held by Bhaskar: [minAmount]".
Print "Lucky Bhaskar", if Bhaskar is considered Lucky by playing the lottery, otherwise, print "Better Luck Next Time!". */

#include <stdio.h>

int main() {

   double x;
    int i=1,n,stop=0;
    scanf("%lf %d",&x,&n);
    double orgn=x;
    double mina=x;
   
    if(x>=50){
    for(;i<=n;++i)
    {
        if(orgn<0.4*x)
        {   stop=i-1;
                break;
        }
        if(i%6==0)
        {
            orgn= orgn*1.7;
            i=i+6;
            continue;

        }
        else if(i%2==0)
        {
            orgn= orgn*0.875;
            
        }
        else if(i%3==0)
        {
            orgn= orgn*0.8;
            
        }
        else
        {
            orgn=orgn*0.9;
            
        }
        if(orgn<mina)
        {
            mina=orgn;
        }
        
        
        
    }
    if(stop)
    {
    
        printf("Stopped early after %d days: %.2f\n",stop,orgn);
    }
    else{
        printf("After %d days: %.2f\n",n,orgn);
    }
    printf("Minimum amount held by Bhaskar: %.2f\n",mina);
    if(orgn>0.7*x)
    {
        printf("Lucky Bhaskar\n");
    }
    else{
        printf("Better Luck Next Time!\n");
    }
    }
    
    return 0;
}
