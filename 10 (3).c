/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int i, n1, n2, j, trouve, search; 
    int compt=0;
    int tableau1[n1], tableau2[n2], fusion[n1+n2];
    
    printf("nombre   ");
    scanf("%d", &n1);
    
    for (i=1; i<n1; i++){
        if(n1%i==0){
            compt++;
        }
    }
    if (compt==1){
        printf("nombre premier");
    }else{
        printf("non premier");
    }
    
    return 0;
}