#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    string response, n1s, n2s;

    cout << "Ingresar 2 numeros (distintos entre si) separados por un espacio: ";
    cin >> n1;
    cin >> n2;

    n1s = to_string(n1);
    n2s = to_string(n2);

    response = (n1 > n2) ? n2s + " " + n1s : n1s + " " + n2s ;

    cout << response;

    return 0;
}
