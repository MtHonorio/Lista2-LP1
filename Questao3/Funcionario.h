#pragma once
#include <iostream>

class Funcionario
{
    protected:
        std::string nome;
        int matricula;

    public:
        Funcionario();
        Funcionario(std::string n, int mc);
                
        //--------get-------//
        std::string getNome();
        int getMatricula();

        //--------set-------//
        virtual void setNome(std::string n);
        virtual void setMatricula(int x);
        void setFuncionario(Funcionario funcionario);

        virtual double calcularSalario();
        virtual void print(){
			std::cout << "Nome: " << this->getNome() << "\n"
		 << "Matricula: " << this->getMatricula() << "\n"
		 << "Salario: " << this->calcularSalario() << std::endl;
		 };
};