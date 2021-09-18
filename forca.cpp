/*
 * ALURA
 * Data: 24.07.2021
 * Curso: C++
 * 
 */

// Bibliotecas incluídas neste arquivo
#include<string>
#include<iostream>
#include<map>
#include<vector>
#include<fstream>
#include<ctime>
#include<cstdlib>

#include "imprime_erros.hpp"
#include "imprime_palavra.hpp"
#include "imprime_cabecalho.hpp"
#include "chuta.hpp"
#include "adiciona_palavra.hpp"
#include "nao_acertou.hpp"
#include "sorteia_palavra.hpp"

using namespace std;

static string palavra_secreta;
static map<char, bool> chutou;
static vector<char> chutes_errados;

int main (){

	imprime_cabecalho();

	palavra_secreta = sorteia_palavra();

	while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){
		
		imprime_erros(chutes_errados);
		imprime_palavra(palavra_secreta, chutou);
		chuta(&chutou, &chutes_errados);
		
	} // Fim do laço de repetição while

	if(nao_acertou(palavra_secreta, chutou)){
		cout << "Voce perdeu! Tente novamente";
	} 
	else {
		cout << "Parabens! Voce acertou! A palavra secreta era " << palavra_secreta << "." << endl;

		cout << "Voce deseja adicionar uma nova palavra ao banco? (S/N) ";
		
		char resposta;
		cin >> resposta;

		if(resposta == 'S'){
			adiciona_palavra();
		}
	}
	
	cout << endl;
	cout << "FIM DE JOGO!" << endl;
	
	return 0;

} // Fim da classe main