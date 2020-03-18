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
	
        void setHorasTrabalhadas(double);
        void setSalarioPorHora(double);

        double getHorasTrabalhadas();
        double getSalarioPorHora();

        //Metodos Abstratos
        double calcularSalario(){
                double x, salario;
                if (horasTrabalhadas > 40.0){
                    x = horasTrabalhadas - 40.0;
                    salario = (x*(salarioPorHora * 1.5)) + (salarioPorHora*40);
                }else{
                    salario = horasTrabalhadas*salarioPorHora;
                }
                return salario;
        };
        
        void print(){
            std::cout << "Nome: " << this->getNome() << std::endl
                    << "Matricula: " << this->getMatricula() << std::endl
                    << "Salario: " << this->calcularSalario() << std::endl
                    << "Salario por Horas de Trabalho: " << this->getSalarioPorHora() << std::endl
                    << "Horas Trabalhadas: " << this->getHorasTrabalhadas() << "\n" << std::endl;
        };    
};