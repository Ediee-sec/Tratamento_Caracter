#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

using namespace std;


	int main()
	{
		char ac; //para armazanar os caracteres
		char digi[50]; // variavel que ira receber os caracteres
		int cont; // para controlar os vetores
		float pesoAt, pesoDj, alt, imc;
		
		/*Para capturar o peso atual*/
		printf("\n Digite seu peso Atual (EX:90): ");
		
	 	do 
		{
	 		ac = getch ();
	 		
	 		if (isdigit(ac)!=0)
			 {
	 			digi[cont] = ac;
	 			cont++;
	 			printf("%c", ac);
			 }
			 else if (ac==8&&cont)
			 {
			 	digi[cont] = '\0';
			 	cont--;
			 	printf("\b \b");
			 }
		}
		while(ac!=13);
			 
			 digi[cont] = '\0';
			 pesoAt = atoi (digi);
		/*Fim da captura do peso atual*/	 
		
		/*Capturar o peso desejado*/	 
		printf("\n\n Digite seu peso Desejado: ");
		
	 	do 
		{
	 		ac = getch ();
	 		
	 		if (isdigit(ac)!=0)
			 {
	 			digi[cont] = ac;
	 			cont++;
	 			printf("%c", ac);
			 }
			 else if (ac==8&&cont)
			 {
			 	digi[cont] = '\0';
			 	cont--;
			 	printf("\b \b");
			 }
		}
		while(ac!=13);
			 
			 digi[cont] = '\0';
			 pesoDj = atoi (digi);
		/*Fim da captura do peso desejado*/
		
		
		return 0;
	}
