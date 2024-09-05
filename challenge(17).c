/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, p, somme, compt;
    char entree[2];
    
    
    while (1){
        printf("je vais savoir est ce que tu saisi une voyelle \n saisi une lettre en minuscule   :  ");
        scanf("%s", entree);
        switch (entree[0])
        {
        case 'a':
        printf("il s agit bien d'une voyelle\n");
        break;
        case 'o':
        printf("il s agit bien d'une voyelle\n");
        break;
        case 'i':
        printf("il s agit bien d'une voyelle\n");
        break;
        case 'e':
        printf("il s agit bien d'une voyelle\n");
        break;
        case 'u':
        printf("il s agit bien d'une voyelle\n");
        break;
        default:
        printf("il s agit dune lettre \n");
        break;
        }
    }
    printf("moyenne est %d ", somme/compt);
    return 0;
}