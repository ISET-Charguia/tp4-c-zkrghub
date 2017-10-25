#include <stdio.h>
int main(void)
{
 int t1[10]={10,20,5,8,102,56,84,59,23,24};
 int t2[10]={52,65,87,15,2,9,36,12,46,97};
 int t3[10],i,j;
 printf("t1 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",t1[i]);
 }
 printf("\n");
 printf("t2 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",t2[i]);
 }
 printf("\n");

 for (i=0;i<=9;i++)
 {
	 t3[i]=t1[i];
	 t1[i]=t2[i];
	 t2[i]=t3[i];
 }
 printf("t1 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",t1[i]);
 }
 printf("\n");
 printf("t2 : ");
 for (i=0;i<=9;i++)
 {
	 printf("%d |",t2[i]);
 }

}
