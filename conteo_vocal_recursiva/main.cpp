#include <iostream>
#include <string>

using namespace std;

int nApariciones(string texto, char letra){
    if(texto.length() == 0){
            return 0;
    };
    if(texto[texto.length() - 1] == letra){
        texto.pop_back();
        return 1 + nApariciones(texto, letra);
    }else{
        texto.pop_back();        return 0 + nApariciones(texto, letra);
    }
}

int main()
{
    int n = nApariciones("hola", 'a');
    cout << n;
    return 0;
}

/*
3. Búsqueda y Conteo Recursivo (Recursividad)La recursividad es clave para resolver problemas dividiéndolos en subproblemas más pequeños.Crea una función recursiva que reciba una cadena de texto (o un array de caracteres) y devuelva cuántas veces aparece una vocal específica (por ejemplo, la 'a'). No puedes usar ciclos (for o while) dentro de la función.Crea otra función recursiva que reciba un número entero positivo y devuelva la suma de todos sus dígitos (ejemplo: si ingresa 452, debe devolver $4 + 5 + 2 = 11$)
*/
