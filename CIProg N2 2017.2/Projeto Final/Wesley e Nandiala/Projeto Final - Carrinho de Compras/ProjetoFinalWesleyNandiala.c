#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Constantes
#define MAX_NOME 50
#define MAX_TIPO 50
#define MAX_PRODUTOS 100

// Defina aqui, se julgar necessário, sua(s) estrutura(s)
struct E_Produto {
    char nome[MAX_NOME];
    char tipo[MAX_TIPO];
    float custo;
	_Bool desconto;
};
   
typedef struct E_Produto Produto;
    
struct E_Carrinho {
    Produto produto[5];
    float ValorTotal;
    int quantidade;
};

typedef struct E_Carrinho Carrinho;

// Protótipos das funções
void mostrar_quantidade(Carrinho carrinho);
void inicializa_carrinho(Carrinho c);

// Função main
int main() {
	
	Produto mercado[MAX_PRODUTOS];
	int valor;
	
	printf("Lista de produtos:\n");
	printf("1.café");
	printf("2.sabonete");
	printf("3.arroz");
	printf("4.feijão");
	printf("5.açúcar");
	
	printf("Digite um valor de 1 a 5: \n");
	scanf("%d", &valor):
	
	switch (valor)
	{
		case 1:
			printf("\n");
			quantidade++;
		break;
		
		case 2:
			printf("\n");
		break;
		
		case 3:
			printf("\n");
		break;
		
		case 4:
			printf("\n");
		break;
		
		case 5:
			printf("\n");
		break;
		
		default :
       printf ("Valor invalido!\n");
		
		}
		
		
		
		
	getch();	
    return 0;
}

// Declare, a partir daqui, novas funções

void mostrar_quantidade(Carrinho carrinho){
    
    printf("Quantidade: %d", carrinho.quantidade);
}

// Philippe fez essa função.
void inicializa_carrinho(Carrinho c){
    int i;
    Produto inicial;
    
    strcpy(inicial.nome, "");
    inicial.custo = 0;
    
    c.ValorTotal = 0;
    c.quantidade = 0;
    
    for(i = 0; i < 100; i++){
        c.produto[i] = inicial;
    }
}

// Pegar produto

void pegar_Produto(produto[]) {
	printf("Digite o número do produto");
