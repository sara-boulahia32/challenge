/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, n, n2, j, trouve, search; 
    int compt=0;
    
    printf("nombre   ");
    scanf("%d", &n);
    
    int somme = 0;
    for (int i=1; i<=n; i++) {
        somme += i;
    }
    printf("La somme des %d premiers nombres naturels est : %d \n", n, somme);
    
    return 0;
}