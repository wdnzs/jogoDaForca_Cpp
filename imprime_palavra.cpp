#include<iostream>

#include"imprime_palavra.hpp"

using namespace std;

void imprime_palavra(string palavra_secreta, map<char, bool> chutou){
	for(char letra : palavra_secreta){
		if(chutou[letra]){
			cout << letra << " ";
		} 
		else {
			cout << "_ ";
		}	
	} // Fim do laço for
	cout << endl;
} // Fim da função imprime_palavra_secreta