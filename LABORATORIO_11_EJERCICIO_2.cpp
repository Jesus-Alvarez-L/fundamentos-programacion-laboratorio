#include <iostream>

using namespace std;

void leerDatos(int &d, int &m, int &a) {
    cout << "Dia: "; cin >> d;
    cout << "Mes (1-12): "; cin >> m;
    cout << "Anio: "; cin >> a;
}

void LITERAL(int m, int a, const char* &mesNombre, int &anioCompleto) {
    const char* meses[] = {
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    if (m >= 1 && m <= 12) {
        mesNombre = meses[m - 1];
    } else {
        mesNombre = "Mes Invalido";
    }

    if (a < 100) anioCompleto = 1900 + a;
    else anioCompleto = a;
}

void mostrarResultado(int d, const char* m, int a) {
    cout << "\nFecha literal: " << d << " de " << m << " de " << a << endl;
}

int main() {
    int dia, mes, anio, anioFinal;
    const char* mesFinal;

    leerDatos(dia, mes, anio);
    LITERAL(mes, anio, mesFinal, anioFinal);
    mostrarResultado(dia, mesFinal, anioFinal);

    return 0;
}
