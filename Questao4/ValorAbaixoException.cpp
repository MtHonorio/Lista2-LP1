#include <iostream>
#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException(){
    std::cout << "Valor abaixo do previsto. \n" << std::endl;
}

std::string ValorAbaixoException::getErro(){
    return erro;
}