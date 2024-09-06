/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    typedef struct{
        char nom[20];
        char prenom[20];
    }etudiant;
    etudiant p1;
    int notes[20];
    int n, i;
    
    printf("entrer nom : ");
    scanf("%s", p1.nom);
    printf("entrer prenom : ");
    scanf("%s", p1.prenom);
    printf("nombre de notes : ");
    scanf("%d", &n);
    if(n>20){
        printf("max 20 notes\n");
        return 1;
    }
    for (i=1;i<=n;i++){
        printf("entrer note %d : ", i);
        scanf(" %d", &notes[i]);
    }
    for(i=1; i<=n; i++){
        printf("note %d : %d \n", i, notes[i]);
    }
    

    return 0;
}