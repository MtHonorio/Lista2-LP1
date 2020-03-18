#include <iostream>
#include "Comissionado.h"

void Comissionado::setVendasSemanais(double vendas){
    if (vendas > 0){
    vendasSemanais = vendas;
    }else{
        std::cout << "Numero invalido de vendas" << std::endl;
    }
}

void Comissionado::setPercentualVendas(double pvendas){
    if (pvendas > 0){
    percentualComissao = pvendas;
    }else{
        std::cout << "Percentual invalido de vendas" << std::endl;
    }
}

void Comissionado::setSalarioBase(double s){
    if (s > 0){
        salarioBase = s;
    }else{
        std::cout << "Salario abaixo do comercio" << std::endl;
    }
}

Comissionado::Comissionado(){
	nome = "Nulo";
	matricula = 0;
	vendasSemanais = 0;
	percentualComissao = 0;
}

Comissionado::Comissionado(double x, double v, double s, Funcionario funcionario){
	setFuncionario(funcionario);
	setSalarioBase(x);
    setVendasSemanais(v);
	setPercentualVendas(s);
}

double Comissionado::getSalarioBase(){
	return salarioBase;
}
        
double Comissionado::getVendasSemanais(){
	return vendasSemanais;
}
	
double Comissionado::getPercentualVendas(){
	return percentualComissao;
}
