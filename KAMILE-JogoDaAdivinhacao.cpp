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
	
	printf ("\nJOGOS-JOGOS-JOGOS\n1-FÁCIL (20 chances)\n2-MÉDIO (15 chances)\n3-DIFÍCIL (5 chances)\nEscolha:");
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
					printf ("OPÇÃO INVÁLIDA");
					while(getchar() != '\n');
            getchar();
            return 0;
		}
				double pontos = 1000;
		srand (time(NULL));
		
				int numerosecreto = rand () % 100;
				
			do{
		printf("\nAdivinhe o número: ");
		scanf("%d", &numero);
		jogadas++;
		
		if(numero == numerosecreto){
			printf("Parabenização. Você irá acumular pontos!\n", tentativas-jogadas);
			break;
		} else if
			(numero < numerosecreto) {
				
				printf ("\nO número secreto é maior. Tente um pouco mais.\n");
				printf("\n%do tentativa\n", jogadas, tentativas);
			} else if
				(numero > numerosecreto){
					printf ("O número secreto é menor. Tente um pouco menos do valor.");
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
      	printf("\nO número sorteado era: %d\n", numerosecreto);
    }
    else{
        printf("\nParabéns! Pontuação:%d\n", pontos++);
    }
}


			



