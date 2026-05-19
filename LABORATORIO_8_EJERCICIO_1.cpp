#include <iostream>
using namespace std;

int main() {
    long long numero;
    cout << "Ingrese el numero entero positivo de uso: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingrese un numero entero positivo." << endl;
        return 0;
    }

    int sumaHoras = 0;
    int appsSuperan5 = 0;
    int totalApps = 0;

    while (numero > 0) {
        int digito = numero % 10;
        sumaHoras += digito;
        totalApps++;

        if (digito > 5) {
            appsSuperan5++;
        }
        numero /= 10;
    }

    double promedio = (double)sumaHoras / totalApps;

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Total de horas utilizadas: " << sumaHoras << " horas" << endl;
    cout << "Aplicaciones que superan las 5 horas: " << appsSuperan5 << endl;
    cout << "Promedio de horas por aplicacion: " << promedio << " horas" << endl;

    return 0;
}
