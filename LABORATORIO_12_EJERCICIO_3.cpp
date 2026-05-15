#include <iostream>
#include <string>

using namespace std;

// Prototipos de funciones
void mostrarMenu();
float obtenerPrecio(int plan);
float calcularSubtotal(float precio, int meses);
float calcularDescuento(float subtotal, int meses);
void mostrarResultado(string nombre, float subtotal, float descuento, float total);

int main()
{
    string nombre;
    int plan, meses;

    float precio;
    float subtotal;
    float descuento;
    float total;

    // Mostrar menú
    mostrarMenu();

    // Solicitar datos
    cout << "Ingrese el nombre del cliente: ";
    cin.ignore();
    getline(cin, nombre);

    cout << "Seleccione el tipo de plan (1-3): ";
    cin >> plan;

    cout << "Ingrese la cantidad de meses: ";
    cin >> meses;

    // Obtener precio del plan
    precio = obtenerPrecio(plan);

    // Calcular subtotal
    subtotal = calcularSubtotal(precio, meses);

    // Calcular descuento
    descuento = calcularDescuento(subtotal, meses);

    // Calcular total final
    total = subtotal - descuento;

    // Mostrar resultado
    mostrarResultado(nombre, subtotal, descuento, total);

    return 0;
}

// Función para mostrar el menú
void mostrarMenu()
{
    cout << "===== PLANES DEL GIMNASIO =====" << endl;
    cout << "1. Basico      - 100 Bs" << endl;
    cout << "2. Intermedio  - 180 Bs" << endl;
    cout << "3. Premium     - 250 Bs" << endl;
    cout << "================================" << endl;
}

// Función para obtener precio según plan
float obtenerPrecio(int plan)
{
    float precio;

    if(plan == 1)
    {
        precio = 100;
    }
    else if(plan == 2)
    {
        precio = 180;
    }
    else if(plan == 3)
    {
        precio = 250;
    }
    else
    {
        precio = 0;
        cout << "Plan invalido." << endl;
    }

    return precio;
}

// Función para calcular subtotal
float calcularSubtotal(float precio, int meses)
{
    return precio * meses;
}

// Función para calcular descuento
float calcularDescuento(float subtotal, int meses)
{
    float descuento = 0;

    if(meses > 3)
    {
        descuento = subtotal * 0.15;
    }

    return descuento;
}

// Función para mostrar resultados
void mostrarResultado(string nombre, float subtotal, float descuento, float total)
{
    cout << "\n===== FACTURA FINAL =====" << endl;
    cout << "Cliente: " << nombre << endl;
    cout << "Subtotal: " << subtotal << " Bs" << endl;
    cout << "Descuento: " << descuento << " Bs" << endl;
    cout << "Total Final: " << total << " Bs" << endl;
}
