#pragma once
#include "Funcionario.h"
#include <iostream>

class Comissionado : public Funcionario
{
    protected:
        double salarioBase = 0, vendasSemanais, percentualComissao;
    
    public:
        Comissionado();
		Comissionado(double x, double vs, double pc, Funcionario funcionario);
		
		double calcularSalario();
        void setSalarioBase(double);
        void setVendasSemanais(double);
        void setPercentualVendas(double);

		double getSalarioBase();
        double getVendasSemanais();
        double getPercentualVendas();
		
		void print();
		
};