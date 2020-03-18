#include "Horista.h"
#include <iostream>

void Horista::setHorasTrabalhadas(double ht){
    horasTrabalhadas = ht;
};

void Horista::setSalarioPorHora(double x){
    if ( x > 0 ) {
        salarioPorHora = x; 
    }else{
        std::cout << "Valor invalido: " << x << std::endl;
    }
    
};

double Horista::calcularSalario(){
    double x, salario;
    if (horasTrabalhadas > 40.0){
        x = horasTrabalhadas - 40.0;
        salario = (x*(salarioPorHora * 1.5)) + (salarioPorHora*40);
    }else{
        salario = horasTrabalhadas*salarioPorHora;
    }
    return salario;
};

Horista::Horista(){
	nome = "NULL";
	matricula = 0;
	salarioPorHora = 0;
	horasTrabalhadas = 0;
}

Horista::Horista(double sph, double ht, Funcionario f){
	setFuncionario(f);
	setSalarioPorHora(sph);
	setHorasTrabalhadas(ht);
}

double Horista::getSalarioPorHora(){
	return salarioPorHora;
}

double Horista::getHorasTrabalhadas(){
	return horasTrabalhadas;
}

