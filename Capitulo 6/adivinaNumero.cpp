#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int numeroAdivinar = rand() % 1000 + 1;

    int intento;
    cout << "Tengo un numero entre 1 y 1000." << endl;
    cout << "¿Puedes adivinar mi numero?" << endl;
    cout << "Escribe tu primera respuesta: ";

    do {
        cin >> intento;

        if (intento < numeroAdivinar) {
            cout << "Mi numero es mayor. Intenta de nuevo: ";
        } else if (intento > numeroAdivinar) {
            cout << "Mi numero es menor. Intenta de nuevo: ";
        } else {
            cout << "¡Felicidades! Has adivinado el numero." << endl;
        }
    } while (intento != numeroAdivinar);

    return 0;
}
