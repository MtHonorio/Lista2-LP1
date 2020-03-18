#pragma once
#include <iostream>
#include "Funcionario.h"
#include <vector>
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"
#include "OrcamentoEstouradoException.h"
#include "FuncionarioNaoExisteException.h"


class SistemaGerenciaFolha : public Funcionario
{
    public:
        Funcionario *funcionario[4];
        
        SistemaGerenciaFolha();

        void setFuncionarios(Funcionario x);
        double calculaValorTotalFolha();
        double consultaSalarioFuncionario(std::string name);

        void setFuncionario(Assalariado funcionario);
        void setFuncionario(Horista vetor);
        void setFuncionario(Comissionado vetor);
        
        void setOrcamento(double o);
        double getOrcamento();
        void estourouOrcamento();

    protected:
        std::vector<Assalariado> assalariado;
        std::vector<Horista> horista;
        std::vector<Comissionado> comissionado;
        double orcamento;

};

//-g no final da chamada do compilador
//gdb (executavel)
//bt backtrack