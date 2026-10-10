
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool tieneNumero(string texto) {
    for (char c : texto) {
        if (isdigit(static_cast<unsigned char>(c))) {
            return true;
        }
    }
    return false;
}

int main() {
    string completo, nombre, apellido;

    cout << "Escribe nombre y apellido: ";
    getline(cin, completo);

    int espacio = completo.find(' ');

    if (espacio == -1) {
        cout << "Debes escribir nombre y apellido.\n";
        return 0;
    }

    nombre = completo.substr(0, espacio);

    int inicio = completo.find_first_not_of(' ', espacio);
    apellido = completo.substr(inicio);

    if (nombre.empty() || apellido.empty()) {
        cout << "Nombre o apellido vacio.\n";
    }
    else if (tieneNumero(nombre) || tieneNumero(apellido)) {
        cout << "Error: no se permiten numeros.\n";
    }
    else {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
    }

    return 0;
}
