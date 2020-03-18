#include <iostream>
#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException(){
	std::cout << "Nao disponivel limite, orcamento estourado." << std::endl;
}

std::string OrcamentoEstouradoException::getErro(){
   return erroOrcamento;
}
