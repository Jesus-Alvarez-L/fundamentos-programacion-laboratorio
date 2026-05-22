#include <iostream>

using namespace std;

void leerVector(double notas[], int n);
void mostrarVector(double notas[], int n);
double calcularPromedioNotas(double notas[], int n);
double buscarMayorNota(double notas[], int n);
double buscarMenorNota(double notas[], int n);
void mostrarResultados(double promedioNotas,
                       double mayorNota,
                       double menorNota);
int main() {
    int n;
    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> n;
    while (n <= 0) {
        cout << "Ingrese una cantidad mayor a 0: ";
        cin >> n;
    }
    double notas[n];

    double promedioNotas;
    double mayorNota;
    double menorNota;

    leerVector(notas, n);
    mostrarVector(notas, n);

    promedioNotas = calcularPromedioNotas(notas, n);
    mayorNota = buscarMayorNota(notas, n);
    menorNota = buscarMenorNota(notas, n);
    mostrarResultados(promedioNotas,
                      mayorNota,
                      menorNota);
    return 0;
}
void leerVector(double notas[], int n) {
    cout << "\n===== REGISTRO DE NOTAS =====" << endl;
    for(int i = 0; i < n; i++) {
        do {
            cout << "Ingrese nota del estudiante "
                 << i + 1 << " (0-100): ";
            cin >> notas[i];
            if(notas[i] < 0 || notas[i] > 100) {
                cout << "La nota debe estar entre 0 y 100. Ingrese de nuevo la nota." << endl;
            }
        } while(notas[i] < 0 || notas[i] > 100);
    }
}
void mostrarVector(double notas[], int n) {
    cout << "\n===== NOTAS REGISTRADAS ====="
         << endl;
    for(int i = 0; i < n; i++) {
        cout << "Estudiante "
             << i + 1
             << ": "
             << notas[i]
             << endl;
    }
}
double calcularPromedioNotas(double notas[], int n) {
    double suma = 0;
    for(int i = 0; i < n; i++) {
        suma = suma + notas[i];
    }
    return suma / n;
}
double buscarMayorNota(double notas[], int n) {
    double mayor = notas[0];
    for(int i = 1; i < n; i++) {
        if(notas[i] > mayor) {
            mayor = notas[i];
        }
    }
    return mayor;
}
double buscarMenorNota(double notas[], int n) {
    double menor = notas[0];
    for(int i = 1; i < n; i++) {
        if(notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}
void mostrarResultados(double promedioNotas,
                       double mayorNota,
                       double menorNota) {
    cout << "\n===== RESULTADOS ====="
         << endl;
    cout << "Promedio general: "
         << promedioNotas
         << endl;
    cout << "Nota mayor: "
         << mayorNota
         << endl;
    cout << "Nota menor: "
         << menorNota
         << endl;
}
