/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    int h, m, s, h2, m2, s2;
    printf("entrez le premier instant (en format 24h HH:MM:SS)");
    scanf("%d:%d:%d", &h, &m, &s);
    if (h>23 || h<0 || m<0 || m>59|| s<0 || s>59){
        printf("format invalid");
        return 1;
    }
    printf("entrez le deuxieme instant (en format 24H HH:MM:SS)");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if (h2>23 || h2<0 || m2<0 || m2>59|| s2<0 || s2>59){
        printf("format invalid");
        return 1;
    }
    if(h<h2){
        printf("Le premier instant vient avant le deuxième ;");
    }else if (h==h2){
        if(m<m2){
            printf("Le premier instant vient avant le deuxième ;");
        }else if(m==m2){
            if(s<s2){
                printf("Le premier instant vient avant le deuxième ;");
            }else if(s==s2){
                printf("Il s'agit du même instant.");
            }else{
                printf("Le deuxième instant vient avant le premier ;");
            }
        }else{
            printf("Le deuxième instant vient avant le premier ;");
        }
    }else{
        printf("Le deuxième instant vient avant le premier ;");
    }
    return 0;
}

