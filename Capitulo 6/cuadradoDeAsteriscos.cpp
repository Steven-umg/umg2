#include <iostream>

using namespace std;

void imprimirCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int lado;

    cout << "Introduce el tamaño del lado del cuadrado: ";
    cin >> lado;

    imprimirCuadrado(lado);

    return 0;
}
