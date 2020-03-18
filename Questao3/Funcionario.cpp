#include "Funcionario.h"
#include <iostream>

using namespace std;

Funcionario::Funcionario(){
	nome = "Sem nome";
	matricula = 0;
}

Funcionario::Funcionario(string n, int mc){
    setNome(n);
    setMatricula(mc);
}

//-----------get---------
string Funcionario::getNome(){
    return nome;
}

int Funcionario::getMatricula(){
    return matricula;
}

//-----------set----------

void Funcionario::setFuncionario(Funcionario funcionario){
    setNome(funcionario.nome);
    setMatricula(funcionario.matricula);
}

void Funcionario::setNome(string n){
    if(n == ""){
        nome = "Sem nome";
    }else{
        nome = n;
    }
}

void Funcionario::setMatricula(int x){
    matricula = x;
}

/*void Funcionario::print(){
	cout << "Nome: " << this->getNome() << endl
		 << "Matricula: " << this->getMatricula() << endl
		 << "Salario: " << this->calcularSalario() << endl;
}*/

double Funcionario::calcularSalario(){}

