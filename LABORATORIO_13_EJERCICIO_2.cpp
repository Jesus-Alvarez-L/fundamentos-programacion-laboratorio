#include <iostream>
#include <string>

using namespace std;

void leerVector(double ventas[], string dias[], int n);
void mostrarVector(double ventas[], string dias[], int n);
double calcularTotalVentas(double ventas[], int n);
double calcularPromedioVentas(double totalVentas, int n);
int buscarDiaMayorVenta(double ventas[], int n);

int buscarDiaMenorVenta(double ventas[], int n);

int contarDiasSuperioresPromedio(double ventas[], int n, double promedioVentas);

void mostrarResultados(double totalVentas,
                       double promedioVentas,
                       string diaMayor, double mayorVenta,
                       string diaMenor, double menorVenta,
                       int diasSuperiores);
int main() {
    int n = 7;
    string dias[7] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
    double ventas[n];

    double totalVentas;
    double promedioVentas;
    int indiceMayor;
    int indiceMenor;
    int diasSuperiores;

    leerVector(ventas, dias, n);
    mostrarVector(ventas, dias, n);
    totalVentas = calcularTotalVentas(ventas, n);
    promedioVentas = calcularPromedioVentas(totalVentas, n);
    indiceMayor = buscarDiaMayorVenta(ventas, n);
    indiceMenor = buscarDiaMenorVenta(ventas, n);
    diasSuperiores = contarDiasSuperioresPromedio(ventas, n, promedioVentas);
    mostrarResultados(totalVentas,
                      promedioVentas,
                      dias[indiceMayor], ventas[indiceMayor],
                      dias[indiceMenor], ventas[indiceMenor],
                      diasSuperiores);

    return 0;
}
void leerVector(double ventas[], string dias[], int n) {
    cout << "\n===== REGISTRO DE VENTAS SEMANALES =====" << endl;
    for(int i = 0; i < n; i++) {
        do {
            cout << "Ingrese la venta del dia " << dias[i] << ": ";
            cin >> ventas[i];
            if(ventas[i] < 0) {
                cout << "[Error] Las ventas no pueden ser negativas. Intente de nuevo." << endl;
            }

        } while(ventas[i] < 0);
    }
}
void mostrarVector(double ventas[], string dias[], int n) {
    cout << "\n===== VENTAS REGISTRADAS ====="
         << endl;
    for(int i = 0; i < n; i++) {
        cout << dias[i]
             << ": $"
             << ventas[i]
             << endl;
    }
}
double calcularTotalVentas(double ventas[], int n) {
    double suma = 0;
    for(int i = 0; i < n; i++) {
        suma = suma + ventas[i];
    }
    return suma;
}
double calcularPromedioVentas(double totalVentas, int n) {
    return totalVentas / n;
}
int buscarDiaMayorVenta(double ventas[], int n) {
    int posMayor = 0;
    for(int i = 1; i < n; i++) {
        if(ventas[i] > ventas[posMayor]) {
            posMayor = i;
        }
    }
    return posMayor;
}
int buscarDiaMenorVenta(double ventas[], int n) {
    int posMenor = 0;
    for(int i = 1; i < n; i++) {
        if(ventas[i] < ventas[posMenor]) {
            posMenor = i;
        }
    }
    return posMenor;
}
int contarDiasSuperioresPromedio(double ventas[], int n, double promedioVentas) {
    int contador = 0;
    for(int i = 0; i < n; i++) {
        if(ventas[i] > promedioVentas) {
            contador++;
        }
    }
    return contador;
}
void mostrarResultados(double totalVentas,
                       double promedioVentas,
                       string diaMayor, double mayorVenta,
                       string diaMenor, double menorVenta,
                       int diasSuperiores) {

    cout << "\n===== REPORTES Y RESULTADOS ====="
         << endl;
    cout << "Total vendido en la semana: $"
         << totalVentas
         << endl;
    cout << "Promedio de ventas diario: $"
         << promedioVentas
         << endl;
    cout << "Dia con mayor venta: "
         << diaMayor << " ($" << mayorVenta << ")"
         << endl;
    cout << "Dia con menor venta: "
         << diaMenor << " ($" << menorVenta << ")"
         << endl;
    cout << "Dias con ventas superiores al promedio: "
         << diasSuperiores
         << endl;
}
