/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int tableau[]={1, 2, 3, 4, 5};
    printf("element1 : %d \n ", *tableau);
    printf("element2 : %d \n ", *(tableau+1));
    printf("element3 : %d \n ", *(tableau+2));
    printf("element4 : %d \n ", *(tableau+3));
    printf("element5 : %d \n ", *(tableau+4));
    
    return 0;
}