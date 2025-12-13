/*Airlines receive frequent complaints because their lounge access rules seem inconsistent.
Economy passengers rarely get in unless their loyalty tier is high.
Business passengers may or may not get in depending on how early they arrive.
First class passengers almost always enter.

nput Format:

ticket_class loyalty_tier arrival_early_minutes

ticket_class: E, B, F

loyalty_tier: 0–2

arrival_early_minutes: integer ≥ 0

Possible Outputs:

Access Granted
Conditional Access
No Access

Sample Format Inputs:

B 0 120
E 2 10*/

#include <stdio.h>

int main()
{
	int loyal,min;
	char class;
	scanf("%c %d %d",&class,&loyal,&min);
	switch(class) {

	case'e':
			switch(loyal)
			{
			case 0:

				printf("No Access");

				break;
			case 1:
				if(min>60)
				{
					printf("Conditional Access");

				}
				else
				{
					printf("No Access");
				}
				break;
			case 2:
				printf("Access Granted");
			}
		break;

	case'b':
			switch(loyal)
			{
			case 0:
				if(min>60)
				{
					printf("Conditional Access");

				}
				else
				{
					printf("No Access");
				}
				break;
			case 1:
				if(min>60)
				{
					printf("Conditional Access");

				}
				else
				{
					printf("No Access");
				}
				break;
			case 2:
				if(min>60)
				{
					printf("Conditional Access");

				}
				else
				{
					printf("No Access");
				}
				break;
			}
		break;
	case'f':
			printf("Access Granted");
		break;
	}
	return 0;
}
