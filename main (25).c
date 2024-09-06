/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world. 

*******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char entree1[100], entree2[100];
    int compteur=0;
    int i;
    
    scanf("%s", entree1);
    scanf("%s", entree2);
    if(strcmp(entree1,entree2)==0){
        printf("identique");
    }else{
        printf("non identique");
    }
    
    return 0;
}

    