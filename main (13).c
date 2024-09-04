/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n, i, nv, j, temp, trouve, search; 
    int tableau[n];
    printf("combien de nombres saisisserez vous?");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau[i]);
    }
    
    for (i = 0; i<n/2; i++)
        {
            temp=tableau[n-i-1];
            tableau[n-i-1]=tableau[i];
            tableau[i]=temp;
        }
    printf("le nouveau tableau est:");    
    for (i=0; i<n; i++){
        printf("%d \n", tableau[i]);
    }
    return 0;
}