#include <iostream>
#include "IConta.h"
#include "Conta.h"
#include "ContaEspecial.h"
#include <string>
#include "SaldoNaoDisponivelException.h"

using namespace std;


Conta::Conta()
{
    setNome("nulo");
    setSalarioMensal(0.0);
    setNumeroConta(1);
    setSaldo(0);
}

Conta::Conta(string nc, double sm, int num, double s)
{
    setNome(nc);
    setSalarioMensal(sm);
    setNumeroConta(num);
    setSaldo(s);
}

void Conta::setNome(string name)
{
    nomeCliente = name;
}

void Conta::setSalarioMensal(double sm)
{
    if (sm > 0)
        salarioMensal = sm;
}

void Conta::setNumeroConta(int num)
{
    if (num > 0)
        numeroConta = num;
}

void Conta::setSaldo(double s)
{
    if (s >= 0)
        saldo = s;
}

void Conta::definirLimite()
{
    limite = salarioMensal*2;
}

void Conta::sacar (double valor)
{
    if (valor > saldo){
    SaldoNaoDisponivelException negativado;
    throw negativado;
    }else{
    saldo-=valor; 
    }
}

void Conta::depositar (double valor)
{
    if (valor > 0){
        saldo += valor;
    }else{
        cout << "valor invalido" << endl;
    }
}

double Conta::getSalarioMensal()
{
    return salarioMensal;
}

double Conta::getSaldo()
{
    return saldo;
}

int Conta::getNumeroConta()
{
    return numeroConta;
}

string Conta::getNomeCliente()
{
    return nomeCliente;
}

void Conta::print()
{
    cout<< "Informacoes da conta: \n" 
        << "Nome: " << nomeCliente << endl
        << "Salario Mensal: " << salarioMensal << endl
        << "Numero da conta: " << numeroConta << endl
        << "Saldo da conta: " << saldo << endl
        << "Limite: " << limite << endl;         
}

void Conta::setConta(Conta conta){
        this->setNome(conta.nomeCliente);
        this->setNumeroConta(conta.numeroConta);
        this->setSaldo(conta.saldo);
        this->setSalarioMensal(conta.salarioMensal);
        this->definirLimite();
}