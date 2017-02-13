// ############################################################
// 										Jogo da Velha em C++
//                									v0.2.3
//										Software Open Source
// Desenvolvedor: Walderlan Sena | by: http://www.walderlan.xyz
// Curriculo: https://github.com/WalderlanSena/curriculo
// ############################################################

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

#define LIMPAR "clear" // Difine para Limpar a tela [ Modifique para 'cls' no caso de Windows ]

int  i;  //Controle do Laço
char tabela[3][3]   = {'1','2','3','4','5','6','7','8','9'}; //Array da tabela
int  control[3][3];                  // Array de controle de jogadas dos usuarios
int  jogadas        = 0;            // Calcula numeros de Jogadas
int  modo           = 0;           // Modo do jogo inicializado em SinglePlayer ou MultiPlayer
char player1[50]    = "";  // Nome do 1° jogador(a)
char player2[50]    = ""; //  Nome do 2° jogador(a)

// Função de demostração do nome e informações da versão do Jogo
void menuBanner(){
	system("clear");
	cout << "x-----------------------------x" << endl;
	cout << "o    JOGO DA VELHA EM C++     o" << endl;
	cout << "o                   v0.2.3    o" << endl;
	cout << "x-----------------------------x" << endl;
	cout << endl;
}
// Funçõa de escolha para o modo do jogo - Single Player ou MultiPlayer
void menuModo(){
	menuBanner();
	cout << setw(27) << "SELECIONE O MODO DO JOGO:" << endl << endl;
	cout << setw(25) << "[ 1  - Single Player ]"    << endl;
	cout << setw(25) << "[ 2  - MultiPlayer   ]"    << endl;
	cout << setw(25) << "[ 99 - Sair do Jogo  ]"    << endl;
	cout << setw(25) << "--------------------"    << endl;
	cout << setw(27) << "Digite o Modo do Jogo > ";
		cin >> modo; // atribuindo o valor ao modo do Jogo
		// Verificando qual opção foi escolhida
		switch(modo){
			case 1:
				cout << "Desculpe ! Opcao ainda em desenvolvimento..." << endl;
				exit(0);
				break;

			case 2:
				cout << "Digite o nome do 1° Jogador(a) sem espacos: ";
					cin >> player1;
				cout << "Digite o nome do 2° Jogador(a) sem espacos: ";
					cin >> player2;
				break;

			case 99:
				cout << endl << "#------------- Fim de Jogo -------------#" << endl;
				cout << "#------------------ by: Walderlan Sena -#" << endl;
				exit(0);
				break;

			default:
				exit(0);
		} // end switch

}

char resultado(char player1[],char player2[]){
	// Verifica a tabela no modo horizontal
	if(tabela[0][0] == 'O' && tabela[0][1] == 'O' && tabela[0][2] == 'O' ||
	   tabela[1][0] == 'O' && tabela[1][1] == 'O' && tabela[1][2] == 'O' ||
	   tabela[2][0] == 'O' && tabela[2][1] == 'O' && tabela[2][2] == 'O'){
			cout << endl << "#---------- Jogador 1° " << player1 << " Ganhou ----------#" << endl;
			exit(0); // Sair do Programa
	}else

	if(tabela[0][0] == 'O' && tabela[1][0] == 'O' && tabela[2][0] == 'O' ||
	   tabela[0][1] == 'O' && tabela[1][1] == 'O' && tabela[2][1] == 'O' ||
	   tabela[0][2] == 'O' && tabela[1][2] == 'O' && tabela[2][2] == 'O'){
			 cout << endl << "#---------- Jogador 1° " << player1 << " Ganhou ----------#" << endl;
			 exit(0); //Sair do Programa
	}else

	if(tabela[0][0] == 'O' && tabela[1][1] == 'O' && tabela[2][2] == 'O' ||
	   tabela[2][0] == 'O' && tabela[1][1] == 'O' && tabela[0][2] == 'O'){
			 cout << endl << "#---------- Jogador 1° " << player1 << " Ganhou ----------#" << endl;
			exit(0); //Sair do Program
	}

	// Verificando Jogadas do Segundo Jogador(a) 2

	//Verifica a tabela no modo horizontal
	if(tabela[0][0] == 'X' && tabela[0][1] == 'X' && tabela[0][2] == 'X' ||
	   tabela[1][0] == 'X' && tabela[1][1] == 'X' && tabela[1][2] == 'X' ||
	   tabela[2][0] == 'X' && tabela[2][1] == 'X' && tabela[2][2] == 'X'){
			 cout << endl << "#---------- Jogador(a) 2° " << player2 << " Ganhou ----------#" << endl;
			exit(0);//Sair do Programa
	}else

	if(tabela[0][0] == 'X' && tabela[1][0] == 'X' && tabela[2][0] == 'X' ||
	   tabela[0][1] == 'X' && tabela[1][1] == 'X' && tabela[2][1] == 'X' ||
	   tabela[0][2] == 'X' && tabela[1][2] == 'X' && tabela[2][2] == 'X'){
			 cout << endl << "#---------- Jogador(a) 2° " << player2 << " Ganhou ----------#" << endl;
			 exit(0);//Sair do Programa
	}else

	if(tabela[0][0] == 'X' && tabela[1][1] == 'X' && tabela[2][2] == 'X' ||
	   tabela[2][0] == 'X' && tabela[1][1] == 'X' && tabela[0][2] == 'X'){
			 cout << endl << "#---------- Jogador 2° " << player2 << " Ganhou ----------#" << endl;
			exit(0);//Sair do Program
	}else
	//Verifica se tem empate
	if(jogadas == 9){
		cout << endl << "(: ---------- Jogo Empatado ---------- :) " << endl;
		//result = true;
		exit(0);//Sair do Program
	}
	//return result;
}//End Resultado

// Função que Imprimi a tela do Jogo
void tela(){

	menuBanner(); // Chamando a função do Banner do Software
	int contJogadas = 9 - jogadas; // Verifica quantas jogadas foram realizadas
	cout << setw(22) << "Faltam: " << contJogadas << " Jogadas" << endl << endl;
	// Imprimindo a tela do Jogo
	cout << setw(12) << tabela[0][0] << " | " << tabela[0][1] << " | " << tabela[0][2] << endl;
	cout << setw(22) << "---|---|--- " << endl;
  cout << setw(12) << tabela[1][0] << " | " << tabela[1][1] << " | " << tabela[1][2] << endl;
	cout << setw(22) << "---|---|--- " << endl;
	cout << setw(12) << tabela[2][0] << " | " << tabela[2][1] << " | " << tabela[2][2] << endl;

	resultado(player1, player2); //Calculo das posições

} //End Função Tela

void condicao(int opcao, int joga1, int joga2){
	if(joga1 < joga2){
		jogadas++;
		switch(opcao){
				//Coluna 01
				case 1:
					if(control[0][0] != 1){
						tabela[0][0]  = 'X';
						control[0][0] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 2:
					if(control[0][1] != 1){
						tabela[0][1]  = 'X';
						control[0][1] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 3:
					if(control[0][2] != 1){
						tabela[0][2]  = 'X';
						control[0][2] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				//End Coluna 01

				//Coluna 02
				case 4:
					if(control[1][0] != 1){
						tabela[1][0]  = 'X';
						control[1][0] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 5:
					if(control[1][1] != 1){
						tabela[1][1]  = 'X';
						control[1][1] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 6:
					if(control[1][2] != 1){
						tabela[1][2]  = 'X';
						control[1][2] =  1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				//End Coluna 02

				//Coluna 03
				case 7:
					if(control[2][0] != 1){
						tabela[2][0]  = 'X';
						control[2][0] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 8:
					if(control[2][1]  != 1){
						tabela[2][1]  = 'X';
						control[2][1] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				case 9:
					if(control[2][2] != 1){
						tabela[2][2]  = 'X';
						control[2][2] = 1;
					}else{
						joga1--;
						jogadas--;
					}
					break;
				default:
					cout << "Thau ! Opcao Invalida..." << endl;
					cout << "by: Walderlan Sena" << endl;
					i = 99; //Atribuição para terminar o programa
					break;
				//End Coluna 03
			}//Switch 01
		}else{
			jogadas++;
			switch(opcao){
				//Coluna 01
				case 1:
					if(control[0][0] != 1){
						tabela[0][0] = 'O';
						control[0][0] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 2:
					if(control[0][1] != 1){
						tabela[0][1]  = 'O';
						control[0][1] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 3:
					if(control[0][2] != 1){
						tabela[0][2]  = 'O';
						control[0][2] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				//End Coluna 01

				//Coluna 02
				case 4:
					if(control[1][0] != 1){
						tabela[1][0]  = 'O';
						control[1][0] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 5:
					if(control[1][1] != 1){
						tabela[1][1]  = 'O';
						control[1][1] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 6:
					if(control[1][2] != 1){
						tabela[1][2]  = 'O';
						control[1][2] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				//End Coluna 02

				//Coluna 03
				case 7:
					if(control[2][0] != 1){
						tabela[2][0]  = 'O';
						control[2][0] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 8:
					if(control[2][1] != 1){
						tabela[2][1]  = 'O';
						control[2][1] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				case 9:
					if(control[2][2] != 1){
						tabela[2][2]  = 'O';
						control[2][2] = 1;
					}else{
						joga2--;
						jogadas--;
					}
					break;
				default:
					cout << "Thau! Opcao Invalida..." << endl;
					i = 100;//Atribuição para terminar o programa
					break;
				//End Coluna 03
			}//Switch02
		}//End IF


}//End Função Condição

//Metódo Main
main(){

	int jogador1 = 1, jogador2 = 2;
	menuModo();
	do{
		int posicao; //Variavel de Controle

		tela();     //Mostar a Tela Inicial do Jogo

		// ========== Inicio do Jogo =========

		// Verifica qual jogador(a) deve realizar a jogada no momento
		if(jogador1 < jogador2){
			cout << endl << endl;;
			cout << "Primeiro Jogador(a): " << player1 << endl << endl;
			jogador1++;
		}else{
			cout << endl << endl;
			cout << "Segundo Jogador(a): " << player2  << endl << endl;
			jogador2++;
		}
		cout << setw(27) << "Digite uma posicao: ";
			cin >> posicao; // Captura o valor da posição digitada pelo o jogador(a)

		//Verifica a Posição Digitada
		condicao(posicao,jogador1,jogador2);

	}while(i != 99);
}//End main
