#include <iostream>

using namespace std;

// Mostrar todos los números primos entre 1 y N.

int main()
{
    float numero;
    int primosTotales = 0;

    cout << "Ingresar numero: ";
    cin >> numero;

    for(int i = 2; i <= numero; i++)
    {
        bool esPrimo = true;
        int nActual = 2;

        while(nActual*nActual <= i && esPrimo)
        {
            if(i % nActual == 0)
            {
                esPrimo = false;
            }
            nActual++;
        }
        if(esPrimo)
        {
            cout << "El numero " << i << " es primo" << endl;
            primosTotales++;
        }
    }

    if(primosTotales == 0)
    {
        cout << "El numero: " << numero << " no tiene primos.";
    }
    else
    {
        cout << "El numero: " << numero << " tiene " << primosTotales << " primos entre el rango 1 y " << numero << endl;
    }

    return 0;
}
