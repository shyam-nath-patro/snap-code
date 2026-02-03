#include <stdio.h>

typedef struct {
	int roll_no;
	char name[20];
	double marks;
} std;

int main()
{
	int n;
	scanf("%d",&n);
	std x[n];

	for(int i=0; i<n; i++)
	{
		scanf("%d",&x[i].roll_no);
		scanf("%s",&x[i].name);
		scanf("%lf",&x[i].marks);

	}
	int m=0;
	for(int i=0; i<n; i++)
	{
		if(x[i].marks>x[m].marks)
		{
			m=i;
		}

	}
	printf("%d\n",x[m].roll_no);
	printf("%s\n",x[m].name);
	printf("%.2f\n",x[m].marks);



	return 0;
}
