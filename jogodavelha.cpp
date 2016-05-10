//----------------------------------------//
// JOGO DA VELHA - em C++                //
// Desenvolvedor: Walderlan Soares Sena //
//                                     //
// -----------------------------------//

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int  i;//Controle do Laço
char tabela[3][3] = {'1','2','3','4','5','6','7','8','9',};//Array da tabela
bool result;//Armazena Resultado das Posições
int  jogadas = 0;//Calcula numeros de Jogadas

bool resultado(){
	//Verifica a tabela no modo horizontal
	if(tabela[0][0] == 'O' && tabela[0][1] == 'O' && tabela[0][2] == 'O' || 
	   tabela[1][0] == 'O' && tabela[1][1] == 'O' && tabela[1][2] == 'O' ||
	   tabela[2][0] == 'O' && tabela[2][1] == 'O' && tabela[2][2] == 'O'){
			cout << endl << "#---------- Jogador 1° Ganhou ----------#" << endl;
			result = true;
			exit(0);//Sair do Programa
	}else 

	if(tabela[0][0] == 'O' && tabela[1][0] == 'O' && tabela[2][0] == 'O' ||
	   tabela[0][1] == 'O' && tabela[1][1] == 'O' && tabela[2][1] == 'O' ||
	   tabela[0][2] == 'O' && tabela[1][2] == 'O' && tabela[2][2] == 'O'){
			 cout << endl << "#---------- Jogador 1° Ganhou ----------#" << endl;
			 result = true;
			 exit(0);//Sair do Programa
	}else

	if(tabela[0][0] == 'O' && tabela[1][1] == 'O' && tabela[2][2] == 'O' ||
	   tabela[2][0] == 'O' && tabela[1][1] == 'O' && tabela[0][2] == 'O'){
			cout << endl << "#---------- Jogador 1° Ganhou ----------#" << endl;
			result = true;
			exit(0);//Sair do Program
	}

	//Jogador 2
	
	//Verifica a tabela no modo horizontal
	if(tabela[0][0] == 'X' && tabela[0][1] == 'X' && tabela[0][2] == 'X' || 
	   tabela[1][0] == 'X' && tabela[1][1] == 'X' && tabela[1][2] == 'X' ||
	   tabela[2][0] == 'X' && tabela[2][1] == 'X' && tabela[2][2] == 'X'){
			cout << endl << "#---------- Jogador 2° Ganhou ----------#" << endl;
			result = true;
			exit(0);//Sair do Programa
	}else 

	if(tabela[0][0] == 'X' && tabela[1][0] == 'X' && tabela[2][0] == 'X' ||
	   tabela[0][1] == 'X' && tabela[1][1] == 'X' && tabela[2][1] == 'X' ||
	   tabela[0][2] == 'X' && tabela[1][2] == 'X' && tabela[2][2] == 'X'){
			 cout << endl << "#---------- Jogador 2° Ganhou ----------#" << endl;
			 result = true;
			 exit(0);//Sair do Programa
	}else

	if(tabela[0][0] == 'X' && tabela[1][1] == 'X' && tabela[2][2] == 'X' ||
	   tabela[2][0] == 'X' && tabela[1][1] == 'X' && tabela[0][2] == 'X'){
			cout << endl << "#---------- Jogador 2° Ganhou ----------#" << endl;
			result = true;
			exit(0);//Sair do Program
	}else
	//Verifica se tem empate
	if(jogadas == 9){
		cout << endl << "(: ---------- Jogo Empatado ---------- :) " << endl;
		result = true;
		exit(0);//Sair do Program
	}
	return result;
}//End Resultado


void tela(){
	system("clear");//Limpando Tela [ Modifique para 'cls' no caso de Windows ]
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;	
	cout << "!!!!!! JOGO DA VELHA !!!!!!" << endl;	
	cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	cout << endl;
	//cout << "   0   1   2 " << endl;
	cout << "     " << tabela[0][0] << " | " << tabela[0][1] << " | " << tabela[0][2] << endl;
	cout << "    ---|---|--- " << endl;
    cout << "     " << tabela[1][0] << " | " << tabela[1][1] << " | " << tabela[1][2] << endl;
	cout << "    ---|---|--- " << endl;
	cout << "     " << tabela[2][0] << " | " << tabela[2][1] << " | " << tabela[2][2] << endl;
	
	resultado();//Calculo das posições

}//End Função Tela

void condicao(int opcao, int joga1, int joga2){
	if(joga1 < joga2){
		jogadas++;
		switch(opcao){
				//Coluna 01
				case 1:
					tabela[0][0] = 'X';
					break;
				case 2:
					tabela[0][1] = 'X';
					break;
				case 3:
					tabela[0][2] = 'X';
					break;
				//End Coluna 01
				
				//Coluna 02
				case 4:
					tabela[1][0] = 'X';
					break;
				case 5:
					tabela[1][1] = 'X';
					break;
				case 6:
					tabela[1][2] = 'X';
					break;
				//End Coluna 02

				//Coluna 03
				case 7:
					tabela[2][0] = 'X';
					break;	
				case 8:
					tabela[2][1] = 'X';
					break;
				case 9:
					tabela[2][2] = 'X';
					break;
				default:
					cout << "Thau ! Opcao Invalida..." << endl;
					i = 100;//Atribuição para terminar o programa
					break;
				//End Coluna 03
			}//Switch01
		}else{
			jogadas++;
			switch(opcao){
				//Coluna 01
				case 1:
					tabela[0][0] = 'O';
					break;
				case 2:
					tabela[0][1] = 'O';
					break;
				case 3:
					tabela[0][2] = 'O';
					break;
				//End Coluna 01
				
				//Coluna 02
				case 4:
					tabela[1][0] = 'O';
					break;
				case 5:
					tabela[1][1] = 'O';
					break;
				case 6:
					tabela[1][2] = 'O';
					break;
				//End Coluna 02

				//Coluna 03
				case 7:
					tabela[2][0] = 'O';
					break;	
				case 8:
					tabela[2][1] = 'O';
					break;
				case 9:
					tabela[2][2] = 'O';
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
										
	int jogador1 = 1,jogador2 = 2;
	
	do{
		int posicao;//Variavel de Controle		
		tela();//Mostar a Tela Inicial do Jogo
		
		//Inicio do Jogo
		
		if(jogador1 < jogador2){
			cout << endl << endl;
			cout << "Primeiro Jogador: " << endl;
			jogador1++;
		}else{
			cout << endl << endl;
			cout << "Segundo Jogador: " << endl;
			jogador2++;
		}
		//cout << "Total de Jogadas Realizadas: " << jogadas << endl;
		cout << "Digite uma posicao: ";
			cin >> posicao;
		
		condicao(posicao,jogador1,jogador2);//Verifica a Posição Digitada

	}while(i != 100);
}//End main