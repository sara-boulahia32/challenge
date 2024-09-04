/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    double r; 
    printf("rayon: ");
    scanf("%lf", &r);
    printf("volume de la sphere est %f ", (4/3) * M_PI * (pow(r,3)));
    
    return 0;
}