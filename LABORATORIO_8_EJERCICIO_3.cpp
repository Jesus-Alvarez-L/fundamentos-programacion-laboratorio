#include <iostream>
using namespace std;

int main() {
    int intentos = 0;
    const int MAX_INTENTOS = 3;
    bool accesoConcedido = false;

    while (intentos < MAX_INTENTOS && !accesoConcedido) {
        long long pin;
        cout << "Intento (" << intentos + 1 << "/" << MAX_INTENTOS << ") - Ingrese su PIN: ";
        cin >> pin;

        if (pin < 1000 || pin > 9999) {
            cout << "PIN invalido (Debe ser de exactamente 4 digitos)." << endl;
            intentos++;
            continue;
        }

        bool tieneRepetidos = false;
        long long temp = pin;
        int anterior = -1;

        while (temp > 0) {
            int digito = temp % 10;
            if (digito == anterior) {
                tieneRepetidos = true;
                break;
            }
            anterior = digito;
            temp /= 10;
        }

        if (tieneRepetidos) {
            cout << "PIN invalido (No se permiten digitos consecutivos iguales)." << endl;
            intentos++;
        } else {
            cout << "PIN valido. Acceso concedido." << endl;
            accesoConcedido = true;
        }
    }

    if (!accesoConcedido) {
        cout << "Cuenta bloqueada. Excedio el numero maximo de intentos." << endl;
    }

    return 0;
}
