#include<iostream>
#include<string>
#include "letra_existe.hpp"

using namespace std;



bool letra_existe(char chute, string& palavra_secreta){
	
	for(char letra : palavra_secreta){
		
		if(chute == letra){
			return true;	
		} // Fim da condição if
		
	} // Fim do laço de repetição (padrão C++11) 

	return false;

} // Fim da função letra_existe