#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char str;
    int yr,intern;
    
    scanf("%d %c",&yr,&str);
    
    switch(yr)
    {
        case 1:printf("Physics\nChemistry\nMaths\n");
            break;
            
            
        case 2: switch(str)
        {
            case 'C':printf("C Programming\nComputer Organization & Architecture\nWeb Development\n");
            break;
            case 'E':printf("Signal Processing\nLogic Design\nNetwork Analysis\n");
            break;
            case 'M':printf("Thermodynamics\nSolid Mechanics\nHeat Transfer\n");
            break;
            default:printf("-1\n");
                break;
        }
            break;
            
        case 3: switch(str)
        {
            case 'C':printf("Object-oriented Programming\nDBMS\nData Structures & Algorithms\n");
            break;
            case 'E':printf("Analog Electronics\nEmbedded Systems\nMicrocontrollers\n");
            break;
            case 'M':printf("Applied Mechanics\nKinematics\nMechatronics\n");
            break;
                default:printf("-1\n");
                break;
        }
            break;
            
        case 4:
        scanf(" %d",&intern);

        switch(intern)
        {
            case 1: printf("Enrolled into Internship Program\n");
                break;
        
            case 0:

            switch(str)
            {
            case 'C':
                printf("Operating Systems\nComputer Networks\nCompiler Design\n");
                break;
            case 'E':
                printf("VLSI Design\nFiber-optic Communication\nDigital Electronics\n");
                break;
            case 'M':
                printf("Mechanism of Materials (MOM)\nStrength of Materials (SOM)\nMachine Design\n");
                break;
                    default:printf("-1\n");
                break;
            }
           break; 
                default:printf("-1\n");
                break;
        }
        break;
            default:printf("-1\n");
                break;
    }
    return 0;
}
