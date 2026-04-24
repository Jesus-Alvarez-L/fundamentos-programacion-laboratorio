#include <iostream>
using namespace std;

int contarDigitosPares(int num) {
    int contador = 0;
    if (num == 0) return 1;

    while (num > 0) {
        int digito = num % 10;
        if (digito % 2 == 0) {
            contador++;
        }
        num /= 10;
    }
    return contador;
}

int main() {
    int numero;
    cout << "Ingrese un número entero positivo: ";
    cin >> numero;

    if (numero >= 0) {
        int pares = contarDigitosPares(numero);
        cout << "El total de dígitos pares encontrados es: " << pares << endl;
    } else {
        cout << "Error: El número debe ser positivo." << endl;
    }

    return 0;
}
