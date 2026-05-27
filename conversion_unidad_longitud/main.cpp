#include <iostream>

using namespace std;

int main()
{
    float km, m, cm;
    string nombre;

    cout << "Ingresar nombre de recorrido: ";
    getline(cin, nombre);

    cout << "Ingresar distancia en km: ";
    cin >> km;

    m = km * 1000;
    cm = m * 100;

    printf("El recorrido %s, tiene un largo de %.1f km, %.0f m, %.0f cm,", nombre.c_str(), km, m, cm);
    return 0;
}
