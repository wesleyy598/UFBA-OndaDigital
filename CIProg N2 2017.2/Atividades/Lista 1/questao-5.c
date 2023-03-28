#include <stdio.h>

int main(){
    
    int valor[10];
    int i;
    int soma = 0;
    
    for(i = 0; i < 10; i++){
        scanf("%d", &valor[i]);
        if(valor[i] % 2 != 0){
            soma = soma + valor[i];
        }
    }
    
    printf("soma é %d\n", soma);
    
    return 0;
}
