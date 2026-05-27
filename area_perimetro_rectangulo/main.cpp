#include <iostream>

using namespace std;

int main()
{
    float bas, alt, per, area;

    cout << "ingresar base: ";
    cin >> bas;

    cout << "ingresar altura: ";
    cin >> alt;

    per = (bas*2) + (alt*2);

    area = bas*alt;

    cout << "El area del rectangulo que tiene altura " << alt << " y base " << bas << " Tiene un area de: " << area << " y un perimetro de " << per;
    return 0;
}
