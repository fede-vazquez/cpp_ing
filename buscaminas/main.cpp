#include <iostream>

using namespace std;

int main()
{

    int filas = 10;
    int columnas = 10;
    int nIntentos = 10;
    int cMinas = 5;

    char df = '*';
    char impacto = 'x';
    char fallo = '0';

    bool minas[filas][columnas];
    bool tirosUsuario[filas][columnas];

    for(int i = 0; i < filas; i++)
    {
        for(int j = 0; j < columnas; j++)
        {
            minas[i][j] = false;
            tirosUsuario[i][j] = false;
        }
    }

    // CAMBIAR POR DO WHILE
    for(int nMina = 1; nMina <= cMinas; nMina++)
    {
        int fila = 0, columna = 0;

        for(int i = -1; i < filas; i++)
        {
            for(int j = -1; j < columnas; j++)
            {
                if (i != -1 && j == -1)
                {
                    cout << i << " ";
                }
                else if (i == -1 && j != -1)
                {
                    cout << " ";
                    cout << j;
                }
                else if (i == -1 && j == -1)
                {
                    cout << ":)";
                }
                else
                {
                    cout << " ";
                    cout << minas[i][j];
                }
            }
            if(i == -1) cout << endl;

            cout << endl;
        }

        bool coordenadaCorrecta = false;

        do
        {
            cout << endl << "Seleccione la coordenada donde quiera cargar la mina: " << endl;
            cout << "fila: ";
            cin >> fila;
            cout << "columna: ";
            cin >> columna;

            if(
                (fila >= 0 && fila <= filas)
                &&
                (columna >= 0 && columna <= columnas)
                &&
                (!minas[fila][columna])
            )
            {
                coordenadaCorrecta = true;
                minas[fila][columna] = true;
            }
            else
            {
                cout << "Las coordenadas cargadas no son correctas, intente nuevamente." << endl;
            }
        }
        while(!coordenadaCorrecta);
    }

}
