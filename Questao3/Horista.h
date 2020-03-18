#pragma once
#include "Funcionario.h"
#include <iostream>

class Horista : public Funcionario
{
    protected:
        double salarioPorHora, horasTrabalhadas;
    
    public:
        Horista();
		Horista(double sph, double ht, Funcionario funcionario);
		
		double calcularSalario();
        void setHorasTrabalhadas(double);
        void setSalarioPorHora(double);

        double getHorasTrabalhadas();
        double getSalarioPorHora();
        
};