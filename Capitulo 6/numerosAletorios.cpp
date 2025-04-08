#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    // Inicializar la semilla del generador de números aleatorios con el tiempo actual
    srand(time(0));

    // a) 1 <= n <= 2
    int n1 = rand() % 2 + 1;
    cout << "Rango 1 <= n <= 2: " << n1 << endl;

    // b) 1 <= n <= 100
    int n2 = rand() % 100 + 1;
    cout << "Rango 1 <= n <= 100: " << n2 << endl;

    // c) 0 <= n <= 9
    int n3 = rand() % 10;
    cout << "Rango 0 <= n <= 9: " << n3 << endl;

    // d) 1000 <= n <= 1112
    int n4 = rand() % 113 + 1000;
    cout << "Rango 1000 <= n <= 1112: " << n4 << endl;

    // e) -1 <= n <= 1
    int n5 = rand() % 3 - 1;
    cout << "Rango -1 <= n <= 1: " << n5 << endl;

    // f) -3 <= n <= 11
    int n6 = rand() % 15 - 3;
    cout << "Rango -3 <= n <= 11: " << n6 << endl;

    return 0;
}
