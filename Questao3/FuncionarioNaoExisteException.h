#pragma once
#include <exception>
#include <iostream>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
		
		std::string getErroF();
		
	private:
		std::string erroFNEE = "\nFuncionario nao existe\n";


};