#include <iostream>

using namespace std;

/*
Mostrar el siguiente patrón:
1
2 3
4 5 6
7 8 9 10
...

Hasta N filas.
*/

int main()
{
    int numero;

    cout << "Ingresar numero: ";
    cin >> numero;

    int numeroPatron = 1;
    for (int i = 1; i <= numero; i++ ){
        for(int j = 1; j <= i; j++){
            cout << numeroPatron++ << " ";
        }
        cout << endl;
    }
    return 0;
}
