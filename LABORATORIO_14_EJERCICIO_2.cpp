#include <iostream>
#include <string>

using namespace std;

void pedirCantidadPreguntas(int &cantidad);
bool validarPregunta(const string &pregunta);
void registrarPreguntas(string preguntas[], int n);
void mostrarPreguntas(const string preguntas[], int n);

int main() {
    int cantidadPreguntas = 0;
    pedirCantidadPreguntas(cantidadPreguntas);

    string encuestas[cantidadPreguntas];

    registrarPreguntas(encuestas, cantidadPreguntas);
    mostrarPreguntas(encuestas, cantidadPreguntas);

    return 0;
}

void pedirCantidadPreguntas(int &cantidad) {
    do {
        cout << "Ingrese la cantidad de preguntas: ";
        cin >> cantidad;
    } while (cantidad <= 0);
    cin.ignore();
    cout << endl;
}

bool validarPregunta(const string &pregunta) {
    if (pregunta.length() == 0) {
        cout << "Error: La pregunta no puede estar vacia.\n";
        return false;
    }
    if (pregunta.at(0) == ' ' || pregunta.at(pregunta.length() - 1) == ' ') {
        cout << "Error: La pregunta no puede iniciar ni terminar con espacios.\n";
        return false;
    }
    return true;
}

void registrarPreguntas(string preguntas[], int n) {
    string preguntaAux;
    for (int i = 0; i < n; i++) {
        bool esValida = false;
        while (!esValida) {
            cout << "Pregunta " << (i + 1) << ": ";
            getline(cin, preguntaAux);
            esValida = validarPregunta(preguntaAux);
        }
        preguntas[i] = preguntaAux;
        cout << endl;
    }
}

void mostrarPreguntas(const string preguntas[], int n) {
    cout << "===== PREGUNTAS REGISTRADAS =====" << endl << endl;
    for (int i = 0; i < n; i++) {
        cout << (i + 1) << ". " << preguntas[i] << endl << endl;
    }
}
