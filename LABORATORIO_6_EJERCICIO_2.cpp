# include <iostream>

using namespace std;

int main () {
    int opcion;

    cout << "Seleccione una opcion:\n";
    cout << "1. Lunes\n";
    cout << "2. Martes\n";
    cout << "3. Miercoles\n";
    cout << "4. Jueves\n";
    cout << "5. Viernes\n";
    cout << "6. Sabado\n";
    cout << "7. Domingo\n";
    cin >> opcion;

    switch (opcion) {
    case 1:
        cout << " Es el dia lunes";
        break;

    case 2:
        cout << " Es el dia martes";
        break;

    case 3:
        cout << " Es el dia miercoles";
        break;
    case 4:
        cout << " Es el dia jueves";
        break;
    case 5:
        cout << " Es el dia viernes";
        break;
    case 6:
        cout << " Es el dia sabado";
        break;
    case 7:
        cout << " Es el dia domingo";
        break;
    default:
        cout << "Opcion invalida";
    }
return 0;

}
