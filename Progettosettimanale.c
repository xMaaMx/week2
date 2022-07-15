#include <stdio.h>

void menu ();
void moltiplica();
void dividi ();
void ins_string ();

int main ()
{

		/*inserito il do, poichè a fine ciclo switch, nel caso non si avverino le condizioni, si ripresenta all'utente il menu*/
		char scelta = '\0';
		do{
		menu ();

		scanf  ("%c", &scelta);

		switch ( scelta )
	{
			case 'A' :
			moltiplica();
			break;
			case 'B':
			dividi ();
			break;
			case 'C':
			ins_string();
			break;
			default:
			printf("Fare una scelta \n  \n"  );
			break;

	}
			}while  ( scelta != 'A'  && scelta != 'B' && scelta !=  'C' );//si riferisce  fatto che se l 'utente non sceglie una delle tre opzioni, riparte il ciclo.


	return 0;
}

	void menu ()
	{

	printf ("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti \n"      );
	printf ("Come posso aiutarti?\n"   );
	printf ( "A . Moltiplicare due numeri\n B.dividere due numeri \n C.inserire una stringa\n"        );
	}


	void moltiplica()

	{
		int a, b = 0;

		printf("Inserisci il primo numero  da moltiplicare:\n"  );
		scanf ("%d", &a);
		printf("inserire second numero da moltiplicare:\n"  );
		scanf ("%d",&b);


		int prodotto = a * b;

		printf ("Il prodotto tra %d e %d  è: %d" ,  a, b, prodotto);
	}
 
	void dividi ()

	{
		//Inserito un float,poichè il valore dato dall'utente potrebbe  essere un numero con decimali.
		float a, b = 0;
		printf ("Inserisci il numeratore:"   );
		scanf ("%f" , &a);

		printf ("inserisci il denumeratore:"  );
		scanf ("%f" , &b);

		 float divisione = (float)  a / b ; //sostituita % con / in quanto la funzione  richiede una divisione
		printf ("La divisione tra %g e %g è: %g"    , a,b, divisione);
		/*ho provato ad usare l'operatore cast, ma non sono riuscito a capire come scrivere la sintassi.
		Ho provato a rimediare usando '%g' e come metodo seppure non idoneo, sembrerebbe ovviare al problema
		avrei potuto anche applicarlo nella moltipliaczione ma sarebbe venuto fuori lo stesso  problema*/
	}


	void ins_string ()
	{
		char stringa[10];

		printf ("Inserisci  il tuo nome" );
		scanf ("%s", &stringa);

}















