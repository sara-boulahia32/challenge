/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    typedef struct{
        char nom[20];
        char prenom[20];
        int age;
    }personne;
    personne p1;
    
    printf("entrer nom : ");
    scanf("%s", p1.nom);
    printf("entrer prenom : ");
    scanf("%s", p1.prenom);
    printf("entrer age : ");
    scanf("%d", &p1.age);

    return 0;
}