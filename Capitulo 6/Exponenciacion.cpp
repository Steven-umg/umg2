#include <iostream>

using namespace std;

int enteroPotencial(int base, int exponente) {
    int resultado = 1;

    for (int i = 1; i <= exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;


    cout << "Introduce la base: ";
    cin >> base;

    cout << "Introduce el exponente: ";
    cin >> exponente;

    int resultado = enteroPotencial(base, exponente);
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;

    return 0;
}
