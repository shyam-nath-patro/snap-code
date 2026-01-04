/* You are given a single integer N.

Your task is to determine whether N is divisible by 4, using only bitwise operations.

You are NOT allowed to use the modulo operator (%), multiplication, or division.

Input Format

A single integer N
(The input will always contain a valid integer literal — no alphabets, no symbols.)

Constraints

Input must be within signed 32-bit range: −2,147,483,648 to 2,147,483,647
If the value is outside this range → print: Out of Range
If within range, check divisibility using bitwise logic only.
Output Format

Print exactly one of the following:

Divisible
Not Divisible
Out of Range

(No extra spaces or text.)

*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long n;
    scanf("%ld",&n);
    if(n> 2147483647 || n< -2147483648)
    {
        printf("Out of Range");
        return 0;
    }
    else if((n&3)==0)
    {
        printf("Divisible");
    }
    else
    {
        printf("Not Divisible");
    }
    return 0;
}
