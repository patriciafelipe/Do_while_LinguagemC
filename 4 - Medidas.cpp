#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float cm, m, mm, dcm;
int resp;
resp=1;

do{
printf("\n Digite a medida em centimetros:");
scanf("%f", &cm);
m=cm/100;
mm=cm/0.10000;
dcm = cm/10;
printf("\n A medida em Metros �:%.2f", m,"Metros");
printf("\n A medida em Mil�metros �:%.2f", mm,"Milimetros");
printf("\n A medida em Dec�metros �:%.2f", dcm,"Dec�metros");
	resp=resp+1;
} while(resp<=10);

system("PAUSE");
return 0;
}
