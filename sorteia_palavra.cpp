#include<iostream>
#include<vector>
#include<ctime>
#include<string>

#include "le_arquivo.hpp"

using namespace std;

string sorteia_palavra(){
	vector<string> palavras = le_arquivo();

	srand(time(NULL));
	int indice_sorteado = rand() % palavras.size();

	return palavras[indice_sorteado];
} // Fim da função sorteia_palavra