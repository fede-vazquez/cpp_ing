#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Declaraciones de variables.
    int n1;
    int n2;

    // Iniciación de la variable.
    n1 = 0;
    n2 = 1;

    cout << "Ingrese numero 1: ";
    cin >> n1;

    cout << endl;

    cout << "Ingrese numero 2: ";
    cin >> n2;

    cout << "La suma es: " << n1 + n2 << endl;

    printf("ingrese nr1: ");
    scanf("%i", &n1);

    printf("ingrese nr2: ");
    scanf("%i", &n2);

    printf("La suma es: %i", n1+n2);

    return 0;
}
