#include <iostream>
#include "FuncionarioNaoExisteException.h"

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){
	std::cout << "Funcionario nao existe" << std::endl;
}

std::string FuncionarioNaoExisteException::getErroF(){
	return erroFNEE;
}