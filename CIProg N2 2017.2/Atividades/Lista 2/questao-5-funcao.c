#include <stdio.h>

int somaImpares(int valor[10]){
    
    int i;
    int soma = 0;
    
    for(i = 0; i < 10; i++){
		
		printf("Digite um valor: ");
        scanf("%d", &valor[i]);
        
			if(valor[i] % 2 != 0){
            soma = soma + valor[i];
        }
    }
    
    printf("A soma dos números ímpares é %d\n", soma);
    
    return 1;
}

int main(){
	int valor[10];
	
	somaImpares(valor);
	
	return 0;
	}
