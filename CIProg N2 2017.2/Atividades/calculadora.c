#include <stdio.h>
#include <math.h>

int somaNumeros(int a, int b);
int subtraiNum(int a, int b);
int multiplicaNum(int a, int b);
float divideNum(int a , int b);
double raizNum(int a);
int potenciaNum(int a, int b);       

int main() {
    int valor = -1;
    int a,b;
    
    while(valor != 7) {
        printf("\nOpção 1: soma\n Opção 2: subtração\n");
        printf("Opção 3: multiplicação\n Opção 4: divisão\n");
        printf("Opção 5: raiz quadrada\n Opção 6: potência\n");
        printf("Opção 7: sair");
        
        
        
        printf("\nEscolha a operação desejada: ");
        scanf("%d", &valor);
        
        switch (valor)
        {
        
        case 1:
         printf("Digite os valores:");
         scanf("%d %d", &a, &b);
         printf("%d",somaNumeros(a, b));
         
         break;
         
         case 2:
         printf("Digite os valores:");
         scanf("%d %d", &a , &b);
         printf("%d", subtraiNum(a,b));
         
         break;
         
         case 3:
         printf("Digite os valores:");
         scanf("%d %d", &a , &b);
         printf("%d", multiplicaNum(a,b));
         break;
         
         case 4:
         printf("Digite os valores:");
         scanf("%d %d", &a , &b);
         if(b != 0){
         printf("%f", divideNum(a,b));
    }
        else{
            printf("Não existe divisão por 0");
    }
        break;
        
        case 5:
            printf("Digite o valor:");
            scanf("%d", &a);
            printf("%f", raizNum(a));
            break;
            
        case 6:
            printf("Digite os valores:");
            scanf("%d %d", &a , &b);
            printf("%d", potenciaNum(a,b));
            break;
            
        case 7:
            printf("Acabou!\n");
        }
    }
    
        return 0;
}

int somaNumeros(int a, int b){
    
    return(a+b);
}

int subtraiNum(int a, int b){

    return(a-b);
}

int multiplicaNum(int a, int b){
    
    return(a*b);
}

float divideNum(int a , int b){
    float divisao = a/b;
    return(divisao);
}

double raizNum(int a){ 
    
    return(sqrt(a));
}

int potenciaNum(int a, int b) {
    return( pow(a, b));
}
