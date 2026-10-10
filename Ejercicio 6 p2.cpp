#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Alumno {
    string nombre;
    string matricula;
    float calif[3];
};

int main() {
    Alumno alumnos[5];

    for (int i = 0; i < 5; i++) {
        cout << "\nAlumno " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin >> ws, alumnos[i].nombre);

        cout << "Matricula: ";
        getline(cin, alumnos[i].matricula);

        for (int j = 0; j < 3; j++) {
            cout << "Calificacion " << j + 1 << ": ";
            cin >> alumnos[i].calif[j];
        }
    }

    cout << fixed << setprecision(2);
    cout << "\nPromedios de alumnos:\n";

    for (int i = 0; i < 5; i++) {
        float suma = 0;

        for (int j = 0; j < 3; j++) {
            suma += alumnos[i].calif[j];
        }

        cout << alumnos[i].nombre << " - "
            << suma / 3 << endl;
    }

    return 0;
}