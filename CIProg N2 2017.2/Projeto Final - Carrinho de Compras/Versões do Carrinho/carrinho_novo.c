#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_MERCADO 1

// 1) Defina aqui, se julgar necessário, sua(s) estrutura(s)
// Struct e, depois, typedef (criar estrutura e declarar tipo)
struct E_Produto {
    char nome[15];
    float custo;
    _Bool desconto;
};

typedef struct E_Produto Produto;
    
// 1) Struct + typedef ao mesmo tempo    
typedef struct E_Carrinho {
    Produto produto[100];
    float ValorTotal;
    int quantidade;
} Carrinho;

// 2) Protótipos das funções
void mostrar_quantidade(Carrinho carrinho);
Carrinho inicializa_carrinho();
Produto inicializa_produto();

// 3) Função main
int main() {
    Carrinho carrinho;
    Produto mercado[MAX_MERCADO];
    
    carrinho = inicializa_carrinho();
    /////////////////
    carrinho.produto[carrinho.quantidade] = buscaProduto(mercado, posicao);
    carrinho.valorTotal = carrinho.valorTotal + carrinho.produto[carrinho.quantidade].custo;
    carrinho.quantidade++;
    /////////////////
    
    
    return 0;
}

// 4) Declare, a partir daqui, novas funções

void mostrar_quantidade(Carrinho carrinho){
    
    printf("Quantidade: %d", carrinho.quantidade);
}

// Philippe fez essas funções.
Carrinho inicializa_carrinho(){
    int i;
    Produto inicial = inicializa_produto();
    Carrinho c;
    
    c.ValorTotal = 0;
    c.quantidade = 0;
    
    for(i = 0; i < 100; i++){
        c.produto[i] = inicial;
    }
    
    return c;
}

Produto inicializa_produto(){
    Produto nulo;
    
    strcpy(nulo.nome, "");
    nulo.custo = 0;
    nulo.desconto = false;
    
    return nulo;
}

void insereProdutoCarrinho(Produto p, Carrinho c){
    c.produto[c.quantidade] = p;
}

Produto buscaProduto(Produto mercado[], int posicaoMercado){
    Produto p;
    
    strcpy(p.nome, mercado[posicaoMercado].nome);
    p.custo = mercado[posicaoMercado].custo;
    p.desconto = mercado[posicaoMercado].desconto;
    
    return p;    
}








