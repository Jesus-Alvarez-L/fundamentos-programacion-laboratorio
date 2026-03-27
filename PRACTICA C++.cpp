# include <iostream>

using namespace std;

int main() {
    int opcion;

    cout << "Seleccione tipo de usuario:\n";
    cout << "1. Administrador\n";
    cout << "2. Cliente\n";
    cout << "3. Invitado\n";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << "Acceso total al sistema";
        break;

    case 2:
        cout << "Acceso limitado a compras";
        break;

    case 3:
        cout << "Acceso solo a visualizacion";
        break;

    default:
        cout << "Opcion invalida";
    }

    return 0;
}
