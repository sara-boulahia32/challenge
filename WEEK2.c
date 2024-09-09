/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int instantValid(int h, int m, int s){
    return (h<=23 && h>=0 && m>=0 && m<=59&& s>=0 && s<=59);}
int comparerInstants(int h1, int m2, int s1, int h2, int m1, int s2){
    if (h1<h2) return 1;
    if (h1>h2) return -1;
    if (m1<m2) return 1;
    if (m1>m2) return -1;
    if (s1<s2) return 1;
    if (s1>s2) return -1;
    return 0;
}
int main(){
    int h1, m1, s1, h2, m2, s2;
    printf("entrez le premier instant (en format 24h HH:MM:SS)");
    scanf("%d:%d:%d", &h1, &m1, &s1);
    if (!instantValid){
        printf("format invalid");
        return 1;
    }
    printf("entrez le deuxieme instant (en format 24H HH:MM:SS)");
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if (!instantValid){
        printf("format invalid");
        return 1;
    }
    int resultat = comparerInstants(h1, m2, s1, h2, m1, s2);
    if (resultat<0){
        printf("Le deuxième instant vient avant le premier ;");
    }else if (resultat>0){
        printf("Le premier instant vient avant le deuxième ;");
    }else{
        printf("Il s'agit du même instant.");
    }
    
    return 0;
}

