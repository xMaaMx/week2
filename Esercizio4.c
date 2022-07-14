#include <stdio.h>
int main ()
{
	int valoreuno;
	int valoredue;
	float media;

	printf("inserisci numero\n" );
	scanf("%d",&valoreuno);

	printf("inserisci secondo numero\n");
	scanf("%d",&valoredue);

	media = (valoreuno + valoredue)/2;

	printf("media di valori: %f" , media);

}
