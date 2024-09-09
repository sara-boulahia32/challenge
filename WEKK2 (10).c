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
    srand(time(NULL));
    
    const char *j[]={"LUNDI", "MARDI", "MERCREDI", "JEUDI", "VENDREDI", "SAMEDI", "DIMANCHE"};
    int i=rand()%7;
    printf("jour aleatoire de la semaine est %s", j[i]);
    return 0;
}

