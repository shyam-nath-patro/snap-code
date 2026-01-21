/* You are given an integer N. Your task is to find the nearest prime number to N.

If N itself is prime, return N.
If there are two prime numbers at the same minimum distance from N, return the smaller one.
Input Format

A single integer N
Constraints

1 ≤ N ≤ 10^6
Output Format

Print the nearest prime number to N. */

#include <stdio.h>
#include <math.h>
int main() {

     long long n;
    int i,flag,count=0;
    scanf("%lld",&n);
    
     if (n >= 2) {
        flag = 1;
        for (int j = 2; j <= n / 2; j++) 
        {
            if (n % j == 0) 
            {
                flag = 0;
                break;
            }
        }
        if (flag==1)
        {
            printf("%lld", n);
            return 0;
        }
    }
    for(int i=1;;i++)
    {
        if(n-i>=2)
        {
            flag =1;
            for(int j=2;j<=(n-i)/2;j++)
            {
                if((n-i) % j ==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%lld",n-i);
                break;
            }
        }
        
        if(n+i>=2){
            flag =1;
            for(int j=2;j<=(n+i)/2;j++)
            {
                if((n+i) % j ==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                printf("%lld",n+i);
                break;
            }
        
    
    }
    }
    
    
    return 0;
}
