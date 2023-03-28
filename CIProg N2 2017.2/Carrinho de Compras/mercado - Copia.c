#include<stdio.h>
#include<string.h>

#define MAX_NOME 51
#define MAX_TIPO 51

typedef struct EstProduto{
    char nome[MAX_NOME];
    char tipo[MAX_TIPO];
    float valor;
    int desconto;
} Produto;

Produto preencheMercado(char nome[], char tipo[], float valor, int desconto){
	Produto p;
	strcpy(p.nome, nome);
	strcpy(p.tipo, tipo);
	p.valor  = valor;
	p.desconto = desconto;
	return p;
}

int main(){
	Produto mercado[10];

	mercado[0] = preencheMercado("Escova de Dentes", "Higiene", 5.90, 1);
	mercado[1] = preencheMercado("Farinha de Trigo", "Alimentos", 3.90, 0);
	mercado[2] = preencheMercado("Shampoo", "Higiene", 7.90, 1);
	mercado[3] = preencheMercado("Desodorante", "Higiene", 9.99, 0);
	mercado[4] = preencheMercado("Queijo", "Alimentos", 29.90, 1);
	mercado[5] = preencheMercado("Leite em pó", "Alimentos", 26.90, 0);
	mercado[6] = preencheMercado("Pilha AAA", "Variados", 12.90, 1);
	mercado[7] = preencheMercado("Sabonete", "Higiene", 0.98, 0);
	mercado[8] = preencheMercado("Cerveja Artesanal Duff Original", "Bebidas", 30.95, 1);
	mercado[9] = preencheMercado("Bolacha Passatempo Recheada Sabor Chocolate", "Alimentos", 7.89, 0);

}
