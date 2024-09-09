/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
int main (){
    int  b, c;
    char a;
    
    printf("Entrez un alphabet :  ");
    scanf("%c", &a);
    //ASCII (American Standard Code for Information Interchange)
    //97-122 : a-z (Lettres minuscules)
    //65-90 : A-Z (Lettres majuscules)
    //if (isupper(caractere))
    int lettre=(int)a;
    if(lettre<=90 && lettre>=65){
        printf("il s agit d'une lettre majuscule, ");
    }else {
        printf("n'est pas une lettre");
    }
    return 0;
}

