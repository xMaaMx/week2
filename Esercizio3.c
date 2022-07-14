#include <stdio.h>
int main ()
{
	int numerouser;//variabile numero utente
	int incremento;
	int decremento;

	printf("inserire un numero  \n" );//richiesta scritta all'utente
	scanf("%d",&numerouser);//input dall'utente

	incremento = numerouser +1; //aumenta il valore di 1

	printf("incremento: %d\n",incremento);

	decremento = numerouser -1;//diminuisce il valore di 1

	printf("decremento: %d\n",decremento);

return 0;
}
