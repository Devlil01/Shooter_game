#include <iostream>
#include <stdlib.h>

#define horizontal 20 //(x)
#define vertical 60 //(y)

char nome[30];
int val;

using namespace std;

void sair(){
	saida:
	system("pause");

void creditos()
{
	
	creditos:
	
	cout << "Feito por devlil_ \n";
	cout << "Deseja voltar? \n";
	cout << "[1]Sim, [2]Não \n"
	cin >> val;
	
	switch(val){
		case 1:
			goto main;
		break;
		case 2:
			cout<< "Sair do jogo?";
			cout<< "[1]Sim";
			cin >> val;
			switch(val){
				case 1:
					goto saida;
				break; 
				default:
				cout << "valor invalido"; 	
			}
		default:
		cout << "valor invalido";	
	}
	
void instrucoes(){

}

void jogo(){
	
	
}

int main(){
	
main:
	
cout <<  "   _____ _    _  ____   ____ _______ ______ _____  ";
cout <<  "  / ____| |  | |/ __ \ / __ \__   __|  ____|  __ \ ";
cout <<  " | (___ | |__| | |  | | |  | | | |  | |__  | |__)|";
cout <<  "  \___ \|  __  | |  | | |  | | | |  |  __| |  _  / ";
cout <<  "   ____)| |  | | |__| | |__| | | |  | |____| | \ \ ";
cout <<  " |_____/|_|  |_|\____/ \____/  |_|  |______|_|  \_\ \n"; 
 
cout << "MENU";
cout << "[1]Jogar, [2]Instrucoes, [3]Creditos";//menu
cin >> val;
	
	switch(val){ //canais de entrada(funções)
		case 1:
			jogo();//jogo em si
		break;
		case 2:
			instrucoes();//instruções
		break;
		case 3:
		    goto creditos: //creditos
		break;
		default
	}
	
	return 0;
}

