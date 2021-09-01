#include<string>
#include<map>

#include "nao_acertou.hpp"

using namespace std;

bool nao_acertou(string& palavra_secreta, const map<char, bool>& chutou){
	for (char letra : palavra_secreta){
		if (chutou.find(letra) == chutou.end() || !chutou.at(letra)){
			return true;
		} // Fim da condição if
	} // Fim do laço for
	return false;
} // Fim da função nao_acertou