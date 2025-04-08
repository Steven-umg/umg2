#include <iostream>
using namespace std;

int invertirDigitos(int numero) {
    int numeroInvertido = 0;

    while (numero != 0) {
        int digito = numero % 10;

        numeroInvertido = numeroInvertido * 10 + digito;

        numero /= 10;
    }

    return numeroInvertido;
}

int main() {
    int numero;
    cout << "Introduce un numero entero: ";
    cin >> numero;

    int numeroInvertido = invertirDigitos(numero);
    cout << "Número con dígitos invertidos: " << numeroInvertido << endl;

    return 0;
}

