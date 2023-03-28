#include <stdio.h>

void preencher(int matriz[5][2]){
	
    int i,
        j;

    for(i=0 ; i < 5 ; i++)
        for(j=0 ; j < 2 ; j++){
			
            printf("Digite um valor para a posição: [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
}

void exibir(int matriz[5][2]){
	
    int i,
        j;

    for(i=0 ; i < 5 ; i++){
		
        for(j=0 ; j < 2 ; j++)
            printf("%3d", matriz[i][j]);

        printf("\n");
    }

}

int main(void)

{
    int matriz[5][2];

    preencher(matriz);
    exibir(matriz);

    printf("\nPrograma Concluído.");

    return 0;


}
