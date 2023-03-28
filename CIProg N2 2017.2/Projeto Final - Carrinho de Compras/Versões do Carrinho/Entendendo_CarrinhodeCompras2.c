#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define MAX_NOME 50
#define MAX_TIPO 50
#define MAX_PRODUTOS 3
#define MAX_MERCADO 1

//***************Criando os tipos****************//
//"Produto"//
struct E_Produto {
  char nome[MAX_NOME];
  char tipo[MAX_TIPO];
  float valor;
  _Bool desconto;
};
typedef struct E_Produto Produto;

//"Carrinho"//
struct E_Carrinho {
  Produto produto[MAX_PRODUTOS];
  int quantidade;
  float ValorTotal;
  //float desconto; não sei como fazer//
};
typedef struct E_Carrinho Carrinho;


//**********Protótipos das funções***************//
int produtoMercado();
Carrinho inicializa_carrinho();
void ACESSO_MENU (Carrinho carrinho);
void imprimeListaMercado ();



//*********************MAIN*********************//
int main () {
  
  Carrinho carrinho;
  Produto mercado[MAX_MERCADO];
  carrinho = inicializa_carrinho();
  inicializa_carrinho();
  ACESSO_MENU (Carrinho carrinho);
  
  
  return 0;
}

//***************Criando Funções****************//

//Lista de produtos do Mercado//
int produtoMercado() {
	
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

//Inicializa o carrinho//
Carrinho inicializa_carrinho() {
  Carrinho c;
  int i;
  Produto P_inicial;
    strcpy(P_inicial.nome, "");
    strcpy(P_inicial.tipo, "");
    P_inicial.valor = 0;
    P_inicial.desconto = 0;
    
  c.ValorTotal = 0;
  c.quantidade = 0;
    
    for(i = 0; i < 100; i++){
        c.produto[i] = P_inicial;
        //Não entendi//
      
    }
    
return c;
}


//Menu do Carrinho//
void ACESSO_MENU (Carrinho c) {
	int opcao;
	
	printf ("Escolha a opção desejada: \n");
	printf ("[1] - Ver lista de produtos \n");
	printf ("[2] - Adicionar um produto ao carrinho \n");
	printf ("[3] - Remover produto do carrinho \n");
	printf ("[4] - Ver produtos no carrinho \n ");
	printf ("[5] - Fechar compra \n ");
	
	scanf("%d", &opcao);
	
	switch (opcao){
		 
		 case 1 :
		 imprimeListaMercado (Produto mercado[]);
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
}


//Acesso À lista de produtos do mercado//
void imprimeListaMercado (Produto mercado[]) {
	int i = 0;
	
    for(i = 0; i  < MAX_PRODUTOS; i++){
		
        printf("%d. %s, R$ %.2f\n", i+1, mercado[i].nome, mercado[i].valor);
    }
  
}
	   







