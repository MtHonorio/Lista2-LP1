#pragma once
#include <iostream>
#include <exception>

class ValorMuitoAcimaException : public std::exception
{
    public: 
        ValorMuitoAcimaException();
        std::string getErro();

    private:
        std::string erroB = "\nValor muito acima do esperado.\n";
};