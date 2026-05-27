#include <iostream>

using namespace std;

int main()
{
    int cant_prod, iva = 21;
    float pre_por_prod, sub_total, total;
    string nombre;

    cout << "Ingresar nombre del producto: ";
    getline(cin, nombre);

    cout << "Ingresar cantidad de productos: ";
    cin >> cant_prod;

    cout << "Ingresar precio unitario del producto: ";
    cin >> pre_por_prod;


    sub_total = pre_por_prod * cant_prod;

    total = sub_total + (sub_total * ( iva / 100.0 ) );

    printf("Cantidad de %s es %i su precio unitario es %.2f, el subtotal sera de: $%.2f, con un iva del %d, el total a pagar sera de $%.2f", nombre.c_str(), cant_prod, pre_por_prod, sub_total, iva, total);
    return 0;
}
