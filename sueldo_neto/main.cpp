#include <iostream>

using namespace std;

int main()
{
    string nombre;
    float horas, valorHora, sueldoBruto, descuentoTotal, sueldoNeto;
    int porcentajeDescuento = 15;

    cout << "Nombre del trabajador: ";
    cin >> nombre;

    cout << "Ingresar horas trabajadas";
    cin >> horas;

    cout << "Ingresar valor por hora";
    cin >> valorHora;

    sueldoBruto = valorHoras*hora;
    descuentoTotal = sueldoBuro * (porcentajeDescuento/100);
    SueldoNeto = SueldoBruto - descuentoTotal;

    cout << "El trabajador " << nombre << " trabajo " << horas << " horas. " << " tiene un sueldo bruto de " << sueldoBruto <<;

    return 0;
}
