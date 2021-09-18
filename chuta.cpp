#include<iostream>
#include<string>
#include<map>
#include<vector>

#include "letra_existe.hpp"
#include "chuta.hpp"

using namespace std;

void chuta(map<char, bool>& chutou, vector<char>& chutes_errados){
	cout << "Seu chute: ";
	char chute;
	cin >> chute;

	chutou[chute] = true;

	if(letra_existe(chute)){
		cout << "Voce acertou! Seu chute esta na palavra." << endl;
	} 
	else {
		cout << "Voce errou! Seu chute nao esta na palavra." << endl;
		chutes_errados.push_back(chute);
	} // Fim da condição if

	cout << endl;
} // Fim da função chuta