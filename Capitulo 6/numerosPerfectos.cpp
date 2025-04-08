#include <iostream>
#include <vector>
using namespace std;

vector<int> divisores(int numero) {
    vector<int> divs;
    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            divs.push_back(i);
        }
    }
    return divs;
}

bool esPerfecto(int numero) {
    vector<int> divs = divisores(numero);
    int sumaDivisores = 0;

    for (int i = 0; i < divs.size(); i++) {
        sumaDivisores += divs[i];
    }
    return sumaDivisores == numero;
}

int main() {
    cout << "Numeros perfectos entre 1 y 1000:" << endl;

    for (int i = 1; i <= 1000; i++) {
        if (esPerfecto(i)) {
            cout << "Numero perfecto: " << i << endl;
            vector<int> divs = divisores(i);

            cout << "Divisores: ";
            for (int i = 0; i < divs.size(); i++) {
                cout << divs[i] << " ";
            }
            cout << endl << endl;
        }
    }

    return 0;
}
