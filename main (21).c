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
    if(a%4==0 && a%100==0){
        if (m==4 || m==6 || m==9 || m==11){
            if(j==30){
                printf("le jour d'apres est le 01.%d.%d \n", m+1, a);}
                else if(j>30){
                printf("impossible\n");
            }else if (j>0 && j<30){
                printf("le jour d'apres est le %d.%d.%d\n", j+1,m , a);
        }else if(m==2){
            if(j==28){
                printf("le jour d'apres est le 01.03.%d \n", a);}
            else if(j>28){
                printf("impossible\n");
            }else if(j>0 && j<28){
                printf("le jour d'apres est le %d.02.%d\n", j+1, a);
            }
        }
    else{
        if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
            if(j==30){
                printf("le jour d'apres est le 01.%d.%d \n", m+1, a);}
            else if(j>30){
                printf("impossible\n");
            }else if (j>0 && j<30){
                printf("le jour d'apres est le %d.%d.%d\n", j+1,m , a);
        }else if(m==2){
            if(j==29){
                printf("le jour d'apres est le 01.03.%d \n", a);}
            else if(j>29){
                printf("impossible\n");
            }else if(j>0 && j<29){
                printf("le jour d'apres est le %d.02.%d\n", j+1, a);
        }else if(m==12){
            if(j==30){
            printf("le jour d'apres est le 01.01.%d \n", a+1);}
            else if(j>30){
            printf("impossible\n");
            }else if(j>0 && j<30){
                printf("le jour d'apres est le %d.12.%d\n", j+1, a);
            }
        }
    }
    return 0;
}
    