#include <iostream>
using namespace std;

double calcularPromedio(int n) {
    double suma = 0, valor;
    for (int i = 1; i <= n; i++) {
        cout << "Ingrese el valor " << i << ": ";
        cin >> valor;
        suma += valor;
    }
    return (n > 0) ? (suma / n) : 0;
}

int main() {
    int cantidad;
    cout << "¿Cuántos valores desea promediar?: ";
    cin >> cantidad;

    if (cantidad > 0) {
        double promedio = calcularPromedio(cantidad);
        cout << "El promedio final es: " << promedio << endl;
    } else {
        cout << "Cantidad no válida." << endl;
    }

    return 0;
}
