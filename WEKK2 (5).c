/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main (){
    int  b, c,n, i;
    double somme=0;
    double m;
    char a;
    double notes[100];
    printf("combien de notes saississerz vous :  ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        printf("entrez note %d ", i+1);
        scanf("%lf", &notes[i]);
    }
    for(i=0; i<n; i++){
        somme+=notes[i];
    }
    m=somme/n;
    if (m<10){
        printf("récalé\n");
    }else if(m<12 && m>=10){
        printf("mention passable\n");
    }else if(m>=12 && m<14){
        printf("mention assez bien\n");
    }else if(m>=14 && m<16){
        printf("mention bien\n");
    }else if(m>=16){
        printf("mention tres bien\n");
    }else{
        printf("??????note comprise entre 0 et 20\n");
    }
    return 0;
}

