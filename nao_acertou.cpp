#include<string>
#include<map>

using namespace std;

bool nao_acertou(string palavra_secreta, map<char, bool> chutou){
	for (char letra : palavra_secreta){
		if(!chutou[letra]){
			return true;
		} // Fim da condição if
	} // Fim do laço for
	return false;
} // Fim da função nao_acertou