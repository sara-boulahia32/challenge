/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n, i, f, multiplication; 
    printf("combien de nombres saisisserez vous?");
    scanf("%d", &n);
    printf("facteur de multiplication");
    scanf("%d", &f);
    
    int tableau[n];
    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau[i]);
        
    }
    for (i=0; i<n; i++){
        printf("%d * %d = %d \n", f, tableau[i], multiplication); 
    }    
    return 0;
}