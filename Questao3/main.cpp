#include <iostream>
#include "Funcionario.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "SistemaGerenciaFolha.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"


using namespace std;

int main()
{
    Funcionario f1("Antonio", 1);
    Funcionario f2("Dionisio", 2);
    Funcionario f3("Arthur", 3);
    Funcionario f4("Victor", 4);

    f1.print();

    Assalariado fA1(500, f2);
    fA1.print();

    Horista fH1(700, 55, f3);
    fH1.print();

    Comissionado fC1(600, 50, 0.5, f4);
    fC1.print();

    SistemaGerenciaFolha admin;
    admin.setFuncionario(fC1);
    admin.setFuncionario(fH1);
    admin.setFuncionario(fA1);

    double orcamento;
    cout<< "\n\nDigite o orcamento total da empresa: ";
    cin>>orcamento;
    admin.setOrcamento(orcamento);

    cout << "Salario Total: RS "<< admin.calculaValorTotalFolha()<< endl;
    cout << "Orcamento: RS "<< admin.getOrcamento()<< endl;

    try{
        admin.estourouOrcamento();
    }
    catch(OrcamentoEstouradoException estourou){
        cout<< estourou.getErro();
    }

while(1){
        cout << "\n\nDigite o nome do funcionario para buscar(0 pra sair): ";
        string entrada;
        cin >>entrada;
        cout << "\n";

        if(entrada == "0")
            return 0;

     try{
            admin.consultaSalarioFuncionario(entrada);
            cout<< "Salario de "<< entrada << " RS " << admin.consultaSalarioFuncionario(entrada);
        }
        // Pegar o throw caso a Exception seja requerida
        catch(FuncionarioNaoExisteException naoExiste){
            cout<< naoExiste.getErroF()<<endl;
        }
}
    return 0;
}