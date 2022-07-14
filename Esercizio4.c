#include <stdio.h>
int main ()
{
	/*dichiarazioni variabili*/
	int valoreuno;
	int valoredue;
	float media;

	/*stampa input utente leggendo poi il contenuto*/
	printf("inserisci numero\n" );
	scanf("%d",&valoreuno);

	printf("inserisci secondo numero\n");
	scanf("%d",&valoredue);

	media = (valoreuno + valoredue)/2;//esegue la media dei valori

	printf("media di valori: %4.0f" , media);//stampa la media

}
