
 
// Includes de bibliotecas
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Declaracao de constantes
#define MAX_VALOR 2
#define ficha 2.00


typedef struct TipoEstudante {
    char* nomes;
    int matricula;
    float saldos;
    bool ehBolsista;
    int fichas;
} Estudante;

// Assinaturas (prototipos) das funcoes
int interface(Estudante alunos[]);
void vendas(Estudante *Pm );
void recarregar(Estudante *Pm,Estudante alunos[]);
void relatorio(Estudante alunos[]);


// Funcao main()
int main() {

    Estudante alunos[MAX_VALOR];
    alunos[0].nomes = "Joaozinho";
    alunos[0].matricula = 58400;
    alunos[0].saldos =10.40;
    alunos[0].ehBolsista =false;
    alunos[0].fichas=2;

    alunos[1].nomes = "fundencio";
    alunos[1].matricula = 30158;
    alunos[1].saldos =11.32;
    alunos[1].ehBolsista =true;
    alunos[1].fichas=2;


    while (interface(alunos)==1) {

    }

    return 0;
}


// Funcoes auxiliares

int interface(Estudante alunos[]) {
    int matri,i;
    int x=9;
    Estudante *Pm = & alunos[0] ;
    // Flag=0;



    printf("digite matricula \n");
    scanf("%d", &matri);
    for (i = 0; i < MAX_VALOR && Pm->matricula != matri; i++) {
        Pm++;
    }
    if( i>=MAX_VALOR)
    {
        printf("matricula nao existe try again\n ");
        return 1;
    }
    while(x!=0) {
       
        printf(" |se quer compra (1)| \n |se quer recarregar (2)|\n |para ver o relatorio (3)|\n |se quer finalizar (0)| \n");
        scanf("%d",&x);
        
        switch (x)
        {
        case 1:

            if(Pm->fichas>0)
               
                vendas(Pm);

            if(Pm->fichas<=0){
               
                printf("voce nao tem ficha\n");
			
                printf("|para encerrar digite 0|\n |para recarregar digite (2)|\n |para relatorio digite (3)|\n ");
                scanf("%d",&x);
                switch (x)
				        {       
                 case 0:
                 return 0;

                  break;
                 case 2:
                 system("clear");
              
                 recarregar(Pm,alunos);
                 
                 break;
                 case 3:
                 system("clear");
                  relatorio(alunos);

                 break;
                default:
                system("clear");
                  printf("Numero invalido \n"); 
                 break; 
				        }
			
			
		}
			break;
        case 2:
           system("clear");
            recarregar(Pm,alunos);

            break;
        case 3:
           system("clear");
            relatorio(alunos);

            break;
        case 0:
            
            return 0;
            break;


        }

    }


    return 0;
}


void vendas(Estudante *Pm)
{  
    if (Pm->ehBolsista== true)
	{

        printf("%.2f \n", Pm->saldos);
        Pm->fichas = Pm->fichas-1 ;
        printf("voce ainda tem %d de fichas \n",Pm->fichas);
    }
	

    if(Pm->ehBolsista== false)
    {   if(Pm->saldos>=ficha){
          Pm->saldos = Pm->saldos-ficha;
          printf("seu saldo eh %.2f \n", Pm->saldos);
          Pm->fichas = Pm->fichas-1 ;
          printf("voce ainda tem %d de fichas \n",Pm->fichas);
        }  
        else
        printf("voce nao tem saldo \n");    
    
    }   


}

void recarregar(Estudante *Pm, Estudante alunos[]) {
    int reca;
    printf("digite o valor da recarregar \n(5). \n(10). \n(15).\n caso deseja voltar para tela principal digite (0)\n.");
    scanf ("%d",&reca);

    switch (reca)
    {
    case 5:

        Pm->saldos = Pm->saldos+5;
        printf("seu saldo atual eh de %.2f \n",Pm->saldos);

        break;
    case 10:

        Pm->saldos = Pm->saldos+10;
        printf("seu saldo atual eh de %.2f\n",Pm->saldos);

        break;
    case 15:

        Pm->saldos = Pm->saldos+15;
        printf("seu saldo atual eh de %.2f \n ",Pm->saldos);

        break;
    case 0:

        break;
    default:
     printf("Numero invalido \n"); 
     break; 
    }
}

void relatorio(Estudante alunos[] ) {

    printf("NOME | MATRICULA | SALDO | FICHAS \n");
    for(int j=0; j<MAX_VALOR; j++)
    {
        if(alunos[j].ehBolsista==true )
            printf("%s | %d | bolsista |  %d  |\n" ,alunos[j].nomes, alunos[j].matricula ,alunos[j].fichas);
        else
            printf("%s | %d | %.2f  |  %d| \n" ,alunos[j].nomes,alunos[j].matricula, alunos[j].saldos, alunos[j].fichas);
    }
}
