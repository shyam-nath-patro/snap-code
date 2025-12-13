#include <stdio.h>

int main()
{
   int n500,n100,n50,n20,n10,n5,n2,n1;
   n500=n100=n50=n20=n10=n5=n2=n1=0;
   int amount;
   printf("Enter the amount: ");
   scanf("%d",&amount);
   
   if (amount>=500)
   {
       n500=amount/500;
       amount = amount - (n500*500);
   }
   if(amount>=100)
   {
       n100=amount/100;
       amount= amount-(n100*100);
   }
  if(amount>=50)
   {
       n50=amount/50;
       amount = amount-(n50*50);
   }
   if(amount>=20)
   {
       n20=amount/20;
       amount = amount-(n20*20);
   }
   if(amount>=10)
   {
       n10=amount/10;
       amount = amount-(n10*10);
   }
   if(amount>=5)
   {
       n5=amount/5;
       amount = amount-(n5*5);
   }
   if(amount>=2)
   {
       n2=amount/2;
       amount = amount-(n2*2);
   }
   if(amount>=1)
   {
       n1=amount;
   }
   printf("\nTHE DENOMINATIONS:\n");
   printf("500:%d\n100:%d\n50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d\n",n500,n100,n50,n20,n10,n5,n2,n1);

    return 0;
}
