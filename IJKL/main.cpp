#include <iostream>

using namespace std;

int main()
{
    float i,j,k,l;

    cout << "Ingresar i:";
    cin >> i;
    cout << "Ingresar j:";
    cin >> j;
    cout << "Ingresar k:";
    cin >> k;
    cout << "Ingresar l:";
    cin >> l;

    if( j == 0 || k == 0)
    {

        if(i/j == k/l) cout << "Si son iguales";

    }
    else
    {

        cout << "Imposible dividir por cero."

    }

    return 0;
}
