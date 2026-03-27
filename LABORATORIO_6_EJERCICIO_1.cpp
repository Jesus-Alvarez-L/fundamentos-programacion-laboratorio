# include <iostream>

using namespace std;

int main () {
    int numero_1, numero_2, opcion, resultado;

    cout << "Ingrese el numero 1:\n";
    cin >> numero_1;

    cout << "Ingrese el numero 2:\n";
    cin >> numero_2;

    cout << "Seleccione una opcion:\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cin >> opcion;

    switch (opcion) {
    case 1:
        resultado = numero_1 + numero_2;
        cout << " El resultado de la suma es " << resultado;
        break;

    case 2:
        resultado = numero_1 - numero_2;
        cout << " El resultado de la resta es " << resultado;
        break;

    case 3:
        resultado = numero_1 * numero_2;
        cout << " El resultado de la multiplicacion es " << resultado;
        break;
    case 4:
        if(numero_2==0) {
            cout << "No se puede dividir entre 0";
        } else {
        resultado = numero_1 / numero_2;
        cout << " El resultado de la division es " << resultado;
        break;
        }
    }
return 0;

}
