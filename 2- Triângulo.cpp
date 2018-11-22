#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
float a,b,resul, resultado;
int resp;
resp=1;
do{
printf("\n A:");
scanf("%f", &a);
printf("\n B:");
scanf("%f", &b);

resul = a*b;
resultado = resul/resul; 
printf("O resultado de A * B é : %.2f \n",resultado);
		resp=resp+1;
} while(resp<=8);

}
