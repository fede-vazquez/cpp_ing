#include <iostream>

using namespace std;

int main()
{
    double n1, n2, n3, prom;
    string nombreAlumno;

    cout << "Ingresar nombre alumno: ";
    cin >> nombreAlumno;
    cout << endl;

    cout << "Ingresar nota de matemática: ";
    cin >> n1;
    cout << endl;
    cout << "Ingresar nota de algebra: ";
    cin >> n2;
    cout << endl;
    cout << "Ingresar nota de fisica: ";
    cin >> n3;
    cout << endl;

    // En caso de que n1, n2, n3 fueran números enteros
    // este código me daría un número entero aunque prom fuera float.
    // Ya que C++ Lo entiende como un entero.
    // Soluciones: n1, n2, n3 en float, o bien / 3.0

    prom = (n1+n2+n3)/3;

    cout << "El promedio de " << nombreAlumno << " es: " << prom;

    return 0;
}
