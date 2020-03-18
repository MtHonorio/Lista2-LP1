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
		
        void setSalarioBase(double);
        void setVendasSemanais(double);
        void setPercentualVendas(double);

		double getSalarioBase();
        double getVendasSemanais();
        double getPercentualVendas();
		
        double calcularSalario(){
            return salarioBase + (vendasSemanais*percentualComissao);
        };
		
        void print(){    
            std::cout << "Nome: " << this->getNome() << std::endl
                    << "Matricula: " << this->getMatricula() << std::endl
                    << "Salario: " << this->calcularSalario() << std::endl
                    << "Vendas Semanais: " << this->getVendasSemanais() << std::endl
                    << "Percentual: " << this->getPercentualVendas() << "\n" << std::endl;
        }		
};