#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Este programa imprime a primeira potência de 2 maior ou igual a 1000

int main(void) {
	setlocale(LC_ALL,"PORTUGUESE");
float a, b; //a e b são dois números reais
char opcao; //opcao é um caracter

do {

printf("Informe dois números reais: ");

scanf("%f%f", &a, &b); //lê dois números reais

printf("1. Soma\t 2. Multiplicação\t Para sair informe qualquer outro valor:\n");

scanf("\n%c", &opcao); //lê um caracter

switch (opcao) {

case '1': printf("%.2f\n", a + b);

break;

case '2': printf("%.2f\n", a * b);

break;

default: printf("Bye bye\n");

}

//Continua no loop enquanto a opção digitada for 1 ou 2

} while (opcao == '1' || opcao == '2'); //Operador lógico OR (||)
 return 0;
}
