#pragma once
#include <exception>
#include <iostream>
#include <string>

class SaldoNaoDisponivelException : public std::exception
{
    private:
        std::string erro = "Saldo nao disponivel\n";
    
    public:
        std::string what();
};