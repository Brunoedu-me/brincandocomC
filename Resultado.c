#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){ 
float num1, num2, res;
printf("Insira o valor de num1:");
scanf("%f", &num1);

printf("Insira o valor de num2:");
scanf("%f", &num2);

res= num1/num2;

if (num2==0){
	printf("A operação não será realizada.");
	system ("PAUSE");
}else{
	printf("O resultado da operacao e: %.2f", res);
}
return 0;
}
