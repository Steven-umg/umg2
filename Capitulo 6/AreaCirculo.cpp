#include <iostream>
using namespace std;

inline double areaCirculo(double radio) {
    const double PI = 3.14159;
    return PI * radio * radio;
}

int main() {
    double radio;
    cout << "Introduce el radio del circulo: ";
    cin >> radio;

    double area = areaCirculo(radio);

    cout << "El area del circulo es: " << area << endl;

    return 0;
}

