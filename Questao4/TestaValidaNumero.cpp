#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"


TestaValidaNumero::TestaValidaNumero(int num){
    numero = num;
}

TestaValidaNumero::TestaValidaNumero(char num){
    numero = (int)num;
}


void TestaValidaNumero::validaNumero()
{
    if (this->numero <= 0){
        ValorAbaixoException e;
        throw e;
    }else if (this->numero > 100 && this->numero < 1000){
        ValorAcimaException f;
        throw f;
    }else if (this->numero >= 1000){
        ValorMuitoAcimaException g;
        throw g;
    }else{
        std::cout << "Voce acertou o intervalo do valor esperado. \n" << std::endl;
    }
}

int TestaValidaNumero::getNumero(){
    return numero;
}