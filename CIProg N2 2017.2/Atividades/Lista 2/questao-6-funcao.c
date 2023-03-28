#include <stdio.h>
#include <string.h>

int vetorPalavra(char palavra[50]){
    
    int contagem = 0;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    while(palavra[contagem] != '\0'){
        contagem++;
    }
    
    printf("\nO tamanho da palavra é %d",contagem);
    
    
    return 1;
}

int main(){
	
	char palavra[50];
	
	vetorPalavra(palavra);
	
	return 0;
	}
