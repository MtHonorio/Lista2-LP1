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
		
		
        void setSalario(double x);

        double getSalario();

        //Metodos Abstratos
        double calcularSalario(){
            return salario; 
};
        
        void print(){
            	std::cout << "Nome: " << this->getNome() << std::endl
                          << "Matricula: " << this->getMatricula() << std::endl
                          << "Salario: " << this->calcularSalario() << "\n" << std::endl;
        };


};