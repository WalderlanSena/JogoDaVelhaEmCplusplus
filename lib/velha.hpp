#ifndef VELHA_H
#define VELHA_H

/**
 * Inicio Bibliotecas ultilizadas no software
 */

#include <iostream>		//Biblioteca padrão c++
#include <iomanip>		//|| Operação de espaços
#include <cstdlib>		//|| Operação para limpar o teminal a cada impressão

using namespace std;	// Usuando os espaço de nomes std

/**
 *	Prótotipo das função utilizadas no software
 */

/**
 *	Função de demostração do nome e informações da versão do Jogo
 */ 
void vl_menuBanner(void);

/**
 *	Função de escolha para o modo do jogo - Single Player ou MultiPlayer
 */ 
void vl_menuModo(void);

/**
 *	Função que calcula o resultado o player1 e player2
 *
 */
void vl_result(char player1[],char player2[]);

/**
 *	Função que imprime a tela inicial do jogo
 */ 
void vl_screen(void);


/**
 *	Verifica as codições para cada jogada
 *	@param OPCAO (onde deseja Jogar)
 *	@param joga1 (Quantidade de jogadas realizadas pelo Jogador1)
 *	@param joga2 (Quantidade de jogadas realizadas pelo Jogador2)
 */ 
void vl_condition(int opcao, int joga1, int joga2);

/**
 *	Função que inicializa o Game
 */
void vl_initGame(void);

#endif