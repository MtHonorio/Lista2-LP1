#pragma once
#include <exception>
#include <iostream>

class OrcamentoEstouradoException : public std::exception
{
    public:
        OrcamentoEstouradoException();
		
		std::string getErro();
        
	private:
		std::string erroOrcamento = "\nOrcamento Estourado!\n";

};