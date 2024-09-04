/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, nv, j, somme, trouve, search; 
    int n=0;
    int tableau[n];
    
    printf("combien de nombres saisisserez vous?");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau[i]);
        somme+=tableau[i];
    }
    
    printf("la moyenne est %d ", somme/n);
    return 0;
}