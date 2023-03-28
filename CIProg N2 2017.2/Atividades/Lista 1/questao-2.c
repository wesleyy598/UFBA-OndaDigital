
#include<stdio.h>

int main(){
	
  int matriz[5][2],i, j;
 
  printf ("\nDigite valor para os elementos da matriz\n\n");
 
	for ( i=0; i<5; i++ ){
		for ( j=0; j<2; j++ ){
			
			printf ("\nElemento[%d][%d] = ", i, j);
			scanf ("%d", &matriz[i][j]);
    }
 }
 
   printf("\n\n******************* Saida de Dados ********************* \n\n");
 
	for ( i=0; i<5; i++ ){
		for ( j=0; j<2; j++ ){
			
			printf ("\nElemento[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
 }
	printf ("\nPrograma Concluído.");
	
  return 0;
}
