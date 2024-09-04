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
    int n; 
    printf("entrez un nombre de 4 chiffres   ");
    scanf("%4d", &n);
    int n1=n/1000;
    int n2=(n/100)%10;
    int n3=(n/10)%10;
    int n4=n%10;
    printf("%d devient %d%d%d%d", n, n4, n3, n2, n1);
    
    return 0;
}