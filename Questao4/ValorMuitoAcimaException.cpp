#include <iostream>
#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException(){
    std::cout << "Valor muito acima do previsto. \n" << std::endl;
}

std::string ValorMuitoAcimaException::getErro(){
    return erroB;
}