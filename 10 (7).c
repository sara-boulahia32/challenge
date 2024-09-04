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
    char bit[32];
    printf("entrez un nombre de   ");
    scanf("%d", &n);
    for (int i=0; i<33; i++){
        bit[i]='0';
    }
    for(int i=32; i>=0; i--){
        if (n%2==1){
            bit[i]='1';
        }
        n/=2;
    }
    printf("binaire   %s   ", bit);
    
    return 0;
}