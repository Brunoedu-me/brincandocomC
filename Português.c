#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Este programa imprime a primeira pot�ncia de 2 maior ou igual a 1000

int main(void) {
	setlocale(LC_ALL,"PORTUGUESE");
float a, b; //a e b s�o dois n�meros reais
char opcao; //opcao � um caracter

do {

printf("Informe dois n�meros reais: ");

scanf("%f%f", &a, &b); //l� dois n�meros reais

printf("1. Soma\t 2. Multiplica��o\t Para sair informe qualquer outro valor:\n");

scanf("\n%c", &opcao); //l� um caracter

switch (opcao) {

case '1': printf("%.2f\n", a + b);

break;

case '2': printf("%.2f\n", a * b);

break;

default: printf("Bye bye\n");

}

//Continua no loop enquanto a op��o digitada for 1 ou 2

} while (opcao == '1' || opcao == '2'); //Operador l�gico OR (||)
 return 0;
}
