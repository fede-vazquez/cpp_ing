#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    float response = 0;
    char operation;

    cout << "Ingresar n1: ";
    cin >> n1;
    cout << "Ingresar n2: ";
    cin >> n2;

    cout << "Elija la operacion: S = suma, R = resta, M = multiplicacion, D = division: ";
    cin >> operation;

    switch(operation){
        case 'S':
            response = n1+n2;
            break;
        case 'R':
            response = n1-n2;
            break;
        case 'M':
            response = n1*n2;
            break;
        case 'D':
            if(n2 == 0){
                cout << "La division no se puede hacer porque n2 es 0";
            } else {
                response = ((n1 * 1.0) / (n2 * 1.0)) ;
            }
            break;
        default:
            cout << "La operacion elegida no es valida";
    }

    cout << response;

    return 0;
}
