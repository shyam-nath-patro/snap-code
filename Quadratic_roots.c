#include <stdio.h>
#include<math.h>
int main()
{
    int a,b,c;
    double root1,root2;
    scanf("%d %d %d",&a,&b,&c);
    double det= b*b-4*a*c;
    if(det>0)
    {
         root1= (-b + sqrt(det))/2*a;
         root2= (-b - sqrt(det))/2*a;
         printf("Roots are Real and Distinct\n");
         printf("Root 1:%.2f\n",root1);
         printf("Root 2:%.2f\n",root2);
    }
    else if(det==0)
    {
        root1= -b/2*a;
        printf("Roots are equal\n");
        printf("Root :%.2f",root1);
    }
    else
    {
        root1= -b/2*a;
        int imagery= sqrt(-det)/2*a;
        printf("Roots are imaginary\n");
        printf("Root 1 =  %.2f + %.2f i\n",root1,imagery);
        printf("Root 1 =  %.2f - %.2f i\n",root1,imagery);
    }

    return 0;
}
