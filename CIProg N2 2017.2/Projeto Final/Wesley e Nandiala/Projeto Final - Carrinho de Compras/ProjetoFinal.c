#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_NOME 50
#define MAX_TIPO 50
#define MAX_PRODUTOS 3

// Defina aqui, se julgar necessário, sua(s) estrutura(s)
typedef struct EstProduto{
    char nome[MAX_NOME];
    char tipo[MAX_TIPO];
    float valor;
    int desconto;
} Produto;

struct E_Carrinho {
    Produto produto[100];
    float ValorTotal;
    int quantidade;
};

typedef struct E_Carrinho Carrinho;

void mostrar_quantidade(Carrinho carrinho);
void inicializa_carrinho(Carrinho c);
void imprimeListaMercado(Produto mercado[]);
int opcoesCarrinho();
int produtoMercado();

// MAIN

int main(){
	
    produtoMercado();
    
    return 0;
}

void imprimeListaMercado(Produto mercado[]) {
	
	int i = 0;
	
    for(i = 0; i  < MAX_PRODUTOS; i++){
		
        printf("%d. %s, R$ %.2f\n", i+1, mercado[i].nome, mercado[i].valor);
    }
}

int produtoMercado(){
	
	int mercado[3];
	
	Produto mercado[MAX_PRODUTOS];
    Produto p;
    
    strcpy(p.nome,"farinha de trigo");
    strcpy(p.tipo, "alimenticio");
    p.valor = 10.0;
    p.desconto = 0;
    
    mercado[0] = p;
	
	strcpy(p.nome,"farinha de mandioca");
    strcpy(p.tipo, "alimenticio");
    p.valor = 3.0;
    p.desconto = 0;
    
    mercado[1] = p;
    
    strcpy(p.nome,"talco");
    strcpy(p.tipo, "higiene");
    p.valor = 8.99;
    p.desconto = 0;
    
    mercado[2] = p;
    
		return 1;
	}


int opcoesCarrinho(){
	
	int opcao = 0;
	
	
	while (opcao!=5){
   
	   printf ("ESCOLHA UMA OPÇAO: \n");
	   printf ("[1] - Ver lista de produtos \n");
	   printf ("[2] - Adicionar um produto ao carrinho \n");
	   printf ("[3] - Remover produto do carrinho \n");
	   printf ("[4] - Ver produtos no carrinho \n ");
	   printf ("[5] - Fechar compra \n ");

	printf("\nEscolha a opção desejada: ");
    scanf("%d", &opcao);
	
     switch (opcao){
		 
		 case 1 :
		
		 break;
	 
		 case 2 :
		   printf ("");
		 break;
	 
		 case 3 :
			printf ("");
		 break;
	 
		 case 4 :
			printf ("");
		 break;
	 
		 case 5 :
			printf ("");
		 break;
		 
		 default :
       printf ("Valor invalido!\n");
  }
	 
	  return 0;
 }		 
}
		 
		 
		 




