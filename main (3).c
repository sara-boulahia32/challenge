/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float km, metre;
    printf("quelle est la vitesse en km/h, ");
    scanf("%f", &km);
    metre = km * 0.27778;
    printf("la distance en m/s, %f", metre);
    return 0;
}