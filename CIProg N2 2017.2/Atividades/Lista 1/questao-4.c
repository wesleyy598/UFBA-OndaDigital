#include <stdio.h>

int main(){
    int matriz[3][3];
    int diagonal[3];
    int i, j;
    
    for(i = 0; i < 3; i++){
        
        for(j = 0; j < 3; j++){
            printf("\ndigite um valor para a posicao %d %d\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < 3; i++){
        // ... depois na coluna
        for(j = 0; j < 3; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                diagonal[i] = matriz[i][j];
            }
        }
    }
    
    for(i = 2; i >= 0; i--){
        printf("%d ", diagonal[i]);
    }
        
    return 0;
}
