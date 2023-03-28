#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_NOME 50
#define MAX_TIPO 50
#define MAX_PRODUTOS 100
#define MAX_MERCADO 10 

typedef struct EstProduto{
char nome[MAX_NOME];
char tipo [MAX_TIPO];
float valor;
_Bool desconto;
} Produto;
    
typedef struct E_Carrinho {
    Produto produto[MAX_PRODUTOS];
    float ValorTotal;
    int quantidade;
}Carrinho;

float LimiteDeCompra ();
Carrinho InicializaCarrinho ();
Produto BuscaProduto(Produto mercado[], int posicaoMercado);
Carrinho AddProduto (Carrinho carrinho, int limite, Produto mercado[]);
void AvisoLimite (float ValorTotal, float limite);
Produto AnulandoProduto ();
Carrinho RemoveProduto(Carrinho car);
void MostraProdutosCarrinho(Carrinho carrinho);
Produto preencheMercado(char nome[], char tipo[], float valor);

int main(){
    int num = -1;
    Carrinho c;
    float limite = 0;
    Carrinho carrinho;
    Produto mercado[MAX_MERCADO];
    
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
    
    while (num != 8){

printf ("=== CARRINHO DE COMPRAS INTELIGENTE ===");
printf ("\n\n Bem vindo!\n");
printf("[1] - Limitar compras.\n");
printf("[2] - Lista de produtos.\n");
printf("[3] - Iniciar compras.\n");
printf("[4] - Adicionar produto ao carrinho.\n");
printf("[5] - Remover produto ao carrinho.\n");
printf("[6] - Ver produtos do carrinho.\n");
printf("[7] - Finalizar compra.\n");
printf("[8] - Ir embora.\n");
printf ("\n\nEscolha uma das opções: \n");
 scanf("%i", &num);
getchar();
   
switch (num)
{
  case 1:
    printf ("\nEsta opção lhe proporciona limitar o valor gasto em sua compra.\n");
    limite = LimiteDeCompra ();
    break;

  case 2:
    printf ("\nEsta opção lhe mostra os produtos disponíveis em nosso mercado.\n");
    int a;
	for(a = 0; a < MAX_MERCADO; a++){ 
		printf ("Produtos: %s - %s -R$ %.2f\n", mercado[a].nome, mercado[a].tipo, mercado[a].valor); 
	}
    break;

  case 3: 
    printf ("\nEsta opção dará inicio as suas compras.\n");
    printf ("\nVamos começar!");
    c = InicializaCarrinho ();
    break;

  case 4:
    printf ("\nEssa opção lhe permite adicionar um produto ao seu carrinho.\n");
    int j;
	for(j = 0; j < MAX_MERCADO; j++){ 
		printf ("Produtos: %s - %s -R$ %.2f\n", mercado[j].nome, mercado[j].tipo, mercado[j].valor); 
}		
    carrinho = AddProduto (carrinho, limite, mercado);
    break;

  case 5:
    printf ("\nEssa opção lhe permite remover um produto do seu carrinho.\n");
    carrinho = RemoveProduto(carrinho);
    break;

  case 6:
    printf ("\nEsta opção lhe mostra os produtos adicionados ao seu carrinho.\n");
    MostraProdutosCarrinho(carrinho);
    break;

  case 7:
    printf ("\nEsta opção finaliza suas compras.\n");

    break;
    
    default:
     printf ("\nOpção inválida\n");
     break;
}

}
    
    return 0;
}    

float LimiteDeCompra () {  
  char resposta;
  float limite = 0;
   printf ("\nDeseja confirmar o limite para sua compra?");
   printf ("\nDigite [s] ou [n].");
   scanf ("%c", &resposta);
    if (resposta == 's'){
       printf ("\nInforme o valor: R$ ");
       scanf("%f", &limite);
    }
    else {
      printf ("\nBoas compras!");
  }
    return (limite);
 }
  

Carrinho InicializaCarrinho (){
    int i;
    Produto inicial; 
    Carrinho c;  
    strcpy(inicial.nome, "");
    inicial.valor = 0;   
    c.ValorTotal = 0;
    c.quantidade = 0;   
    for(i = 0; i < MAX_PRODUTOS; i++){
        c.produto[i] = inicial;
    }
    
    return c;
 }
 
Produto BuscaProduto(Produto mercado[], int posicaoMercado){
    Produto p;
    strcpy(p.nome, mercado[posicaoMercado].nome);
    p.valor = mercado[posicaoMercado].valor;
    p.desconto = mercado[posicaoMercado].desconto;
    return p;    
} 

Carrinho AddProduto (Carrinho carrinho, int limite, Produto mercado[]) {
  char escolha;
  int posicao;
   printf("Adicionar produtos: \n Digite [s] ou [n]");
   scanf("%c", &escolha);
     while (escolha == 's'){
       printf ("\nEscolha o número refetente ao produto que deseja adicionar.");
       scanf ("%i", &posicao);
       if (carrinho.ValorTotal + mercado[posicao].valor <= limite){
       carrinho.produto[carrinho.quantidade] = BuscaProduto(mercado, posicao);
       carrinho.ValorTotal = carrinho.ValorTotal + carrinho.produto[carrinho.quantidade].valor;
       carrinho.quantidade++;
   }
  } 
   return carrinho; 
 }  
 
void AvisoLimite (float ValorTotal, float limite){
  float aviso;
  aviso = 0.80*limite;
   if (aviso == ValorTotal){
    printf("\n\nATENÇÃO!");
    printf("\nVocê atingiu 80%% do valor estipulado a sua compra.");
  }
  else{
    printf("\n");
  }
 }
 
Produto AnulandoProduto (){
  Produto nulo;
   strcpy (nulo.nome, " ");
   nulo.valor = 0;
    return nulo;
} 

Carrinho RemoveProduto(Carrinho carrinho){
	int rem;
	char escolha;
  printf("Remover produtos: \n Digite [s] ou [n]");
   scanf("%c", &escolha);
   while (escolha == 's'){
	   MostraProdutosCarrinho (carrinho);
       printf ("\nEscolha o número refetente ao produto que deseja remover.");
       scanf ("%i", &rem);
       if (rem < carrinho.quantidade){
		carrinho.produto[rem] = carrinho.produto[carrinho.quantidade-1];
		carrinho.produto[carrinho.quantidade-1] = AnulandoProduto ();
		carrinho.quantidade --;
   }    
}
    return carrinho;      
}

void MostraProdutosCarrinho(Carrinho carrinho){
	int i;
	for(i = 0; i < carrinho.quantidade; i++){ 
		printf ("Produtos no Carrinho: %s - %f", carrinho.produto[i].nome, carrinho.produto[i].valor); 
	}
	printf ("\n");
 }
 
Produto preencheMercado(char nome[], char tipo[], float valor){
	Produto p;
	strcpy(p.nome, nome);
	strcpy(p.tipo, tipo);
	p.valor  = valor;
    
	return p;
}

void TotalCompra (){
}
	
void ImprimeNotaFiscal (){
	// printf("%d. %s, R$ %.2f\n", i+1, [i].nome, mercado[i].valor);
	// aqui eu vou ajeitar de acordo com as variáveis que criarmos 
	// deixei assim só para eu não esquecer como faz	
}
