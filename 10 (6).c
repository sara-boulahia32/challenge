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
    int n; 
    printf("entrez un nombre  ");
    scanf("%d", &n);
    if (n%2){
        printf("impaire");
    }else{
        printf("paire");
    }
    
    return 0;
}