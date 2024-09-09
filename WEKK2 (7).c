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
    int a, b, c;
    double delta, x1, x2;
    printf("Entrez a :  ");
    scanf("%d", &a);
    if(a>0){
        printf("positif");
    }else if(a<0){
        printf("negatif");
    }else{
        printf("nul");
    }
    return 0;
}

