/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float C, K;


    printf("quelle est la temperature en celcius, ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("la temperature en kelvin, %f", K);
    return 0;
}