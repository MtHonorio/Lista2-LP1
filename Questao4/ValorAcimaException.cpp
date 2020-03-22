#include <iostream>
#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException(){
    std::cout << "Valor acima do previsto. \n" << std::endl;
}

std::string ValorAcimaException::getErro(){
    return erroA;
}