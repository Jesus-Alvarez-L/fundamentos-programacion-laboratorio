#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void leerDatos(float &base, float &exponente);
float POTEN(float x, int y);
void mostrarResultado(float base, float exponente, float resultado);

int main() {
    float base, exponente, resultado;

    leerDatos(base, exponente);

    resultado = POTEN(base, exponente);

    mostrarResultado(base, exponente, resultado);

    return 0;
}

void leerDatos(float &base, float &exponente) {
    cout << "--- Calculadora de Potencias ---" << endl;
    cout << "Ingrese la base (numero real): ";
    cin >> base;
    cout << "Ingrese el exponente (numero entero): ";
    cin >> exponente;
}

float POTEN(float x, int y) {
    return pow(x, y);
}

void mostrarResultado(float base, float exponente, float resultado) {
    cout << fixed << setprecision(2);
    cout << "---------------------------------" << endl;
    cout << "El resultado de " << base << " elevado a " << exponente << " es: " << resultado << endl;
    cout << "---------------------------------" << endl;
}
