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
    
    int tableau[n];
    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau[i]);
        
    }
    nv=tableau[0];
    
    for (i = 0; i<n-1; i++)
        {
            int min;
            for (j=i; j<n-1-i; j++){
                if (tableau[j]>tableau[j+1])
                    {
                        min=tableau[j]; 
                tableau[j]=tableau[j+1];
                        tableau[j+1] = min;
                    }    
            
        }
        }
    printf("le nouveau tableau est:");    
    for (i=0; i<n; i++){
        printf("%d \n", tableau[i]);
    }
    return 0;
}