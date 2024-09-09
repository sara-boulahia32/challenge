/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
const char* moisEnLettre(int m){
    switch(m){
        case 1: return "janvier";
        case 2: return "fevrier";
        case 3: return "mars";
        case 4: return "avril";
        case 5: return "mai";
        case 6: return "juin";
        case 7: return "huillet";
        case 8: return "aout";
        case 9: return "septempre";
        case 10: return "octobre";
        case 11: return "novembre";
        case 12: return "decembre";
        default : return "mois entre 01 ET 12";
    }}
int main (){
    int  j, m, a;
    
    printf("Entrez une date (JJ-MM-AA):  ");
    scanf("%d/%d/%d", &j, &m, &a);
    //ASCII (American Standard Code for Information Interchange)
    //97-122 : a-z (Lettres minuscules)
    //65-90 : A-Z (Lettres majuscules)
    //if (isupper(caractere))
    system("cls");
    printf("la date est le %02d-%s-%d", j, moisEnLettre(m), a);
    return 0;
}

