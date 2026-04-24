#include <iostream>
using namespace std;

int calcularSuma(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un número entero positivo N: ";
    cin >> n;

    if (n > 0) {
        int resultado = calcularSuma(n);
        cout << "La suma de los números desde 1 hasta " << n << " es: " << resultado << endl;
    } else {
        cout << "Por favor, ingrese un número mayor a cero." << endl;
    }

    return 0;
}
