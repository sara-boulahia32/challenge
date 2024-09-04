/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, nv, j, temp, trouve, search; 
    int n=0;
    int tableau[n];
    
    printf("combien de nombres saisisserez vous?");
    scanf("%d", &n);

    for (i=0; i<n; i++){
        printf("entrez l'element %d \n", i);
        scanf("%d", &tableau[i]);
    }
    trouve=0;
    printf("entrez l elemnt a changer : ");
    scanf("%d", &search);
    for (i = 0; i<n; i++)
        {
            if (search==i){
                printf("par quoi changer? %d \n", tableau[i]);
                scanf("%d", &nv);
                nv=tableau[i];
                printf("changeé avec succés");
                for (i=0; i<n; i++){
                    printf("l'element %d est %d \n", i, nv);
                }   
                
            }else{
                printf("introuvable");
            }
            break;
        }
    return 0;
}