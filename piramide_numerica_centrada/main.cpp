#include <iostream>

using namespace std;

/*
Mostrar una pirámide numérica centrada:
    1
   121
  12321
 1234321
123454321
*/

/*
  1
 121
12321
*/

int main()
{
    int numero;
    cout << "Ingresar numero: ";
    cin >> numero;

    int cantColumnas = numero + (numero-1);

    for(int i = 1; i <= numero; i++){

        for(int j = 1; j <= numero - i; j++){
            cout << " ";
        }

        for(int k = 1; k < i; k++){
            cout << k;
        }

        for(int l = i; l >= 1; l--){
            cout << l;
        }

        for(int s = 1; s <= numero - i; s++){
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
