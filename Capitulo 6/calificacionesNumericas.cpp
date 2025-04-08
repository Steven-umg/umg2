#include <iostream>
using namespace std;

int puntoCalidad(float promedio) {
    if (promedio >= 90 && promedio <= 100) {
        return 4;
    } else if (promedio >= 80 && promedio < 90) {
        return 3;
    } else if (promedio >= 70 && promedio < 80) {
        return 2;
    } else if (promedio >= 60 && promedio < 70) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    float promedio;

    cout << "Introduce el promedio del estudiante: ";
    cin >> promedio;

    int calificacion = puntoCalidad(promedio);
    cout << "El punto de calidad es: " << calificacion << endl;

    return 0;
}
