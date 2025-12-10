/*Steel is graded based on its properties of hardness, carbon content, and tensile strength. The grade is determined by the following conditions:

1. Hardness must be greater than 50.
2. Carbon content must be less than 0.7.
3. Tensile strength must be greater than 5600.
Based on these conditions, the grades are assigned as follows:

10: If all three conditions are met.
9 : If conditions (i) and (ii) are met.
8 : If conditions (ii) and (iii) are met.
7 : If conditions (i) and (iii) are met.
6 : If only one condition is met.
5 : If none of the conditions are met.
Your task is to determine the grade of steel based on the provided values of hardness, carbon content, and tensile strength.

Input Format

Three space-separated values:

h: Hardness of the steel (an integer).
c: Carbon content of the steel (a float).
t: Tensile strength of the steel (an integer).*/

#include <stdio.h>

int main() {
    int h, t;
    float c;
    int tcondn = 0;
    int grade;

    scanf("%d %f %d", &h, &c, &t);

    int cond1 = (h > 50);
    int cond2 = (c < 0.7);
    int cond3 = (t > 5600);

    if (cond1)
    {
        tcondn++;
    }
        
    if (cond2) 
     {
        tcondn++;
     }
    if (cond3) 
       {
        tcondn++;
     }

    if (cond1 && cond2 && cond3) 
    {
        grade = 10;
    } 
    else if (cond1 && cond2) 
    {
        grade = 9;
    } 
    else if (cond2 && cond3) 
    {
        grade = 8;
    } 
    else if (cond1 && cond3) 
    {
        grade = 7;
    } 
    else if (tcondn == 1) 
    {
        grade = 6;
    } 
    else 
    {
        grade = 5;
    }

    printf("The grade of the steel is: %d\n", grade);

    if (tcondn == 3) 
    {
        printf("All of the conditions met.\n");
    } 
    else if (tcondn == 2) 
    {
        printf("Two conditions met.\n");
    } 
    else if (tcondn == 1) 
    {
        printf("Only one condition met.\n");
    } 
    else 
    {
        printf("None of the conditions met.\n");
    }

    return 0;
}
