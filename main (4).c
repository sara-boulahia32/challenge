/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{

    float C;
    printf("quelle est la temperature en celcius, ");
    scanf("%f", &C);
    if (C < 0) {
        printf("Solide");
    }
    else if (0 <= C < 100) {
        printf("Liquide");
    }
    else if (C >= 100){
        printf("gaz");
    }
    return 0;
}