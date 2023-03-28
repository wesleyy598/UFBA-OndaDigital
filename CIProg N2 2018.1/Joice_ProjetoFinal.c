//Projeto criado por: Joice Anice.

//Bibliotecas

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_VALOR 7
#define valorficha 2.50

//Tipos:
struct TipoEstudante {
	char *nome;
	int matricula;
  _Bool ehBolsista;
	float saldo;
	int totalFichas; 
};

typedef struct TipoEstudante Estudante;
void imprimir();
int menu();
int comprar(Estudante e[MAX_VALOR]);
int recarregarSaldo(Estudante e[MAX_VALOR]);
int sair();

// Função Principal
int main() {
  Estudante e[MAX_VALOR];
  int numMenu;
  
  e[0].nome = "Ohana";
	e[0].matricula = 45421;
	e[0].ehBolsista = true;
	e[0].saldo = 3.60;
	e[0].totalFichas = 2;

  e[1].nome = "Joice";
	e[1].matricula = 45411;
	e[1].ehBolsista = false;
	e[1].saldo = 3.60;
	e[1].totalFichas = 2;

//Menu
while (numMenu!=4){

numMenu = menu();

switch(numMenu){
    case 1: //Comprar Ficha
    comprar(e);

    break;

    case 2: //Recarregar Saldo
    recarregarSaldo(e);

    break;

    case 3: //Exibir relatório do estudante

    imprimir();
    break;

    case 4: //SAIR

    sair();
    break;
    
    default:
    printf("Opção invalida\n");
    break;
  }
}
  return 0;
}


// Função comprar ficha
int comprar(Estudante e[]){
  int matri, i;
	
	printf("Digite o número da matrícula: ");
	scanf("%d", &matri);
	
	for (i=0; i<MAX_VALOR; i++){
		if(matri==e[i].matricula){

      break ;
		}
	}		
  if(e[i].ehBolsista == false){
    if(e[i].totalFichas>0){
      if(e[i].saldo>=valorficha){
        e[i].saldo=e[i].saldo-valorficha;
        printf("Você adquiriu sua ficha.\n");
      }
      else {
        printf("Recarregue seu saldo.\n");
      }
    e[i].totalFichas=e[i].totalFichas-1;
    }
    else
    printf("Você não possui mais fichas sobrando.\n");
  }
  else {
   printf("Você é bolsista.\n");
}
	return 0;
}

//Função para recarregar saldo 
int recarregarSaldo(Estudante e[]){
  int matri, i;
  int valor;

  printf("Digite o número da matrícula: ");
	scanf("%d", &matri);
  for(i=0; i<MAX_VALOR; i++){
    if(matri==e[i].matricula){
      break ;
    }
  }
        if(e[i].ehBolsista == false){
         printf("Quantos saldos você gostaria de colocar?");
         scanf("%d",&valor);
         e[i].saldo=e[i].saldo+valor;
         printf("Seu saldo atual é: %.2f \n ", e[i].saldo);
        }
         else
         printf("Você é bolsista.\n");
	return 0;
}


//Função para exibir dados/relatório do estudante
void imprimir(Estudante e) {
	printf("%s, nº %d\n", e.nome, e.matricula);
	if(e.ehBolsista) {
		printf("Estudante Bolsista\n");
	}
	else {
		printf("Saldo: R$ %.2f\n", e.saldo);
	}
	if(e.totalFichas > 0) {
		printf("Fichas disponíveis: %d\n", e.totalFichas);
	}
	else {
		printf("Estudante não pode mais comprar fichas hoje, volte amanhã.\n");
	}
}


//Opção para sair do programa
int sair(){
	int sair, resp=0;
	
	printf("Digite 1 para continuar ou 2 para sair: ");
	scanf("%d",&sair);
	
	while (resp==1);
	return 0;
}

int menu (){
  int num;

printf("------------------------------------\n");
printf("----------- MENU INICIAL -----------\n");
printf("---------                  ---------\n");
printf("-------- SEJA BEM VINDO(A)! --------\n");
printf("\nDIGITE O NÚMERO DE SUA ESCOLHA:\n\n");
printf("[1] - ADQUIRIR FICHA\n");
printf("[2] - RECARREGAR SEU SALDO\n");
printf("[3] - EXIBIR RELATÓRIO DO(A) ESTUDANTE\n");
printf("[4] - SAIR\n\n");
printf("-----------               -----------\n");
printf("----------- BOA REFEIÇÃO! -----------\n");
printf("-------------------------------------\n");

scanf("%d", &num);

return num;
}
