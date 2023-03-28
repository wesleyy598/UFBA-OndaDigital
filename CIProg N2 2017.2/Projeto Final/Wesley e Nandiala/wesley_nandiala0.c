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
#define MAX_PRODUTOS 10
#define MAX_MERCADO 1

//***************Criando os tipos****************//
//"Produto"//
struct E_Produto {
	char nome[MAX_NOME];
	char tipo[MAX_TIPO];
	float valor;
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


Carrinho inicializa_carrinho();
void acessoMenu (Carrinho carrinho, Produto mercado[]);
void imprimeListaMercado ();
Produto buscaProduto(Produto mercado[], int posicaoMercado);
Carrinho insereProdutoCarrinho(Produto p, Carrinho c);
void mostrar_quantidade(Carrinho carrinho);
Produto preencheMercado(char nome[], char tipo[], float valor);


//*********************MAIN*********************//
int main () {
	
	Carrinho carrinho;
	
    Produto mercado[MAX_PRODUTOS];
	mercado[0] = preencheMercado("Escova de Dentes", "Higiene", 5.90);
	mercado[1] = preencheMercado("Farinha de Trigo", "Alimentos", 3.90);
	mercado[2] = preencheMercado("Shampoo", "Higiene", 7.90);
	mercado[3] = preencheMercado("Desodorante", "Higiene", 9.99);
	mercado[4] = preencheMercado("Queijo", "Alimentos", 29.90);
	mercado[5] = preencheMercado("Leite em pó", "Alimentos", 26.90);
	mercado[6] = preencheMercado("Pilha AAA", "Variados", 12.90);
	mercado[7] = preencheMercado("Sabonete", "Higiene", 0.98);
	mercado[8] = preencheMercado("Cerveja Artesanal Duff Original", "Bebidas", 30.95);
	mercado[9] = preencheMercado("Bolacha Passatempo Recheada Sabor Chocolate", "Alimentos", 7.89);
    printf("\n");
	
	int i;
	Produto P_inicial;
	
	strcpy(P_inicial.nome, "");
	strcpy(P_inicial.tipo, "");
	P_inicial.valor = 0;

	carrinho.ValorTotal = 0;
	carrinho.quantidade = 0;

	for(i = 0; i < MAX_PRODUTOS; i++){
		
		carrinho.produto[i] = P_inicial;
	}
	
	carrinho = inicializa_carrinho();
	
	acessoMenu (carrinho, mercado);
	
  return 0;
}

//***************Criando Funções****************//

//Lista de produtos do Mercado//
Produto preencheMercado(char nome[], char tipo[], float valor){
	
	Produto p;
	strcpy(p.nome, nome);
	strcpy(p.tipo, tipo);
	p.valor  = valor;
    
	return p;
}

//Inicializa o carrinho//
Carrinho inicializa_carrinho(){
	
	Carrinho c;
	int i;
	Produto P_inicial;

	
	strcpy(P_inicial.nome, "");
	strcpy(P_inicial.tipo, "");
	P_inicial.valor = 0;

	c.ValorTotal = 0;
	c.quantidade = 0;

	for(i = 0; i < MAX_PRODUTOS; i++){
		
		c.produto[i] = P_inicial;
	}
    
    return c;
}


//Menu do Carrinho//
void acessoMenu (Carrinho carrinho, Produto mercado[]){
	
	int opcao = -1;
	int posicaoMercado;
	Produto p;
	
	while(opcao != 5){
		
		printf("\n");
		printf("Escolha a opção desejada: \n");
		printf("[1] - Ver lista de produtos \n");
		printf("[2] - Adicionar um produto ao carrinho \n");
		printf("[3] - Remover produto do carrinho \n");
		printf("[4] - Mostrar quantidade no carrinho \n");
		printf("[5] - Fechar compra \n ");
		
		scanf("%d", &opcao);
		
			switch (opcao){
				 
				 case 1 :
				 
					imprimeListaMercado (mercado);
					break;
			 
				 case 2 :
					

					imprimeListaMercado (mercado);
					scanf("%d", &posicaoMercado);
					
					p = buscaProduto(mercado, posicaoMercado);
					carrinho = insereProdutoCarrinho(p, carrinho);
					break;
			 
				 case 3 :
					break;
			 
				 case 4 :
					
					mostrar_quantidade(carrinho);
					break;
			 
				 case 5 :
					break;
				 
				 default :
					printf ("Valor invalido!\n");
  }
 }
}


//Acesso À lista de produtos do mercado//
void imprimeListaMercado (Produto mercado[]){
	
	int i = 0;
	
    for(i = 0; i  < MAX_PRODUTOS; i++){
		
        printf("%d. %s, R$ %.2f\n", i+1, mercado[i].nome, mercado[i].valor);
 }
}
	   
	   
// Mostrar a quantidade de produtos do carrinho
void mostrar_quantidade(Carrinho carrinho){
    
    printf("Quantidade: %d", carrinho.quantidade);
}


// inicializa o produto
Produto inicializa_produto(){
	
    Produto nulo;
    
    strcpy(nulo.nome, "");
    nulo.valor = 0;
    
    return nulo;
}


// Adiciona ao carrinho os produtos
Carrinho insereProdutoCarrinho(Produto p, Carrinho carrinho){
	
    carrinho.produto[carrinho.quantidade] = p;
    carrinho.ValorTotal+=p.valor;
    carrinho.quantidade++;

    return carrinho;
}


// Busca produtos no vetor do mercado
Produto buscaProduto(Produto mercado[], int posicaoMercado){
	
    Produto p;
    
    strcpy(p.nome, mercado[posicaoMercado].nome);
    p.valor = mercado[posicaoMercado].valor;
    
    return p;    
}
