#include <stdio.h>
int main ()
{
	/*dichiarazioni variabili*/
	int primonumero;

	/*numero inserito dall'utente*/
	printf("inserisci un numero o positivo o negativo\n"  );
	scanf("%d",&primonumero);

	if (primonumero <0)
{
	printf("hai inserito un numero negativo %d. \n"  , primonumero);
}
	else { printf("il numero è positivo" );}
return 0;
}
