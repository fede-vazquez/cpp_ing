#include <iostream>

using namespace std;

int main()
{
    int alumnos, bancos;
    string response;

    cout << "ingresar cantidad de alumnos: ";
    cin >> alumnos;
    cout << "ingresar cantidad de bancos: ";
    cin >> bancos;

    response = (alumnos <= bancos) ? "Todo nice" : "Faltan " + to_string(alumnos - bancos) + " bancos";

    cout << response;

    return 0;
}
