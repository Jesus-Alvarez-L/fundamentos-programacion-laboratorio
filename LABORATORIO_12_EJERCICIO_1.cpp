#include <iostream>

using namespace std;

// Prototipos de funciones
float calcularPromedio(float n1, float n2, float n3);
void mostrarResultado(float promedio);

int main() {
    float nota1, nota2, nota3;
    float promedio; // Corregido: tipo float para no perder decimales

    cout << "Ingrese nota 1: ";
    cin >> nota1;

    cout << "Ingrese nota 2: ";
    cin >> nota2;

    cout << "Ingrese nota 3: ";
    cin >> nota3;

    // Corregido: Asignar el valor de retorno a la variable local
    promedio = calcularPromedio(nota1, nota2, nota3);

    // Corregido: Se pasa el valor real obtenido
    mostrarResultado(promedio);

    return 0;
}

float calcularPromedio(float n1, float n2, float n3) {
    float prom;
    // Corregido: Uso de paréntesis para jerarquía de operaciones
    prom = (n1 + n2 + n3) / 3.0f;

    cout << "Promedio calculado: " << prom << endl;

    // Corregido: Se añade el retorno necesario
    return prom;
}

void mostrarResultado(float promedio) {
    // Corregido: Se eliminó el ';' que invalidaba el IF
    if (promedio >= 51) {
        cout << "ESTADO: APROBADO" << endl;
    } else {
        cout << "ESTADO: REPROBADO" << endl;
    }
}
