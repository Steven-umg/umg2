#include <iostream>

using namespace std;

bool multiple(int a, int b) {
    return b % a == 0;
}

int main() {
    int a, b;

    cout << "Introduce pares de enteros (ingresa 0 0 para terminar):\n";

    while (true) {
        cout << "Introduce un par de enteros (a b): ";
        cin >> a >> b;

        if (a == 0 && b == 0) {
            break;
        }

        if (multiple(a, b)) {
            cout << b << " es multiplo de " << a << endl;
        } else {
            cout << b << " no es multiplo de " << a << endl;
        }
    }

    return 0;
}
