#include<iostream>
#include<string>

using namespace std;

extern string palavra_secreta;

bool letra_existe(char chute){
	
	for(char letra : palavra_secreta){
		
		if(chute == letra){
			return true;	
		} // Fim da condição if
		
	} // Fim do laço de repetição (padrão C++11) 

	return false;

} // Fim da função letra_existe