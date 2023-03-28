#include<stdio.h>
 
int matriculaAluno(int vetor[10]){
 
int numero, cont, posicao = 0 ;
 
	while (posicao < 10){
 
		printf("\nDigite sua matricula: ");
		scanf("%d",&numero);
 
			if (posicao == 0){
				vetor[posicao] = cont;		
				printf("Numero da matricula: %d\n",vetor[posicao]);
				posicao++;
	}
			
			if (cont == posicao){
					printf("Matricula ja inserida!!\n ");
		}
			
			else{
 
				for(cont = 0; (cont < posicao)&&(vetor[cont]!= numero); cont++);
 
					if (cont == posicao){
						vetor[posicao] = numero;
						printf("numero da matricula: %d\n",vetor[posicao]);
						posicao++;
		}
	}
}

	return 1;
}


int main(){
	
	int vetor[10];
	
	matriculaAluno(vetor);
	
	return 0;
}

