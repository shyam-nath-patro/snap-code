#include <stdio.h>

int main()
{
    int sal;
    int hra=0;
    int da=0;
    printf("Enter your salary: ");
    scanf("%d",&sal);
    
    if(sal<=10000)
    {
       hra = sal*0.80;
       da= sal*0.20;
    }
    else if(sal>10000 && sal<= 20000)
    {
        hra = sal*0.25;
        da = sal*0.90;
    }
    else if(sal>20000)
    {
        hra = sal*0.30;
        da = sal*0.95;
    }
    printf("The Gross Salary :%d",(sal+hra+da));

    return 0;
}
