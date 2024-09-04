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
    int i, n, p;
    
    
    while (1){
        printf("base  ");
        scanf("%d", &n);
        
        if (n<0){
            printf("error");
            return 1;
        }
        printf("esxpo  ");
        scanf("%d", &p);
        if (p<=0){
            printf("error");
            return 1;
        }
        printf("%d ^ %d = %f \n", n, p, pow(n,p));
    }
    return 0;
}