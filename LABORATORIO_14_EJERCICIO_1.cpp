#include <iostream>
#include <string>

using namespace std;

void leerDatos(string& subcadena, string& cadenaPrincipal);
int ProcesarDatos(const string& a, const string& b);
void MostrarDatos(int resultado);

int main() {
    string subcadena, cadenaPrincipal;

    leerDatos(subcadena, cadenaPrincipal);
    int resultado = ProcesarDatos(subcadena, cadenaPrincipal);
    MostrarDatos(resultado);

    return 0;
}

void leerDatos(string& subcadena, string& cadenaPrincipal) {
    cout << "Subcadena (a): "; cin >> subcadena;
    cout << "Cadena principal (b): "; cin >> cadenaPrincipal;
}

int ProcesarDatos(const string& a, const string& b) {
    size_t posicion = b.find(a);
    if (posicion != string::npos) {
        string temp = b.substr(posicion, a.length());
        return static_cast<int>(posicion);
    }
    return -1;
}

void MostrarDatos(int resultado) {
    cout << "Resultado: " << resultado << endl;
}
