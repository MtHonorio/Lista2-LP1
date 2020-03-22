#pragma once
#include <iostream>

class TestaValidaNumero
{
    public:
        TestaValidaNumero(int num);
        TestaValidaNumero(char num);

        void validaNumero();

        void setNumero(int num);
        int getNumero();

    private:
        int numero;
};