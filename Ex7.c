#include <stdio.h>

int main()
{
const int a=20;
int tab[a][a];
int i,c,l,j,s;
s=0;
printf("Saisie le nombre des lignes");
scanf("%d",&l);
printf("Saisie le nombre des colonne");
scanf("%d",&c);
for (i=0;i<l;i++)
{
for (j=0;j<c;j++)
{
printf("Saisie T[%d,%d]",i,j)
scanf("%d",&tab[i][j])	
s=s+tab[i][j];
}
	}
for (i=0;i<n;i++)
	{
for (j=0;j<m;j++)
{
printf("\n %d",tab[i][j]);
}
}
r=s/(n*m)
printf("\nLa moyenne des entiers de tableau= %d",r);
printf("\n");
printf("\nLa somme des entiers de tableau= %d",s);
return 0;
}
