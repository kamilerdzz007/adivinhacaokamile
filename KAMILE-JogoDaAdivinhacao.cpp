#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	int numero = rand ();
	int chute, numeroaleatorio;
	int tamanho;
	
	int dificuldade;
	int tentativas=0, jogadas=0;
	int cont=0;
	
		setlocale (LC_ALL, "Portuguese");
	
	printf ("\nJOGOS-JOGOS-JOGOS\n1-F�CIL (20 chances)\n2-M�DIO (15 chances)\n3-DIF�CIL (5 chances)\nEscolha:");
	scanf ("%d", &dificuldade);
	
	switch (dificuldade){
			case 1:
				tamanho=10;
			tentativas = 20;
				break;
			case 2:
				tamanho=100;
			tentativas = 15;
				break;
			case 3:
				tamanho=1000;	
			tentativas = 5;
				break;
				default:
					printf ("OP��O INV�LIDA");
					while(getchar() != '\n');
            getchar();
            return 0;
		}
				double pontos = 1000;
		srand (time(NULL));
		
				int numerosecreto = rand () % 100;
				
			do{
		printf("\nAdivinhe o n�mero: ");
		scanf("%d", &numero);
		jogadas++;
		
		if(numero == numerosecreto){
			printf("Parabeniza��o. Voc� ir� acumular pontos!\n", tentativas-jogadas);
			break;
		} else if
			(numero < numerosecreto) {
				
				printf ("\nO n�mero secreto � maior. Tente um pouco mais.\n");
				printf("\n%do tentativa\n", jogadas, tentativas);
			} else if
				(numero > numerosecreto){
					printf ("O n�mero secreto � menor. Tente um pouco menos do valor.");
					printf ("\n%d tentativa\n", jogadas, tentativas);
					cont = tentativas; 
				}	
			
		cont ++;
		
		if (cont > tentativas) {
			break;
		}
	}while (numero != numeroaleatorio);
	
	
	if(jogadas == tentativas && cont <= tentativas){
        printf("\nGAME OVER!");
      	printf("\nO n�mero sorteado era: %d\n", numerosecreto);
    }
    else{
        printf("\nParab�ns! Pontua��o:%d\n", pontos++);
    }
}


			



