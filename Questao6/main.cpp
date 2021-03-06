#include <iostream>
#include "Pedido.h"
#include "MesaDeRestaurante.h"
#include "RestauranteCaseiro.h"

using namespace std;

int main()
{
    Pedido p1 = Pedido("Buchada", 1, 4);
    Pedido p2 = Pedido("Guarana 600ml", 1, 6);
    Pedido p3 = Pedido("Coca-Cola 600ml", 3, 6);
    Pedido p4 = Pedido("Churrasco", 1, 6);

    RestauranteCaseiro rest;
    rest.adicionaAoPedido(p1, 1);
    rest.adicionaAoPedido(p2, 1);
    rest.adicionaAoPedido(p3, 1);
    rest.adicionaAoPedido(p4, 1);

    rest.adicionaAoPedido(p1, 2);
    rest.adicionaAoPedido(p2, 2);
    cout << rest.toString() << endl;
}
