#include <iostream>

using namespace std;

int main()
{
    float a1, a2, a3;

    cout << "Ingresar angulo 1: ";
    cin >> a1;
    cout << "Ingresar angulo 2: ";
    cin >> a2;
    cout << "Ingresar angulo 3: ";
    cin >> a3;

    if (a1+a2+a3 != 180)
    {
        cout << "Los angulos no pertenecen a un triangulo.";
    }
    else
    {
        if(a1 == 90 || a2 == 90 || a3 == 90)
        {
            cout << "El triangulo es un triangulo rectangulo.";
        }
        else
        {
            cout << "Los angulos son de un triangulo pero no de un triangulo rectangulo";
        }
    }

    return 0;
}
