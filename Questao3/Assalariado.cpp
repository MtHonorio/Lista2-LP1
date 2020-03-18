#include "Assalariado.h"
#include <iostream>

void Assalariado::setSalario(double x){
    if ( x > 0){
        salario = x; 
    }else{
        std::cout << "Escolha um salario de acordo com o mercado." << std::endl;
    }
}

Assalariado::Assalariado(){
	nome = "Nulo";
	matricula = 0;
	salario = 0;
}

Assalariado::Assalariado(double s, Funcionario funcionario){
	setFuncionario(funcionario);
    setSalario(s);
}

double Assalariado::getSalario(){
	return salario;
}
