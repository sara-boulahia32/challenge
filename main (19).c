/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

    
typedef struct{
    int jour;
    int mois;
    int ans;
    }dateexpedition;

typedef struct{
        char titre[20];
        char auteur[20];
        dateexpedition date;
    }livre;
    
livre l;

int main()
{
    
    
    int n, i;
    
    printf("entrer titre : ");
    scanf("%s", l.titre);
    printf("entrer auteur : ");
    scanf("%s", l.auteur);
    printf("entrez jour d'expedition : ");
    scanf("%d", &l.date.jour);
    printf("entrez mois d'expedition : ");
    scanf("%d", &l.date.mois);
    printf("entrez annee d'expedition : ");
    scanf("%d", &l.date.ans);
    affichage();

    

    return 0;
}

int affichage(){
    printf("nom du livre : %s\n", l.titre);
    printf("auteru du livre : %s\n", l.auteur);
    printf("date d expedition du livre : %d.%d.%d \n", l.date.jour, l.date.mois, l.date.ans);
}