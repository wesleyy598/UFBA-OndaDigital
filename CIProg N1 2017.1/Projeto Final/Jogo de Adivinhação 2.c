#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIMITE_TENTATIVAS 7
 
// Função main
//(parÂmetros)
int main(int argc, char** argv)
{
    int n, x,  limite_inferior, limite_superior, tentativas;
 
    // Inicia o gerador de números aleatórios
    srand(time(NULL));
 
    // Inicaliza as variáveis
             
    tentativas = 0;         // Total de tentativas
    limite_inferior = 0;    // Limite inferior
    limite_superior = 100;  // Limite superior
    n = (rand() % 100) + 1; // Número gerado aleatoriamente
    
    // Loop principal
   
    while(x != n) {
      
        // Imprime o total de tentativas e pede um número ao jogador
        printf("Total de tentativas: %d\n", tentativas);
        printf("Digite um número entre %d e %d): ", limite_inferior, limite_superior);
        scanf("%d", &x);
        
        if(tentativas < LIMITE_TENTATIVAS){
 
			// Aumenta em 1 o número de tentativas
			tentativas++;
			//
			
			// Verifica se o jogador ganhou ou diminui os limites ao redor do número
			if(x > n) 
			{
				limite_superior = x;
			} 
			if(x < n) 
			{
				limite_inferior = x;
			}
		}
		else{
			printf("Limite estourado");
			return tentativas;
		}
	}
         
        
    // Imprime o resultado após o jogador ganhar o jogo
    system("cls | clear");
    printf("Você acertou! Parabens!\n O número é: %d\n", n);
    printf("Tentativas: %d\n", tentativas);
 
     
    return 0;
}


