/**
 * 	Jogo da Velha em C/C++
 * 	É um jogo de regras extremamente simples, que não traz grandes dificuldades para seus
 * 	jogadores e é facilmente aprendido.
 * 	@use: g++ jogodavelha.cpp lib/velha.cpp -o jogodavelha
 *	@use: make - Executando o all: do Makefile
 *	@author: Walderlan Sena <eu@walderlan.xyz>
 *	@license: License GPL <http://gnu.prg/lincense>
 *	@version v0.2.6
 */

#include "lib/velha.hpp"	//Bibliotecas com as funções e operações do software


/**
 *	Inicio Método Main
 */
int main(int argc, char **argv){
	
	/**
	 *	Chamando a função que inicializa o Game
	 */
	vl_initGame();


	return 0;	// Retorna zero para o SO
}//End main
