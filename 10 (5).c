/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, n1, n2, j, temp, trouve, search; 
    int tableau1[n1], tableau2[n2], fusion[n1+n2];
    
    printf("combien de nombres saisisserez vous tableau1?   ");
    scanf("%d", &n1);
    printf("combien de nombres saisisserez vous tableau2?  ");
    scanf("%d", &n2);
    for (i=0; i<=n1; i++){
        printf("entrez l'element %d de tableau1   ", i);
        scanf("%d", &tableau1[i]);
    }
    for (i=0; i<n2; i++){
        printf("entrez l'element %d de tableau2  ", i);
        scanf("%d", &tableau2[i]);
    }
    for (i=0; i<=n1; i++){
        fusion[i]=tableau1[i];
    }
    for (i=0; i<=n1 ; i++){
        fusion[n1+i]=tableau2[i];
    }
    for (i=0; i<=(n1+n2-1); i++){
        printf("l'element %d est %d \n", i, fusion[i]);
    }
    return 0;
}