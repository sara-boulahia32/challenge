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
    double a, b, c;
    printf("a= ");
    scanf("%lf", &a);
    printf("b= ");
    scanf("%lf", &b);
    printf("c= ");
    scanf("%lf", &c);
    printf("moyenne pondéré= %lf", pow((a*b*c), (1,0/3,0)));
    return 0;
}