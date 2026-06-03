#include <iostream>

using namespace std;

int main()
{
    float precio_kilo, cant_kilos;
    float total, total_producto;
    float descuento_aplicado;

    for(int i = 0; i < 3; i++)
    {
        cout << "Ingresar cantidad de kilos: ";
        cin >> cant_kilos;

        cout << "Ingresar precio por kilo: ";
        cin >> precio_kilo;

        total_producto = cant_kilos * precio_kilo;
        cout << "Precio total del producto: " << total_producto << endl;
        total += total_producto;
    }

    if(total >= 8100.0)
    {
        descuento_aplicado = total * 0.10;
        total = total - descuento_aplicado;

        cout << "Total a pagar de los 3 productos es $" << total << " incluye un descuento de $" << descuento_aplicado;
    }
    else
    {
        cout << "Total a pagar de los 3 productos es $" << total;
    }


    return 0;
}
