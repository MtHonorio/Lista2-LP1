#include "Conta.h"
#include <iostream>
#include "IConta.h"
#include "ContaEspecial.h"
#include <string>

using namespace std;

int main()
{
    Conta* c1 = new Conta("Ben Affleck", 25, 159, 2500);
    ContaEspecial* c2 = new ContaEspecial("Rock", 50, 160, 900);
    
    c1->definirLimite();
    c1->print();

    cout << "\nDepositado\n\n";

    c1->depositar(10);
    c1->print();

    cout << "\nSacado\n\n";

    c1->sacar(10);
    c1->print();

    cout << endl << endl;
///Conta Especial

    c2->definirLimite();
    c2->print();

    cout << "\nDepositado\n\n";

    c2->depositar(10);
    c2->print();

    cout << "\nSacado\n\n";

    c2->sacar(10);
    c2->print();

    return 0;
}