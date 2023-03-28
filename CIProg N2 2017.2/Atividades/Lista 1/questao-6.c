#include <stdio.h>
#include <string.h>

int main(){
    
    int contagem = 0;
    char palavra[8];
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    while(palavra[contagem] != '\0'){
        contagem++;
    }
    
    printf("\nO tamanho da palavra é %d",contagem);
    
    
    return 0;
}
