/*
 ============================================================================
 Name        : ex3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
int k,i,n,r,res;
int tab[50];i=0;
printf("donner n");
scanf("%d",&n);

	do{
		r=n%2;
		tab[i]=r;
		i++;
		n=n/2;
	}while(n!=0);
for(k=1;k<=i;k++){printf("%d",tab[k]);}

	return EXIT_SUCCESS;
}
