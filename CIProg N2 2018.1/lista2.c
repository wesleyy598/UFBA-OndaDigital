#include <stdio.h>

void questao1();
void salva(int vetor[], int n);
void imprime(int vetor[], int n);

void questao2();
void preencheMatriz(int matriz[5][2]);
void preencheVetor(int matriz[5][2], int vetor[]);
void imprimeVetor(int vetor[]);

void questao3();
int checaMatricula(int vetor[], int matricula, int contador);
void armazenaMatricula(int vetor[], int matricula, int contador);


void questao4();
void diagonalprincipal(int matriz[3][3]);

void questao5();
int somaNumerosImpares(int vetor[]);

void questao6();
int contarLetras(char palavra[]);

int main(){
    //questao1();
    //questao2();
    //questao3();
    //questao4();
    //questao5();
    questao6();
    
    return 0;
}

void questao1(){
    // imprimir n numeros na ordem inversa
    int n;
    scanf("%d", &n);
    int vetor[n];
    
    salva(vetor, n);
    imprime(vetor, n);
}

void salva(int vetor[], int n){
    int i;
    for(i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }
}

void imprime(int vetor[], int n){
    int i;
    for(i = n - 1; i >= 0; i--){
        printf("%d", vetor[i]);
    }
}

void questao2(){
    int matriz[5][2], vetor[10];
    // matriz 5x2 e imprime vetor 10x1
    preencheMatriz(matriz);
    preencheVetor(matriz, vetor);
    imprimeVetor(vetor);
}

void preencheMatriz(int matriz[5][2]) {
    int i, j;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}

void preencheVetor(int matriz[5][2], int vetor[]) {
    int i, j, k = 0;
    
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 2; j++) {
            vetor[k] = matriz[i][j];
            k++;
        }
    }
}

void imprimeVetor(int vetor[]) {
    int i;
    
    for(i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
}

void questao3(){
    // Faça um algoritmo que leia números de matrículas
    // de alunos e armazene-os em um vetor
    // até o vetor ser preenchido por 10 matrículas.
    // Esses números são distintos, ou seja, o vetor
    // não armazenará valores repetidos.
    int vetor[10];
    int contador = 0;
    int matricula;
    int existeMatricula = 1;
    
    while(contador < 10) {
        scanf("%d", &matricula);
        existeMatricula = checaMatricula(vetor, matricula, contador);
        if(existeMatricula == 0){ // matricula nova
            armazenaMatricula(vetor, matricula, contador);
            contador++;
        }
    }    
}

int checaMatricula(int vetor[], int matricula, int contador) {
    int i, existe = 0;
    
    for(i = 0; i < contador; i++) {
        if(vetor[i] == matricula){
            existe = 1;
        }
    }
    
    return existe;
}

void armazenaMatricula(int vetor[], int matricula, int contador) {
    vetor[contador] = matricula;
}



void questao4(){
    int matriz[3][3];
    int i, j;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    diagonalprincipal(matriz);
    
}
void diagonalprincipal(int matriz[3][3]){
    int i, j, diagonal[3];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
           if( i == j){
              diagonal[i] = matriz[i][j]; 
          }
        }
    }
    for(i = 2; i >= 0; i--){
        printf("%d",diagonal[i]);
    }
}


void questao5(){
    int vetor[10];
    int i;
    
    for(i = 0; i< 10; i++){
        scanf("%d", &vetor[i]);
    }
    
    printf("%d", somaNumerosImpares(vetor) );
}

int somaNumerosImpares(int vetor[]){
    int i;
    int soma = 0;
    for(i = 0; i< 10; i++){
        if( (vetor[i]%2) == 1 ){
            soma = soma + vetor[i];
        }
    }
    
    return soma;
}


void questao6(){
    char palavra[100];
    
    scanf("%s",palavra);
    
    printf("%d", contarLetras(palavra) );
    
}

int contarLetras(char palavra[]){
    int i = 0;
    
    while(palavra[i] != '\0'){
        i++;
    }
    
    return i;
}

