#include <stdio.h>
#include <string.h>

// Defina aqui, se julgar necessário, sua(s) estrutura(s)
struct E_Produto {
    char nome[15];
    float custo;
};

typedef struct E_Produto Produto;
    
struct E_Carrinho {
    Produto produto[100];
    float ValorTotal;
    int quantidade;
};

typedef struct E_Carrinho Carrinho;

// Protótipos das funções
void mostrar_quantidade(Carrinho carrinho);
void inicializa_carrinho(Carrinho c);

// Função main
int main() {
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












