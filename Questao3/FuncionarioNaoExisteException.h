#pragma once
#include <exception>
#include <iostream>

class FuncionarioNaoExisteException : public std::exception
{
    public:
        FuncionarioNaoExisteException();
        ~FuncionarioNaoExisteException();
		
		std::string getErroF();
		
	private:
		std::string erroFNEE = "Funcionario nao existe";


};