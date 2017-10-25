/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
 int t1[50],t2[50];
 int o,i,j,n;
 printf("donner la taille de tab");
 scanf("%d",&n);
 printf("tab1");
 for (i=0;i<=n;i++){scanf("%d",&t1[i]);}
 printf("tab2");
 for (j=0;j<=n;j++){scanf("%d",&t2[j]);}
for(i=0;i<=n;i++){for(j=0;j<=n;j++){o=t1[i];t1[i]=t2[j];t2[j]=o;}}
for (i=0;i<=n;i++){

	printf("%d",t1[i]);
}

for (j=0;j<=n;j++){
printf("%d",t2[j]);
}


return EXIT_SUCCESS;
}
