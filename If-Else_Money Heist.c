/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.*/

#include <stdio.h>

int main() {
    int d0,d1,d2,d3,d4,d5,d6,d7,d8,d9;
    int index,rotation,temp;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",&d0,&d1,&d2,&d3,&d4,&d5,&d6,&d7,&d8,&d9);
    scanf("%d %d",&index,&rotation);
    if(index==0)
    {
        temp=d0+rotation;
        if(temp>=10)
            d0=temp-10;
        else
            d0=temp;
    }
    else if(index==1)
    {
         temp=d1+rotation;
        if(temp>=10)
            d1=temp-10;
        else
            d1=temp;
    }
    else if(index==2)
    {
         temp=d2+rotation;
        if(temp>=10)
            d2=temp-10;
        else
            d2=temp;
    }
    else if(index==3)
    {
         temp=d3+rotation;
        if(temp>=10)
            d3=temp-10;
        else
            d3=temp;
    }
    else if(index==4)
    {
         temp=d4+rotation;
        if(temp>=10)
            d4=temp-10;
        else
            d4=temp;
    }
    else if(index==5)
    {
         temp=d5+rotation;
        if(temp>=10)
            d5=temp-10;
        else
            d5=temp;
    }
    else if(index==6)
    {
         temp=d6+rotation;
        if(temp>=10)
            d6=temp-10;
        else
            d6=temp;
    }
    else if(index==7)
    {
         temp=d7+rotation;
        if(temp>=10)
            d7=temp-10;
        else
            d7=temp;
    }
    else if(index==8)
    {
         temp=d8+rotation;
        if(temp>=10)
            d8=temp-10;
        else
            d8=temp;
    }
    else if(index==9)
    {
         temp=d9+rotation;
        if(temp>=10)
            d9=temp-10;
        else
            d9=temp;
    }
    scanf("%d %d",&index,&rotation);
    if(index==0)
    {
        temp=d0+rotation;
        if(temp>=10)
            d0=temp-10;
        else
            d0=temp;
    }
    else if(index==1)
    {
         temp=d1+rotation;
        if(temp>=10)
            d1=temp-10;
        else
            d1=temp;
    }
    else if(index==2)
    {
         temp=d2+rotation;
        if(temp>=10)
            d2=temp-10;
        else
            d2=temp;
    }
    else if(index==3)
    {
         temp=d3+rotation;
        if(temp>=10)
            d3=temp-10;
        else
            d3=temp;
    }
    else if(index==4)
    {
         temp=d4+rotation;
        if(temp>=10)
            d4=temp-10;
        else
            d4=temp;
    }
    else if(index==5)
    {
         temp=d5+rotation;
        if(temp>=10)
            d5=temp-10;
        else
            d5=temp;
    }
    else if(index==6)
    {
         temp=d6+rotation;
        if(temp>=10)
            d6=temp-10;
        else
            d6=temp;
    }
    else if(index==7)
    {
         temp=d7+rotation;
        if(temp>=10)
            d7=temp-10;
        else
            d7=temp;
    }
    else if(index==8)
    {
         temp=d8+rotation;
        if(temp>=10)
            d8=temp-10;
        else
            d8=temp;
    }
    else if(index==9)
    {
         temp=d9+rotation;
        if(temp>=10)
            d9=temp-10;
        else
            d9=temp;
    }
    scanf("%d %d",&index,&rotation);
    if(index==0)
    {
        temp=d0+rotation;
        if(temp>=10)
            d0=temp-10;
        else
            d0=temp;
    }
    else if(index==1)
    {
         temp=d1+rotation;
        if(temp>=10)
            d1=temp-10;
        else
            d1=temp;
    }
    else if(index==2)
    {
         temp=d2+rotation;
        if(temp>=10)
            d2=temp-10;
        else
            d2=temp;
    }
    else if(index==3)
    {
         temp=d3+rotation;
        if(temp>=10)
            d3=temp-10;
        else
            d3=temp;
    }
    else if(index==4)
    {
         temp=d4+rotation;
        if(temp>=10)
            d4=temp-10;
        else
            d4=temp;
    }
    else if(index==5)
    {
         temp=d5+rotation;
        if(temp>=10)
            d5=temp-10;
        else
            d5=temp;
    }
    else if(index==6)
    {
         temp=d6+rotation;
        if(temp>=10)
            d6=temp-10;
        else
            d6=temp;
    }
    else if(index==7)
    {
         temp=d7+rotation;
        if(temp>=10)
            d7=temp-10;
        else
            d7=temp;
    }
    else if(index==8)
    {
         temp=d8+rotation;
        if(temp>=10)
            d8=temp-10;
        else
            d8=temp;
    }
    else if(index==9)
    {
         temp=d9+rotation;
        if(temp>=10)
            d9=temp-10;
        else
            d9=temp;
    }
     printf("%d %d %d %d %d %d %d %d %d %d",d0,d1,d2,d3,d4,d5,d6,d7,d8,d9);
    return 0;
}
