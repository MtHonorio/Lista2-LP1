#pragma once
#include <iostream>
#include <exception>

class ValorAbaixoException : public std::exception
{
    public: 
        ValorAbaixoException();
        std::string getErro();

    private:
        std::string erro = "\nValor abaixo do esperado\n";
};