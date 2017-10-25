#include <stdio.h>
#include <stdlib.h>

int main()
{int m,s,n,tab[15] ;
int i=0;
s=0;
printf("donner la taille de tab");
scanf("%d",&n);
for(i=1;i<=n;i++)
{printf("taper case",i);
	scanf("%d\n",&tab[i]);
s=s+i;
}
m=s/n;
printf("le resultat : %d",m);
    return 0;
}
