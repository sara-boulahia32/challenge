/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, n1, n2, j, temp, trouve, search; 
    int tableau1[n1], tableau2[n2], fusion[n1+n2];
    
    printf("table de multiplication de ?    ");
    scanf("%d", &n1);
    
    for (i=10; i>=0; i--){
        printf("%d * %d = %d \n", n1, i, n1*i);
        
    }
    
    return 0;
}