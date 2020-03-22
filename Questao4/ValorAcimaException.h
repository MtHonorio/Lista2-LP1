#pragma once
#include <iostream>
#include <exception>

class ValorAcimaException : public std::exception
{
    public: 
        ValorAcimaException();
        std::string getErro();

    private:
        std::string erroA = "\nValor acima do esperado\n";
};