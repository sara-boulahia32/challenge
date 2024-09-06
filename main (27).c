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
	char entree1[100], entree2[2];
	int compteur=0;
	int i, lenght, temp;
    printf("ecrivez un mot :");
	scanf("%s", entree1);
	lenght=strlen(entree1);
	printf("ecrivez une lettre : ");
	scanf("%s", entree2);
	for(i=0; i<lenght; i++) {
	    if(entree1[i]==entree2[0]){
	        compteur++;
	    }
	}
	printf("%d", compteur);

	return 0;
}

