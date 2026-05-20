#include <iostream>

using namespace std;

int main()
{
    float gC, gF;
    string ciudad;

    cout << "Ingresar ciudad: ";
    // cin >> ciudad; // No me permite poner espacios, toma la siguiente palabra como el otro cin.
    getline(cin, ciudad);

    cout << "Ingresar temperatura en Celsius: ";
    cin >> gC;

    gF = (gC * (9/5)) + 32;

    cout << "El clima en la ciudad " << ciudad << " es " << gF;

    return 0;
}
