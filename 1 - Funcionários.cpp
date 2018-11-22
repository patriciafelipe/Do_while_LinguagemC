#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float nd,vh,ht,vb,vl;
int resp;
resp=1;
do{
printf("\n Número de dependentes:");
scanf("%f", &nd);
printf("\n Valor Hora:");
scanf("%f", &vh);
printf("\n Horas trabalhadas:");
scanf("%f", &ht);
vb = vh*ht;
printf(" Valor Bruto: %.2f \n", vb);
vl = vb+(nd*300);
printf(" Valor Líquido: %.2f \n", vl);
resp=resp+1;
} while(resp<=10);

system("PAUSE");
return 0;
}
