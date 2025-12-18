/*Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.

Formula

image

where the discriminant D = b^2 − 4ac determines the type of roots:

If D>0, print "Real and Distinct"
If D=0, print "Real and Equal"
If D<0, print "Complex"
Note: You may use the sqrt() function from math.h to compute square roots.

Input Format

A single line containing three space-separated integers: a b c
Constraints

−1000 ≤ a, b, c ≤ 1000
a ≠ 0
Output Format

If the roots are real, print:

Roots: [root1], [root2]
Type: [TYPE]
where,

root1 and root2 are the real roots rounded to 2 decimal places
TYPE is either "Real and Distinct" or "Real and Equal".
If the roots are complex, print:

Roots: [real_part] + [imaginary_part]i, [real_part] - [imaginary_part]i
Type: Complex
where,

real_part is the real part of the root (rounded to 2 decimal places).
imaginary_part is the imaginary part (rounded to 2 decimal places).*/

#include <stdio.h>
#include <math.h>

int main() {

    double a,b,c;
    double root1,root2;
    double imagery;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a!=0){
    double det = ((b*b)-(4.0*(a*c)));
    if(det>0)
    {
        root1 = ((-b + sqrt(det))/(2.0*a));
        root2 = ((-b - sqrt(det))/(2.0*a));
        printf("Roots: %.2f, %.2f\n",root1,root2);
        printf("Type: Real and Distinct");
    }
    else if(det==0)
    {
        root1= (-b/(2.0*a));
        root2= (-b/(2.0*a));
        if(root1 == -0.0)
            printf("Roots: 0.00, 0.00\n");
        else
        printf("Roots: %.2f, %.2f\n",root1,root2);
        printf("Type: Real and Equal");
    }
    else if(det<0){
        root1= (-b/(2.0*a));
        imagery= (sqrt(-det)/(2.0*a));
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\n",root1,imagery,root1,imagery);

        printf("Type: Complex");
        
    }
    }
    return 0;
}
