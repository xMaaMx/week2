#include <stdio.h>
int main ()
{
	int numerouser;//variabile numero utente

	printf("inserire un numero  \n" );//richiesta scritta all'utente
	scanf("%d",&numerouser);//input dall'utente
	
	printf("%d" ,numerouser);//stampa  risultato input
	printf("questo è il tuo input\n"   );
	if (numerouser == numerouser)
		{
		numerouser ++;
		}
	printf("%d il tuo nuovo input:"   ,numerouser);

}
