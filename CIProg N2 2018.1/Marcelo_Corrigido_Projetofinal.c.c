#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_ESTUDANTES 7 // Constante para funções e para o programa

// renomeando o tipo _Bool para boolean, fica mais facil
typedef _Bool boolean;

// tipo de estudante, exatamente igual aos nossos vetores
typedef struct TipoEstudante {
    char *nome;
    int matricula;
    boolean ehBolsista; // True, se bolsista; False, se não.
    float saldo;
    int totalFichas; // guarda a quantidade de fichas disponiveis. Se totalFichas = 2, pode comprar ate 2 fichas; se 0, nenhuma.
} Estudante;
    
//Assinaturas (protótipos) das funções criadas;

int comprarru (Estudante alunos[MAX_ESTUDANTES]); // Função para compra as fichas.
int recarregarcartao (Estudante alunos[MAX_ESTUDANTES]); // Função para recarregar o cartão.
int relatoriogeral (Estudante *alunos); // Função para o relatorio geral.
Estudante criaEstudanteNulo();
void imprimeEstudante(Estudante e);
void criaEstudantes(Estudante estudantes[]);
void resetaFichasEstudantes(Estudante estudantes[]);


int main () {
    
  Estudante alunos[MAX_ESTUDANTES];
  
  criaEstudantes(alunos);
      
  int opcao;
      
  while(opcao!=4) {
      
    printf ("-----------------------------------------------\n");
    printf ("                     MENU\n");
    printf ("-----------------------------------------------\n");
    printf ("1 - COMPRAR FICHA DO RU\n");
    printf ("2 - RECARREGAR CARTÃO DO RU\n");
    printf ("3 - RELATÓRIO GERAL DO RU\n");
    printf ("4 - SAIR DO SISTEMA\n");
    printf ("\n");
    printf ("Digite o que deseja prosseguir:");
    scanf ("%d",&opcao);

    switch (opcao) {

      case 1:
      printf ("\n");
      printf ("-----------------------------------------------\n");
      printf ("COMPRAR FICHA DO RESTAURANTE UNIVERSITÁRIO (RU)\n");
      printf ("-----------------------------------------------\n");
      if(comprarru (alunos) == 0) {
        printf ("\n");
        printf ("VALOR INVÁLIDO\n");
      }    
      break;

      case 2:
      printf ("\n");
      printf ("-----------------------------------------------\n");
      printf ("RECARREGAR CARTÃO DO RESTAURANTE UNIVERSITÁRIO (RU )\n");
      printf ("-----------------------------------------------\n");
      recarregarcartao (alunos);
      break;

      case 3:
      printf ("\n");
      printf ("-----------------------------------------------\n");
      printf ("                  RELATÓRIO GERAL\n");
      printf ("-----------------------------------------------\n");
      relatoriogeral (alunos);
      break;

      case 4:
      printf ("\n"); 
      printf ("-----------------------------------------------\n");
      printf ("             OBRIGADO E VOLTE SEMPRE\n");
      printf ("-----------------------------------------------\n");
      break;

      default :
      printf ("VALOR INVÁLIDO!\n");
      break;
    }
  }

  return 0;
}

int comprarru (Estudante alunos[MAX_ESTUDANTES]) {  
  
  int numeromatricula; // Variável para identificar as matrículas.
  int ficha; // Variável para ficha
  int x; // Variável para percorrer o vetor

  printf ("Digite seu número de matrícula:");
  scanf ("%d",&numeromatricula);

  for (x=0;x<MAX_ESTUDANTES;x++) {
    if(numeromatricula== alunos[x].matricula) {
      printf ("\n");
      printf ("SITUAÇÃO DO ALUNO:\n\n");
      printf ("Seu nome é: %s \n",alunos[x].nome);
      printf ("Sua matrícula é: %d \n",alunos[x].matricula);
      printf ("Seu saldo é : %.2f \n",alunos[x].saldo);
      printf ("Seu número de fichas é : %d\n",alunos[x].totalFichas);
      printf ("\n");
                
      if (alunos[x].totalFichas==0) {
        printf ("Você atingiu o seu limite de fichas, volte amanhã!\n");
        break;
      }

      if(alunos[x].ehBolsista == true) {
        printf ("\n");
        printf ("Você é bolsista\n");
        printf ("Bom apetite %s, a comida ta deliciosa.",alunos[x].nome);
        printf ("\n");
        alunos[x].totalFichas--;
        break;
      }

      printf ("Deseja comprar uma ficha? Se sim digite 1, senão digite 2\n\n");
      printf ("Sua opção é:");  
      scanf("%d",&ficha);
            
      if (alunos[x].saldo<2.50) {
        printf ("Seu saldo é: %.2f\n",alunos[x].saldo);
        printf ("SALDO INSUFICIENTE\n\n");
        break;
      }
         
      if (alunos[x].saldo>=2.50 && ficha==1){
		alunos[x].totalFichas--;
		alunos[x].saldo=alunos[x].saldo-2.50; 
		printf ("SEU SALDO É: %.2f\n",alunos[x].saldo);
		printf ("Uma ficha foi contabilizada, bom apetite!\n");
        break;
      }

      if (ficha==2) {
		printf ("SEU SALDO É: %.2f\n",alunos[x].saldo);
		printf ("Que pena, a comida está deliciosa. Volte mais tarde!\n");
		break;
      }
                    
    }
  }

  if(x>=MAX_ESTUDANTES) {
    printf ("Seu número de matrícula esta errado!!");
    printf ("\n");
  }
  printf ("\n");           
  return 1;
}
      
    
int recarregarcartao (Estudante alunos[MAX_ESTUDANTES]) {
    
  int numeromatricula; // Variável para identificar as matrículas.
  float valorrecarga;
  int x; //Variável para percorrer o vetor.
      
  printf ("Digite seu número de matrícula: ");
  scanf ("%d", &numeromatricula);
      
  for (x=0;x<MAX_ESTUDANTES;x++) {
          
    if(numeromatricula== alunos[x].matricula) {
      if(alunos[x].ehBolsista == true) {
        printf ("\n");
        printf ("Você é bolsista, não precisa recarregar.\n");break;
      }

      else {
        printf ("Digite o valor da recargar do seu valor:");
        scanf ("%f",&valorrecarga);
        alunos[x].saldo=alunos[x].saldo+valorrecarga;
        printf ("SEU SALDO ATUAL É : %.2f",alunos[x].saldo);
        break;
      }
    }
  }

  if(x>=MAX_ESTUDANTES) {
    printf ("Seu número de matrícula esta errado!!");
    printf ("\n");
  }
  printf ("\n");  
  return 0;
}

int relatoriogeral (Estudante *alunos){
    
  int x;
  printf ("NOME        | MATRICULA | SALDO\n");
  
  for (x=0;x<MAX_ESTUDANTES;x++) {
    printf ("\n");
    printf ("%s |   %d  |", (*(alunos+x)).nome, (*(alunos+x)).matricula);
    if ((*(alunos+x)).ehBolsista == true) {
      printf ("  Bolsista\n");
    }
    else {
      printf ("  R$%.2f\n",(*(alunos+x)).saldo);
    }
  }
    return 0;
}

Estudante criaEstudanteNulo() {
	Estudante e;

	e.nome = "";
	e.matricula = 0;
	e.ehBolsista = false;
	e.saldo = 0;
	e.totalFichas = 2;

	return e;
}

// funcao para imprimir dados de um estudante
void imprimeEstudante(Estudante e) {
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

/* Funcao para criar estudantes e inserir no vetor de estudantes
	Links utilizados para gerar dados aleatorios:
	- http://www.fantasynamegenerators.com/lotr-hobbit-names.php
	- https://www.random.org/
*/
void criaEstudantes(Estudante e[]) {
	Estudante estudantes = criaEstudanteNulo();

    for(int i = 0; i < MAX_ESTUDANTES; i++) {
        e[i] = estudantes;
    }

    // Aluno 1
    e[0].nome = "Otho Burrow";
	e[0].matricula = 45421;
	e[0].ehBolsista = true;
	e[0].saldo = 3.60;
	e[0].totalFichas = 2;

    // Aluno 2
    e[1].nome = "Iris Clayhanger";
	e[1].matricula = 20287;
	e[1].ehBolsista = true;
	e[1].saldo = 8.40;
	e[1].totalFichas = 2;

    // Aluno 3
    e[2].nome = "Elanor Goodchild";
	e[2].matricula = 42300;
	e[2].ehBolsista = false;
	e[2].saldo = 2.00;
	e[2].totalFichas = 2;

    // Aluno 4
    e[3].nome = "Ouen Hogg";
	e[3].matricula = 38688;
	e[3].ehBolsista = false;
	e[3].saldo = 4.00;
	e[3].totalFichas = 2;

    // Aluno 5
    e[4].nome = "Heather Brownlock";
	e[4].matricula = 26933;
	e[4].ehBolsista = false;
	e[4].saldo = 4.30;
	e[4].totalFichas = 2;

    // Aluno 6
    e[5].nome = "Tobias Greenhand";
	e[5].matricula = 13015;
	e[5].ehBolsista = true;
	e[5].saldo = 0.40;
	e[5].totalFichas = 2;

    // Aluno 7
    e[6].nome = "Lunaria Bracegirdle";
	e[6].matricula = 31679;
	e[6].ehBolsista = false;
	e[6].saldo = 3.50;
	e[6].totalFichas = 2;
}

void resetaFichasEstudantes(Estudante estudantes[]) {
	for(int i = 0; i < MAX_ESTUDANTES; i++) {
		estudantes[i].totalFichas = 2;
	}
}
