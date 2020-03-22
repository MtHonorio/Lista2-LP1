#include <iostream>
#include "TestaValidaNumero.h"
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

int main()
{
//    TestaValidaNumero f1(-100);
//    TestaValidaNumero f2(500);
//    TestaValidaNumero f3(1000);
    int num;

/*    try{                                                              O
        f1.validaNumero();                                              P 
    }                                                                   C
    catch(ValorAbaixoException valorAbaixo){                            I
        std::cout << valorAbaixo.getErro();                             O
    }                                                                   N
*///                                                                    A
//                                                                      L
//    f1.validaNumero();
//    f2.validaNumero();

    while(1){
        std::cout << "Digite um valor para ser testado: (Qualquer erro fara o programa parar)" << std::endl;
        std::cin >> num;

        TestaValidaNumero f(num);

        f.validaNumero();

    }

    return 0;
}