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
	int i, lenght, temp;

	scanf("%s", entree1);
	lenght=strlen(entree1);
	for(i=0; i<lenght/2; i++) {
		char temp=entree1[i];
		entree1[i]=entree1[lenght-1-i];
        entree1[lenght-1-i]=temp;
        

	}
	printf("%s", entree1);

	return 0;
}

