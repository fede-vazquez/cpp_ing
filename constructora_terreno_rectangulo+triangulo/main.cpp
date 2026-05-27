#include <iostream>

using namespace std;

int main()
{
    float l_a, l_b, l_c, rec_bc, triangulo, area_total;

    cout << "ingresar largo de A: ";
    cin >> l_a;

    cout << "ingresar largo de B: ";
    cin >> l_b;

    cout << "ingresar largo de C: ";
    cin >> l_c;

    rec_bc = l_b*l_c;

    cout << "rectangulo: " << rec_bc << endl;
    triangulo = ((l_a-l_c)*l_b) / 2.0;

    cout << "triangulo: " << triangulo << endl;

    area_total = rec_bc + triangulo;

    //cout << "El area del terreno es de: " << area_total << endl;

    printf("El area total del terreno es de: %.2f", area_total);

    return 0;
}
