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
    double x1, x2, y1, y2, z1, z2;
    printf("x1= ");
    scanf("%lf", &x1);
    printf("x2= ");
    scanf("%lf", &x2);
    printf("y1= ");
    scanf("%lf", &y1);
    printf("y2= ");
    scanf("%lf", &y2);
    printf("z1= ");
    scanf("%lf", &z1);
    printf("z2= ");
    scanf("%lf", &z2);
    printf("distance entre a et b= %lf", sqrt(pow((x1-x2),2) + pow((y1-y2),2) + pow((z1-z2),2)));
    return 0;
}