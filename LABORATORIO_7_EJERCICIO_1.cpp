#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de terminos a generar: ";
    cin >> n;

    if (n <= 0) {
        cout << "Cantidad invalida." << endl;
        return 0;
    }

    long long a = 0, b = 1, temp;
    int denominador = 1;

    double suma_total = 0.0;

    cout << "S = ";
    for (int i = 0; i < n; i++) {
        cout << a << "/" << denominador;
        if (i < n - 1) cout << " + ";

        suma_total += (double)a / denominador;

        temp = a + b;
        a = b;
        b = temp;

        denominador += 2;
    }

    cout << "\nSuma total de la serie: " << suma_total << endl;

    return 0;
}
