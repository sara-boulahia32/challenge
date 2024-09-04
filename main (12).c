/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int n, i, nv, j, temp; 
    printf("combien de nombres saisisserez vous?");
    scanf("%d", &n);
    
    int tableau1[n];
    int tableau2[n];
    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau1[i]);
    }
    for (i = 0; i<n; i++)
        {
            tableau2[i]=tableau1[i];
        }
    printf("le nouveau tableau est:");    
    for (i=0; i<n; i++){
        printf("%d : %d \n", tableau1[i], tableau2[i]);
    }
    return 0;
}