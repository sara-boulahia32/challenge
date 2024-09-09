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
    printf("une équation de second degré s'ecrit sous la forme ax²+bx+c\nEntrez a :  ");
    scanf("%d", &a);
    while(a!=0) {
        printf("entrez b : ");
        scanf("%d", &b);
        printf("entrez c : ");
        scanf("%d", &c);
        delta=pow(b,2)-4*a*c; 
        if (delta>0){
            x1=(-b+sqrt(delta))/(2*a);
            x2=(-b-sqrt(delta))/(2*a);
            printf("les solutions de l'equations sont : %f et %f\n", x1, x2);
        }else if(delta==0){
            x1=-b/(2*a);
            printf("l equation admet une solution est : %f\n", x1);
        }else{
            double complex x1=(-b-csqrt(-delta) * I)/(2*a);
            double complex x2=(-b+csqrt(-delta) * I)/(2*a);
            printf("l equation admet deux solutions complexes en c : %1f+%1fi et %1f+%1fi\n", creal(x1), cimag(x1), creal(x2), cimag(x2));
        }
        printf("Entrez a :  ");
        scanf("%d", &a);
    }
    if (a==0){
        printf("le coefficient a ne doit pas etre null.");
    }
    
    return 0;
}

