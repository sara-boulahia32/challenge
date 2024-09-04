/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nom[50];
    char prenom[50];
    char sexe[10];
    char mail[200];
    int age;
    printf("entrez votre nom :");
    scanf("%49s", nom);
    printf("entrez votre prenom : ");
    scanf("%49s", prenom);
    printf("entrez votre age : ");
    scanf("%d", &age);
    printf("entrez votre sexe : ");
    scanf("%9s", sexe);
    printf("entrez votre mail : ");
    getchar();
    fgets(mail, sizeof(mail),stdin);
    printf("%s %s vous avez %d ans, vous etes %s. votre adresse mail est %s", nom, prenom, age, sexe, mail);

    return 0;
}

