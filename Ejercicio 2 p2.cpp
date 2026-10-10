#include <iostream>
using namespace std;

int main() {
    float grupoA[5], grupoB[5], mayores[5];

    cout << "Promedios del grupo A:\n";
    for (int i = 0; i < 5; i++) {
        cin >> grupoA[i];
    }

    cout << "Promedios del grupo B:\n";
    for (int i = 0; i < 5; i++) {
        cin >> grupoB[i];
    }

    for (int i = 0; i < 5; i++) {
        if (grupoA[i] > grupoB[i]) {
            mayores[i] = grupoA[i];
        }
        else {
            mayores[i] = grupoB[i];
        }
    }

    cout << "Promedios mayores: ";
    for (int i = 0; i < 5; i++) {
        cout << mayores[i] << " ";
    }

    cout << endl;
    return 0;
}
