#include <iostream>
#include <iomanip>

using namespace std;

void leerDatos(double &R, int &n) {
    cout << "Ingrese el numero real: ";
    cin >> R;
    cout << "Cantidad de decimales: ";
    cin >> n;
}

double redondearManual(double R, int n) {
    double factor = 1.0;
    for (int i = 0; i < n; i++) {
        factor *= 10.0;
    }

    double temp = R * factor;

    if (temp >= 0) {
        temp = (long)(temp + 0.5);
    } else {
        temp = (long)(temp - 0.5);
    }

    return temp / factor;
}

void mostrar(double res, int n) {
    cout << "Resultado: " << fixed << setprecision(n) << res << endl;
}

int main() {
    double numero;
    int decimales;

    leerDatos(numero, decimales);
    double resultado = redondearManual(numero, decimales);
    mostrar(resultado, decimales);

    return 0;
}
