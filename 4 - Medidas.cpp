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
printf("\n A medida em Metros é:%.2f", m,"Metros");
printf("\n A medida em Milímetros é:%.2f", mm,"Milimetros");
printf("\n A medida em Decímetros é:%.2f", dcm,"Decímetros");
	resp=resp+1;
} while(resp<=10);

system("PAUSE");
return 0;
}
