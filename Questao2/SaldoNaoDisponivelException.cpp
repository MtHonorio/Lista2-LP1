#include "SaldoNaoDisponivelException.h"
#include <exception>
#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>


std::string SaldoNaoDisponivelException::what(){
    return erro;
}