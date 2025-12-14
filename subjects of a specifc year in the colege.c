#include <stdio.h>

int main()
{
	int yr;
	char str,intern;
	printf("Enter Year:");
	scanf("%d",&yr);

	printf("\nEnter Your Branch(C/E/M):");
	scanf(" %c",&str);

	switch(yr)
	{
	case 1:
		printf("Physics\nChemistry\nMaths");
		break;
	case 2:
		switch(str)
		{
		case 'C':
			printf("C Programming\nComputer Organisation\neb Devlopment");
			break;
		case 'E':
			printf("Signal Processing\nLocal Design\nNetwork Analysis");
			break;
		case 'M':
			printf("Thermodynamics\nSolid Mechanics\nHeat Transfer");
			break;
		}
		break;
	case 3:
		switch(str)
		{
		case 'C':
			printf("Object-Oriented Programming\nDBMS\nData Structure&Algorithm");
			break;
		case 'E':
			printf("Analog Electrnoics\nEmbed Systems\nMicrocontrollers");
			break;
		case 'M':
			printf("Applied Mechanics\nKinematics\nMechatronics");
			break;
		}
		break;

	case 4:
		printf("\nInternship(Y/N):");
		scanf(" %c",&intern);

		if(intern == 'Y')
		{
			printf("Enrolled Into Internship Program\n");
		}
		else {

			switch(str)
			{
			case 'C':
				printf("Operating Systems\nComputer Network\nComputer Design\n");
				break;
			case 'E':
				printf("VLSI Design\nFibre Optics\nCommunication\nDigital Electrnoics\n");
				break;
			case 'M':
				printf("Mechanism of Materials(MOM)\nStrength of Material(SOM)\nMachine Design\n");
				break;
			}
		}
		break;

	}
	return 0;
}
