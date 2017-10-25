/*
 ============================================================================
 Name        : ex2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int t[50],tn[50],tp[50];
	int nb1,nb2,k,i,j,n;
	nb1=1;
	printf("donner n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		printf("donner case",i);
		scanf("%d\n",&t[i]);
	}
	for(i=1;i<=n;i++){
		if(t[i]<0){tn[nb1]=t[i];nb1++;}
		else {
			tp[nb1]=t[i];nb1++;
	}}
	for(j=1;j<=nb1;j++){
		printf("%d\n",tp[j]);
	}
	for(k=1;k<=nb1;k++){
		printf("%d\n",tn[k]);
	}
	return EXIT_SUCCESS;
}
