#include <iostream>

using namespace std;

int main()
{
    int cant_lapices;
    float precio_unitario, total;

    cout << "Ingresar cantidad de lapices: ";
    cin >> cant_lapices;

    precio_unitario = (cant_lapices >= 1000) ? 0.85 : 0.90;

    total = cant_lapices * precio_unitario;

    cout << "Total a pagar $" << total;

    return 0;
}
