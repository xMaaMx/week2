#include <stdio.h>
int main ()
{

	/*dichiarazioni variabili*/
	int pnumero;
	int snumero;
	int tnumero;
	float media;

	printf("digita il primo numero\n" );
	scanf("%d",&pnumero);
	printf("digita secondo numero\n" );
	scanf("%d",&snumero);
	printf("digita terzo numero\n" );
	scanf("%d",&tnumero);

if ( pnumero && snumero && tnumero !=0)

{
media = (pnumero + snumero + tnumero )/3;
printf("la media è: %f", media);
}
else
	{
	printf("non è possibile eseguire l'operazione" );
	}
return 0;
}
