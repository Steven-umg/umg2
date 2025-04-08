#include <iostream>
#include <cmath>

using namespace std;

int redondearAEntero(double numero) {
    return static_cast<int>(floor(numero + 0.5));
}


double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}


double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;


    cout << "Introduce un numero con decimales: ";
    cin >> numero;

    cout << "Valor original: " << numero << endl;
    cout << "Redondeado al entero mas cercano: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a la decima mas cercana: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a la centesima mas cercana: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a la milesima mas cercana: " << redondearAMilesimas(numero) << endl;

    return 0;
}
