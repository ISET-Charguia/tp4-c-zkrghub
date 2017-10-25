#include <stdio.h>

int main()
{
const int a=20;
int tab[a][a];
int r,i,c,l,j,s;
s=0;
printf("Saisie le nombre des lignes");
scanf("%d",&l);
printf("Saisie le nombre des colonne");
scanf("%d",&c);
for (i=0;i<l;i++)
{
for (j=0;j<c;j++)
{
printf("Saisie m[%d,%d]",i,j);
scanf("%d",&tab[i][j]);
s=s+tab[i][j];
}
	}
for (i=0;i<l;i++)
	{
for (j=0;j<c;j++)
{
printf("\n %d",tab[i][j]);
}
}
r=s/(c*l);
printf("\n moyenne %d",r);
printf("\n");
printf("\n somme %d",s);
return 0;
