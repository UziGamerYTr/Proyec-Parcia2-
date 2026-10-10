#include <iostream>
using namespace std;

int main() {
    float alumnos[10][3];

    for (int i = 0; i < 10; i++) {
        cout << "Alumno " << i + 1 << endl;

        cout << "Promedio grupo A: ";
        cin >> alumnos[i][0];

        cout << "Promedio grupo B: ";
        cin >> alumnos[i][1];

        if (alumnos[i][0] > alumnos[i][1]) {
            alumnos[i][2] = alumnos[i][0];
        }
        else {
            alumnos[i][2] = alumnos[i][1];
        }
    }

    cout << "\nAlumno\tA\tB\tMayor\n";

    for (int i = 0; i < 10; i++) {
        cout << i + 1 << "\t"
            << alumnos[i][0] << "\t"
            << alumnos[i][1] << "\t"
            << alumnos[i][2] << endl;
    }

    return 0;
}
