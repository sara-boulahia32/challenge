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
    
    
    while (1){
        printf("entier positif se terminant par 0   ");
        scanf("%d", &n);
        if(n==0){
            break;
        }
        if(n>0){
            somme+=n;
        compt++;
        }else{
            printf("positive seulement");
        }
       
    }
    printf("moyenne est %d ", somme/compt);
    return 0;
}