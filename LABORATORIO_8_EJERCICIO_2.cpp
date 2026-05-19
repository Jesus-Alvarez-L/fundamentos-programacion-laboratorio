#include <iostream>
using namespace std;

int main() {
    long long numero;
    cout << "Ingrese el numero de consumo (GB): ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 0;
    }

    int maxConsumo = -1;
    int minConsumo = 10;
    int repeticionesMax = 0;

    while (numero > 0) {
        int digito = numero % 10;

        if (digito < minConsumo) {
            minConsumo = digito;
        }

        if (digito > maxConsumo) {
            maxConsumo = digito;
            repeticionesMax = 1;
        } else if (digito == maxConsumo) {
            repeticionesMax++;
        }

        numero /= 10;
    }

    cout << "\n--- ANALISIS DE CONSUMO ---" << endl;
    cout << "Mayor consumo registrado: " << maxConsumo << " GB" << endl;
    cout << "Menor consumo registrado: " << minConsumo << " GB" << endl;
    cout << "Cantidad de veces que se repite el consumo maximo: " << repeticionesMax << endl;

    return 0;
}
