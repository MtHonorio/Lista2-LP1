#include <iostream>
#include "Conta.h"
#include "IConta.h"
#include <string>

using namespace std;

class ContaEspecial : public Conta
{
    public:
        ContaEspecial();
        ContaEspecial(string nc, double sm, int numc, double s);
        void definirLimite();

};