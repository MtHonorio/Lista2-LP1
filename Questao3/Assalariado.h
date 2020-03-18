#pragma once
#include "Funcionario.h"
#include <iostream>

class Assalariado : public Funcionario
{
    protected:
        double salario;
    public:
        Assalariado();
		Assalariado(double s, Funcionario funcionario);
		
		double calcularSalario();
        void setSalario(double x);

        double getSalario();

        void print();


};