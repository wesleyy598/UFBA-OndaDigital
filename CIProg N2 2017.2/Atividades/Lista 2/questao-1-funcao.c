#include <stdio.h>

void salvar(int vetor[], int n);
void imprimir(int vetor[], int n);

int main(){
    int n;
    
    printf("Digite quantos numeros voce quer que inverta:  ");
    scanf("%d", &n);
    
    int vetor[n];
    
    salvar(vetor, n);
    imprimir(vetor, n);
    
    return 0;
}

void salvar(int vetor[], int n){
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
}

void imprimir(int vetor[], int n){
    int i;
    for(i = n; i > 0; i--){
        printf("%d ", vetor[i-1]);
    }
    printf("\n");
}
