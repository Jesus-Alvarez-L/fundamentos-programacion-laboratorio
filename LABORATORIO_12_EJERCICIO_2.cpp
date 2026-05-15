#include <iostream>
using namespace std;

// Prototipos de funciones
float calcularSubtotal(int cantidad);
float aplicarDescuento(float subtotal);
void mostrarResultado(float total);

int main()
{
    float subtotal, total;
    int cantidad;

    cout << "Cantidad de productos: ";
    cin >> cantidad;

    // Calcular subtotal
    subtotal = calcularSubtotal(cantidad);

    // Aplicar descuento
    total = aplicarDescuento(subtotal);

    // Mostrar resultado
    mostrarResultado(total);

    return 0;
}

// Función para calcular subtotal
float calcularSubtotal(int cantidad)
{
    float subtotal;

    subtotal = cantidad * 25;

    return subtotal;
}

// Función para aplicar descuento
float aplicarDescuento(float subtotal)
{
    if(subtotal > 100)
    {
        subtotal = subtotal - (subtotal * 0.10);
    }

    return subtotal;
}

// Función para mostrar resultado
void mostrarResultado(float total)
{
    cout << "El total final es: " << total;
}
