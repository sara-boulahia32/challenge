/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, i, j, k;
    printf("entres nombre de lignes");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            printf(" ");
        }
        for(k=0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");
    }
    

    return 0;
}