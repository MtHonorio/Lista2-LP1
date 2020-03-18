#pragma once
#include <iostream>
#include "IConta.h"

using namespace std;

class Conta : public IConta {
    public:    
        Conta();
        Conta(string nc, double sm, int num, double s);

        //-----------------get-----------------
        string getNomeCliente();
        double getSalarioMensal();
        int getNumeroConta();
        double getSaldo();
        double getLimite();



        //-----------------set-----------------
        void setNome(string nome);
        void setSalarioMensal(double salario);
        void setNumeroConta(int numero);
        void setSaldo(double saldo);
        
        
        virtual void definirLimite();

        void sacar(double valor);
        void depositar(double valor);

        void print();


    protected:
        string nomeCliente;
        double salarioMensal, saldo, limite;
        int numeroConta;


};