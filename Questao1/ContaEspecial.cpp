#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;


ContaEspecial::ContaEspecial()
{
    setNome("null");
    setSalarioMensal(0);
    setNumeroConta(0);
    setSaldo(0);
}

ContaEspecial::ContaEspecial(string nc, double sm, int numc, double s)
{
    setNome(nc);
    setSalarioMensal(sm);
    setNumeroConta(numc);
    setSaldo(s);
} 

void ContaEspecial::definirLimite()
{
    limite = 3*salarioMensal;
}
