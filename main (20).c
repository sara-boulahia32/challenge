/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
   

int main()
{
    
    
    int j, m, a, n, i;
    
    printf("entrer annee : ");
    scanf("%d", &a);
    printf("entrer mois : ");
    scanf("%d", &m);
    printf("entrez jour : ");
    scanf("%d", &j);
    
    switch (m)
    {
        //31
        case 1:
        if(j==31){
        printf("le jour d'apres est le 01.02.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
            printf("le jour d'apres est le %d.01.%d", j+1, a);
        }
        break;
        case 3:
        if(j==31){
        printf("le jour d'apres est le 01.04.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.03.%d", j+1, a);
        }
        break;
        case 5:
        if(j==31){
        printf("le jour d'apres est le 01.06.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.05.%d", j+1, a);
        }
        break;
        case 7:
        if(j==31){
        printf("le jour d'apres est le 01.08.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.07.%d", j+1, a);
        }
        break;
        case 8:
        if(j==31){
        printf("le jour d'apres est le 01.09.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.08.%d", j+1, a);
        }
        break;
        case 10:
        if(j==31){
        printf("le jour d'apres est le 01.11.%d \n", a);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.10.%d", j+1, a);
        }
        break;
        case 12:
        if(j==31){
        printf("le jour d'apres est le 01.01.%d \n", a+1);}
        if(j>31){
            printf("impossible\n");
        }else{
           printf("le jour d'apres est le %d.12.%d", j+1, a);
        }
        break;
        //30
        case 4:
        if(j==30){
        printf("le jour d'apres est le 01.05.%d \n", a);}
        if(j>30){
            printf("impossible\n");
        }else{
            printf("le jour d'apres est le %d.04.%d\n", j+1, a);
        }
        break;
        case 6:
        if(j==30){
        printf("le jour d'apres est le 01.07.%d \n", a);}
        if(j>30){
            printf("impossible\n");
        }else{
            printf("le jour d'apres est le %d.06.%d\n", j+1, a);
        }
        break;
        case 9:
        if(j==30){
        printf("le jour d'apres est le 01.10.%d \n", a);}
        if(j>30){
            printf("impossible\n");
        }else{
            printf("le jour d'apres est le %d.09.%d\n", j+1, a);
        }
        break;
        case 11:
        if(j==30){
        printf("le jour d'apres est le 01.12.%d \n", a);}
        else if(j>30){
            printf("impossible\n");
        }else{
            printf("le jour d'apres est le %d.11.%d\n", j+1, a);
        }
        break;
        default:
        {
            printf("mois max 12");
        }
        
    }
    return 0;
}

