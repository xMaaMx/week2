 #include  <stdio.h>
/* in questo gioco l'utente dovrà indovinare le risposte esatte
 per ottenere il punteggio migliore.
*/
/*in questa prima parte, l'utente dovrà scegliere se iniziare il gioco o meno. l'input è determinato dal numero 
relativo alla stringa. Verrà poi ripreso nello switch */
int main ()
{
	int prima_scelta;
	int seconda_scelta;
printf ("Rispondi alle domande per ottenere il punteggio migliore.\n    "   );

	printf ( "1. inizia il gioco \n" );
	scanf ("%d", &prima_scelta);

	printf ( "2. esci dal gioco \n" );
	scanf ( "%d" , &seconda_scelta);

	switch (prima_scelta , seconda_scelta )
{
		case 1:
			printf ("inizia il gioco");
			break;
		case2:
			printf ("esci dal gioco");
			break;
}


	char domande [] [100] = { " 1. Quando è nata la  Lazio?:  "   };
	char opzioni [] [100] = {" a. 1927" , "b. 1900" , "c. 1915"};
	char risposte [1] = {'a'};


	printf("quiz\n");
	return 0;

}
