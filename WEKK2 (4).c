/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main (){
    int  b, c,n, i;
    double somme=0;
    double m;
    char a;
    double notes[100];
    printf("entrez charctere :  ");
    scanf("%c", &a);
    if (isalpha(a)){
        printf("il fait parti des alphabet, ");
        if(isupper(a)){
            printf("et il est majuscule.\n");
        }else if(islower){
            printf("et il est minuscule.\n");
        }
    }else{
        printf("n'est pas une lettre\n");
    }
    return 0;
}

