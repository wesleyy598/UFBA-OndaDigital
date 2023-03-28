// Projeto Final por:
// Nandiala Cristina e Wesley Carvalho

// Biliotecas

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

// Constantes

#define MAX_NOME 50
#define MAX_TIPO 50
#define MAX_PRODUTOS 3
#define MAX_MERCADO 10

// Estrutura do Produto

typedef struct EstProduto{
    char nome[MAX_NOME];
    char tipo[MAX_TIPO];
    float valor;
    int desconto;
} Produto;

// Estrutura do Carrinho

struct E_Carrinho {
    Produto produto[100];
    float ValorTotal;
    int quantidade;
};

// struct + typedef ao mesmo tempo

typedef struct E_Carrinho Carrinho;

// Declaração das Funções

void imprimeListaMercado(Produto mercado[]);
int opcoesCarrinho();

// Função Principal

int main(){
	
	int opcao;
	
    Produto mercado[] = {};
    Produto p;
    Carrinho carrinho;
    Produto mercado[MAX_MERCADO];
    
    printf ("Escolha a opção desejada: \n");
	printf ("[1] - Ver lista de produtos \n");
	printf ("[2] - Adicionar um produto ao carrinho \n");
	printf ("[3] - Remover produto do carrinho \n");
	printf ("[4] - Mostrar quantidade no carrinho \n ");
	printf ("[5] - Fechar compra \n ");
	
	scanf("%d", &opcao);
	
	switch (opcao){
		 
		 case 1 :
		 
			imprimeListaMercado (Produto mercado[]);
		 break;
	 
		 case 2 :
		 
			insereProdutoCarrinho(Produto p, Carrinho carrinho);
		 break;
	 
		 case 3 :
		 
		 break;
	 
		 case 4 :
			
			 mostrar_quantidade(Carrinho carrinho);
		 break;
	 
		 case 5 :
			
		 break;
		 
		 default :
       printf ("Valor invalido!\n");
  }
    
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
    
    carrinho.produto[carrinho.quantidade] = buscaProduto(mercado, posicao);
    carrinho.ValorTotal = carrinho.ValorTotal + carrinho.produto[carrinho.quantidade].custo;
    carrinho.quantidade++;
    
    imprimeListaMercado(mercado);
    opcoesCarrinho();
        
        
    
        
        
    return 0;
}

// Funções

void imprimeListaMercado(Produto mercado[]) {
	
	int i;
	
    for(i = 0; i < MAX_PRODUTOS; i++){
		
        printf("%d. %s, R$ %.2f\n", i+1, mercado[i].nome, mercado[i].valor);
    }
}

/*int opcoesCarrinho(){
	
	int opcao = 0;
	
	
	while (opcao!=5){
   
	   printf ("ESCOLHA UMA OPÇAO: \n");
	   printf ("[1] - Ver lista do mercado \n");
	   printf ("[2] - Adicionar um produto ao carrinho \n");
	   printf ("[3] - Remover produto do carrinho \n");
	   printf ("[4] - Ver produtos no carrinho \n ");
	   printf ("[5] - limite de compras \n ");
	   printf ("[6] - Fechar compra \n ");

	printf("\nEscolha a opção desejada: ");
    scanf("%d", &opcao);
	
     switch (opcao){
		 
		 case 1 :
		 
		 void imprimeListaMercado(Produto mercado[])
		
		 break;
	 
		 case 2 :
		  
		 break;
	 
		 case 3 :
			
		 break;
	 
		 case 4 :
			
		 break;
	 
		 case 5 :
			
		 break;
		 
		 case 6 :
		 
		 break;
		 
		 default :
       printf ("Valor invalido!\n");
  }
}	 
	  return 1;
}*/

int listaCarrinho(){
	
	}

Produto buscaProduto(){
	
	
	}

int addProduto(){
	
	}
	
int dellProduto(){
	
	}

int limiteDeCompra(){
	 
	}
