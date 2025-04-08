#include <iostream>
#include <iomanip> // Para poder formatear la salida

using namespace std;

int centigrados(int fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int fahrenheit(int centigrados) {
    return (centigrados * 9 / 5) + 32;
}

int main() {
    cout << "    Celsius -> Fahrenheit" << endl;
    for (int celsius = 0; celsius <= 100; celsius++) {
        cout << setw(6) << celsius << "  ->  " << setw(6) << fahrenheit(celsius) << endl;
    }
    cout << endl;

    cout << "   Fahrenheit -> celsius " << endl;
    for (int fahren = 32; fahren <= 212; fahren++) {
        cout << setw(6) << fahren << "  ->  " << setw(6) << centigrados(fahren) << endl;
    }

    return 0;
}
