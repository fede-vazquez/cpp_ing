#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Ingrese el numero 1: ";
    cin >> n1;

    cout << "Ingrese el numero 2 distinto a n1(" << n1 << "): ";
    cin >> n2;

    if(n1 > n2)
    {
        cout << "El n1 es mayor";
    }
    else
    {
        cout << "El n2 es mayor";
    }

    return 0;
}
