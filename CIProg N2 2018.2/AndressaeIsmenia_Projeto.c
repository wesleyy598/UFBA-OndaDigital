#include <stdio.h>
#include <math.h>

#define estudante 1.85
#define inteira 3.70
#define gratuidade 0
#define metro 2.22
#define sobra 1.48

int sla;

long calc(long catra){
long catracaf, catracai, result;

printf("Digite a catraca final: \n");
scanf("%ld",&catracaf);

printf("Digite a catraca inicial:\n");
scanf("%ld" ,&catracai);

result = catracaf-catracai; 
sla = result;

return 0;
}

float tippas (float p){
float i, est, grat, CCR,METRO,res,quantpas;

printf("\nDigite a quantidade de passageiros: \n\n");

printf("Estudantes: \n");
scanf("%f",&est);

printf("Inteira: \n");
scanf("%f",&i);

printf("Gratuidade: \n");
scanf("%f",&grat);

printf("Integracao: \n");
scanf("%f",&quantpas);

printf ("_______________________________________________________\n\n");
printf ("\tResultado:\n\n");

printf("Quatidade de passageiros: %ld \n\n\n", sla);

est = estudante*est;
printf("Estudante: %.2f \n",est);

i = inteira * i;
printf("inteira: %.2f \n",i);

CCR = quantpas; 

CCR = metro * CCR;
printf("Parcela do CCR: %.2f \n",CCR);

METRO = quantpas;

METRO = sobra * METRO;
printf("Parcela da empresa: %.2f \n\n",METRO);

res = i + METRO;

printf("Valor para arrecardaçao: %.2f \n\n",res);

return 0;
}

int main(){
int matricula;

printf ("\t\n           Bem vindo ao Relatorio de Operacao de Veiculo (ROV)\n _______________________________________________________\n\n");

long catra;
float p;
calc(catra);
tippas(p);

printf ("Matricula:\n");
scanf ("%d", &matricula);
if(matricula==2344){
printf ("Nome = Luis Carlos da Silva Santos\n Nome da linha = CabulaVI/Ondina\n Numero da linha = 1130");
}
else{ printf ("Matricula inválida!");
}
return 0;
}
