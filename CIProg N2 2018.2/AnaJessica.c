#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

struct cliente {
  char nome[25];
  int tel;
  int cpf;
  int servico;
};

typedef struct cliente cliente; 

struct filaclientes{
 cliente clientes[51];
 int totalcli; 
};

typedef struct filaclientes fc;

int verificacao (fc c, int cpf, int servico){
 for(int i=0; i<c.totalcli; i++){
   if ((c.clientes[i].cpf == cpf) && (c.clientes[i].servico == servico)){
     printf("Verificado\n");
    return 1;
   }
 }
 return 0;
}

fc addcli(fc c, char nome[], int tel, int cpf, int servico){
  cliente novo;
  if (verificacao(c,cpf,servico) == 0){
    strcpy(novo.nome, nome);
    novo.tel = tel;
    novo.cpf = cpf;
    novo.servico = servico;
    c.clientes[c.totalcli] = novo; 
    c.totalcli ++; 
    printf("Cliente cadastrado e agendado.\n");
  }
  else {
    printf ("Cliente já se encontra agendado.\n");
  }
  return c; 
}
 
int agendar();
void remover();
void imprimeTabelaPrecos();
void imprimeTabelaPromocoes();
int PessoasNaFrente();
int consultatamanhodafila();

void imprimeMenuPrincipal(){
  printf("\n\n Escolha a opção que deseja:\n ");
  printf("\n1-Tabela de preços:");
  printf("\n2-Agendar serviços:");
  printf("\n3-Cancelar agendamento:");
  printf("\n4-Consultar fila");
  printf("\n5-Sair\n");
}
void menu(){
  int numero; 
  int cpf;
  fc fila;
  int servico;

  imprimeMenuPrincipal();
  scanf("%d", &numero);
  while (numero!=5){
    switch (numero){
      case 1:
        imprimeTabelaPrecos();
        imprimeTabelaPromocoes();
        break;

      case 2:
        agendar(); 
        break;

      case 3:
        printf("Digite o seu cpf:\n");
        scanf("%d", &cpf);
        remover(fila, cpf);
        break;
      case 4:
        printf("Digite o número do serviço que você escolheu\n");
        scanf("%d", &servico);
        //consultatamanhodafila(fila,cpf);
        PessoasNaFrente(fila,servico);
        break;
      default:
        printf("OPÇÃO NÃO VALIDA\n");
        break;
    }
    imprimeMenuPrincipal();
    scanf("%d", &numero);
  }
}

void imprimeTabelaPrecos(){
  printf("\n***Tabela de preços***\n\n");
  printf("Barba R$20  \n");
  printf("Corte R$15\n");
  printf("Hidratação R$25 \n");
  printf("Luzes R$75 \n");
  printf("Coloração R$40 \n");
  printf("Sobrancelha R$15 \n");
  printf("Sobrancelha Navalha R$12\n");
  printf("Pigmentação R$25 \n");
  printf("Aplicação High Liss R$35 \n");
  printf("Relaxamento R$60 \n");
  printf("Manicure/Pedicure R$30\n");
  printf("Progressiva R$80 \n");
  printf("Escova R$28\n");
}
void imprimeTabelaPromocoes(){
  printf("\n**Também temos promoções**\n\n");
  printf("Relaxamento + Coloração R$85\n");
  printf("Progressiva + Manicure/Pedicure - Ganha limpeza na Sobrancelha\n");
  printf("Luzes + Relaxamento R$94,5\n");
  printf("Corte + Progressiva R$66,5\n");
  printf("Coloração + corte + Hidratação R$56\n");
  printf("Barba + Corte R$24,5\n");
}

void Tabela(){
  printf("\n Escolha a(s) opções que deseja:\n");
  printf("1: Barba\n");
  printf("2: Corte \n");
  printf("3: Hidratação \n");
  printf("4: Luzes \n");
  printf("5: Coloração \n");
  printf("6: Sobrancelha \n");
  printf("7: Sobrancelha Navalha \n");
  printf("8: Pigmentação  \n");
  printf("9: Aplicação High Liss  \n");
  printf("10: Relaxamento \n");
  printf("11: Manicure/Pedicure \n");
  printf("12: Progressiva \n");
  printf("13: Escova \n");
  printf("14: Relaxamento + Coloração \n");
  printf("15: Progressiva + Manicure/Pedicure - Ganha limpeza na Sobrancelha\n");
  printf("16: Luzes + Relaxamento\n");
  printf("17: Corte + Progressiva\n");
  printf("18: Coloração + corte + Hidratação\n");
  printf("19: Barba + Corte\n");
  
}
void remover(fc fila, int cpf){

  for(int i=0; i<fila.totalcli; i++){

   if (fila.clientes[i].cpf == cpf){
      for (int j = i; j< fila.totalcli; j++){
        fila.clientes[j-1] = fila.clientes[j];
      }
      }
    }
    fila.totalcli--;
    printf("Cliente removido.\n");
}
  // buscar o cpf na fila
  // se achar remover aquele cliente
  // e trazer todo mundo dps dele uma casa pra frente

int main() {

  printf("****** Auto-Atendimento CortesCortez ******");
  menu();
  
  return 0;
}

int PessoasNaFrente();

int agendar(fc c, char nome[], int tel, int cpf){
  int opcao;
    Tabela();
    scanf("%d", &opcao);

  /*switch(opcao){
    case 1:
      printf("Você escolheu Barba\n");
      break;
    case 2:
      printf("Você escolheu Corte\n");
      break;
    case 3:
      printf("Você escolheu Hidratação \n");
      break;
    case 4:
      printf("Você escolheu Luzes \n");
      break;
    case 5:
      printf("Você escolheu Coloração\n");
      break;
    case 6:
      printf("Você escolheu Sobrancelha\n");
      break;
    case 7:
      printf("Você escolheu Sobrancelha Navalha\n");
      break;
    case 8:
      printf("Você escolheu Barba\n");
      break;
    case 9:
      printf("Você escolheu Barba\n");
      break;
    case 10:
      printf("Você escolheu Barba\n");
      break;
    case 11:
      printf("Você escolheu Barba\n");
      break;
    case 12:
      printf("Você escolheu Barba\n");
      break;
    case 13:
      printf("Você escolheu Barba\n");
      break;
    case 14:
      printf("Você escolheu Barba\n");
      break;
    default:
      printf("OPÇÃO NÃO VALIDA\n");
    break;
  }*/

    printf("digite o seu nome:\n");
    scanf("%s", nome); 
    getchar(); 
    printf("digite o seu tel:\n");
    scanf("%d", &tel); 
    printf("digite o seu cpf:\n");
    scanf("%d", &cpf);
    c = addcli(c, nome, tel, cpf, opcao);
    PessoasNaFrente (c, opcao);
  return 0;
}

int consultatamanhodafila(fc c, int cpf){
   int cont=0;
   for(int i=0; i<c.totalcli; i++){
     if(c.clientes[i].cpf == cpf){
       break;
     } 
     cont++;
   }   
  printf("Tem um total de %d antes de você\n", cont -1);
  return cont;
}

int PessoasNaFrente (fc c, int servico){
  int cont=0;
  for(int i=0; i<c.totalcli; i++){
   if (c.clientes[i].servico == servico){
    cont ++;
   }
 }
 printf("Tem %d antes de você para o serviço %d", cont -1, servico);
 return 0;
}