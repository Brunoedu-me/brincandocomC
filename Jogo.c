#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Criando as variaveis globais
int posicaoLinha = 8;
int posicaoColuna = 1;
char jogador = '^';
int fimDeJogo = 0;


//jogo[posicaoLinha][posicaoColuna] = jogador;

//Criando a funcao principal
void joguinho(void){
	//Criando a variavel que recebe o movimento
	char mov;
	//Criando o labirinto
	char labirinto[10][30] ={
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','F'},
	{'#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#'},
	{'#','#',' ',' ',' ','#','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#',' ','#'},
	{'#','#',' ','#',' ',' ',' ','#','#',' ',' ',' ','#','#',' ','#','#','#','#','#','#','#','#',' ',' ',' ','#','#',' ','#'},
	{'#','#',' ','#','#','#',' ','#','#',' ','#','#','#','#',' ',' ',' ',' ','#','#','#',' ',' ',' ','#',' ','#','#',' ','#'},
	{'#',' ',' ','#','#','#',' ',' ',' ',' ','#','#','#','#','#','#','#',' ','#','#','#',' ','#','#','#',' ',' ',' ',' ','#'},
	{'#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#',' ',' ',' ',' ',' ','#','#','#','#','#','#','#','#'},
	{'#',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
	{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}};
	//Posicionando o Jogador
	labirinto[posicaoLinha][posicaoColuna] = jogador;
	int i,j;
	//Laço para repetir o jogo até chegar ao fim do jogo
	while(fimDeJogo == 0){
		//Limpando a tela
		system("cls");
		//Printando o labirinto na tela
		for(i = 0; i <= 9; i++){
		
			for(j = 0; j <= 29; j++){
				printf("%c",labirinto[i][j]);
			}
			printf("\n");
		}
		//Pedindo o movimento do jogador
		printf("Informe seu movimento\n");
		printf("> W - Cima\n");
		printf("> S - Baixo\n");
		printf("> D - Direita\n");
		printf("> A - Esquerda\n");
		printf("\n");
		scanf("%c", &mov);
		//Verificando a movimentacao
		if(toupper(mov) == 'W'){
			if(labirinto[posicaoLinha -1][posicaoColuna] != '#'){
				labirinto[posicaoLinha][posicaoColuna] = ' ';
				posicaoLinha--;
			}
		}
		else if(toupper(mov) == 'S'){
			if(labirinto[posicaoLinha + 1][posicaoColuna] != '#'){
				labirinto[posicaoLinha][posicaoColuna] = ' ';
				posicaoLinha++;
			}
		}
		else if(toupper(mov) == 'A'){
			if(labirinto[posicaoLinha][posicaoColuna - 1] != '#'){
				labirinto[posicaoLinha][posicaoColuna] = ' ';
				posicaoColuna--;
			}
		}
		else if(toupper(mov) == 'D'){
			if(labirinto[posicaoLinha][posicaoColuna + 1] != '#'){
				labirinto[posicaoLinha][posicaoColuna] = ' ';
				posicaoColuna++;
			}
		}
		if(posicaoLinha == 1 && posicaoColuna == 29){
			system("cls");
			printf("Parabens vc venceu!!!!");
			fimDeJogo = 1;
		}
		//Reposicionando o jogador
		labirinto[posicaoLinha][posicaoColuna] = jogador;
	}
} 

int main(){
	//Chamando a funcao principal
	joguinho();
	return 0;
}
