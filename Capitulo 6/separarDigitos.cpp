#include <iostream>

using namespace std;

int parteEntera(int a, int b) {
    return a / b;
}

int residuo(int a, int b) {
    return a % b;
}

void separarDigitos(int numero) {

    int divisor = 10000;
    bool primero = true;
    while (divisor > 0) {
        int digito = numero / divisor;
        if (digito > 0 || divisor == 1) {
            if (!primero) {
                cout << "  ";
            }
            cout << digito;
            primero = false;
        }
        numero = numero % divisor;
        divisor /= 10;
    }
    cout << endl;
}

int main() {
    int a, b;

    cout << "Introduce dos enteros a y b (para dividir a entre b): ";
    cin >> a >> b;

    cout << "Parte entera de " << a << " dividido entre " << b << " es: " << parteEntera(a, b) << endl;
    cout << "Residuo de " << a << " dividido entre " << b << " es: " << residuo(a, b) << endl;

    int numero;
    cout << "Introduce un numero entre 1 y 32767: ";
    cin >> numero;

    if (numero >= 1 && numero <= 32767) {
        cout << "El numero " << numero << " separado por digitos es: ";
        separarDigitos(numero);
    } else {
        cout << "El numero debe estar entre 1 y 32767." << endl;
    }

    return 0;
}
