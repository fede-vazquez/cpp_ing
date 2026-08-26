#include <iostream>

using namespace std;

int main()
{
    int filas = 10;
    int columnas = 8;
    int suma = 0;

    int m[filas][columnas];

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            m[i][j] = 1;
        }
    }

    for(int i = 0; i < filas; i++){
        suma += m[i][0] + m[i][columnas-1];
    }
    for (int i = 1; i < columnas-1; i++){
        suma += m[0][i] + m[filas-1][i];
    }

    cout << suma;

    return 0;
}
