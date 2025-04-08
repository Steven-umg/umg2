#include <iostream>
#include <iomanip>

using namespace std;


double calcularCargos(double horas) {
    double cargo;

    if (horas <= 3) {
        cargo = 2;
    }
    else {
        cargo = 2 + (horas - 3) * 0.50;


        if (cargo > 10) {
            cargo = 10;
        }
    }

    return cargo;
}

int main() {
    double horas1, horas2, horas3;
    double cargo1, cargo2, cargo3;
    double total = 0;

    cout << "Introduce las horas de estacionamiento del primer cliente: ";
    cin >> horas1;
    cout << "Introduce las horas de estacionamiento del segundo cliente: ";
    cin >> horas2;
    cout << "Introduce las horas de estacionamiento del tercer cliente: ";
    cin >> horas3;

    cargo1 = calcularCargos(horas1);
    cargo2 = calcularCargos(horas2);
    cargo3 = calcularCargos(horas3);

    total = cargo1 + cargo2 + cargo3;


    cout << fixed << setprecision(2);
    cout << "\nAutomovil --- Horas --- Cargo\n";
    cout << "Cliente 1   --- " << horas1 << " --- $" << cargo1 << endl;
    cout << "Cliente 2   --- " << horas2 << " --- $" << cargo2 << endl;
    cout << "Cliente 3   --- " << horas3 << " --- $" << cargo3 << endl;


    return 0;
}
