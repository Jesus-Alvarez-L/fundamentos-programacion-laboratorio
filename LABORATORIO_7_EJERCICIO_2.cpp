#include <iostream>
using namespace std;

int main() {
    double x;
    int n;

    cout << "Ingrese la distancia (x): ";
    cin >> x;
    cout << "Ingrese el numero de terminos (n): ";
    cin >> n;

    if (n <= 0) {
        cout << "El numero de terminos debe ser mayor a 0." << endl;
        return 0;
    }

    double aproximacion = 1.0;
    double numerador = 1.0;
    double denominador = 1.0;

    for (int i = 1; i <= n; i++) {
        numerador *= (x * x);

        denominador *= (2 * i) * (2 * i - 1);

        aproximacion += (numerador / denominador);
    }

    cout << "Valor aproximado de cosh(" << x << ") con " << n << " terminos: " << aproximacion << endl;

    return 0;
}
