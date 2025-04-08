#include <iostream>
#include <cmath>
using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    cout << "Introduce las coordenadas del primer punto (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Introduce las coordenadas del segundo punto (x2, y2): ";
    cin >> x2 >> y2;

    double dist = distancia(x1, y1, x2, y2);

    cout << "La distancia entre los dos puntos es: " << dist << endl;

    return 0;
}
