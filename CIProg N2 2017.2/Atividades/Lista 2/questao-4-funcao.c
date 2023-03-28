#include <stdio.h>

int exibir(int matriz[3][3]){
    
    int i,j;

    for(i=0 ; i < 3 ; i++)
    {
        for(j=0 ; j < 3 ; j++)
            printf("%3d", matriz[i][j]);

        printf("\n");
    }
    return 2;
}

int ExibirDiagonal(int diagonal[3]){
    
    int matriz[3][3];
    int i, j;
    
    for(i = 0; i > 3; i--){
            for(j = 0; j > 3; j--){
                if(i == j){
                    diagonal[i] = matriz[i][j];
        }
        printf("%d ", diagonal[i]);
    }
}   
    for(i = 2; i >= 0; i--){
        printf("%d ", diagonal[i]);
    }
    return 1;
}

int main(void)

{
    int matriz[3][3];
    int diagonal[3];
    int i, j;
    
    for(i=0 ; i < 3 ; i++)
        for(j=0 ; j < 3 ; j++)
        {
            printf("Digite um valor para a posição: [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
       }
       
    exibir(matriz);
    ExibirDiagonal(diagonal);
    
    printf("\nPrograma Concluído.");

    return 0;


}
