/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdio.h>
int main()
{
    int i, n1, n2, m, j;
    int somme=0;
    printf("table de multiplication de ?    ");
    scanf("%d", &n1);
    m=n1*i;
    for (i=10; i>=0; i--){
        printf("%d * %d = %d \n", n1, i, m);
        somme+=m;
    }
    
    printf("somme produit %d ", somme);
    
    return 0;
}