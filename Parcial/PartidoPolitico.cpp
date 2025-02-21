#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void ejecutarVotaciones() {

    string Partido[5];  // Almacenamos los nombres de los partidos
    int PrimeraRonda[5] = {0};
    int segundaRonda[5] = {0};
    int terceraRonda[5] = {0};
    int cuartaRonda[5] = {0};
    int VotosTotales[5] = {0};
    int porcentaje[5] = {0};
    int totalVotos = 0;  // Variable para el total de votos

    // Inicializamos las estadisticas para cada partido
    for (int i = 0; i < 5; ++i) {
        PrimeraRonda[i] = 0;
        segundaRonda[i] = 0;
        terceraRonda[i] = 0;
        cuartaRonda[i] = 0;
        VotosTotales[i] = 0;
        porcentaje[i] = 0;
    }

    cout << "Calculo de porcentaje de votos de partidos politicos" << endl;
    cout << "Ingrese los nombres de los 5 partidos" << endl;

    // Ingresamos los nombres de los partidos políticos
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese el nombre del partido " << i + 1 << ": ";
        cin >> Partido[i];  // Almacenamos el nombre del partido
    }

    // Ingresamos las notas de las rondas
    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese las notas de la primera ronda para el partido " << Partido[i] << ": ";
        cin >> PrimeraRonda[i];  // Almacenamos ronda 1
    }

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese las notas de la segunda ronda para el partido " << Partido[i] << ": ";
        cin >> segundaRonda[i];  // Almacenamos ronda 2
    }

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese las notas de la tercera ronda para el partido " << Partido[i] << ": ";
        cin >> terceraRonda[i];  // Almacenamos ronda 3
    }

    for (int i = 0; i < 5; ++i) {
        cout << "Ingrese las notas de la cuarta ronda para el partido " << Partido[i] << ": ";
        cin >> cuartaRonda[i];  // Almacenamos ronda 4
    }

    // Calculamos los votos totales de cada partido y el total general
    for (int i = 0; i < 5; ++i) {
        VotosTotales[i] = PrimeraRonda[i] + segundaRonda[i] + terceraRonda[i] + cuartaRonda[i];
        totalVotos += VotosTotales[i];  // Sumamos los votos totales de todos los partidos
    }

    // Calculamos los porcentajes de cada partido
    for (int i = 0; i < 5; ++i) {
        if (totalVotos > 0) {
            porcentaje[i] = (VotosTotales[i] * 100) / totalVotos;  // Calculamos el porcentaje
        }
    }

    // Mostramos los resultados
    cout << fixed << setprecision(2);  // Para mostrar los porcentajes con dos decimales
    cout << "Resultados finales:" << endl;
    cout << "-------------------------------" << endl;

    for (int i = 0; i < 5; ++i) {
        cout << "Partido: " << Partido[i] << endl;
        cout << "Votos totales: " << VotosTotales[i] << endl;
        cout << "Porcentaje: " << porcentaje[i] << "%" << endl;
        cout << "-------------------------------" << endl;
    }

    // Mostrar el total de votos generales
    cout << "\nTotal de votos generales: " << totalVotos << endl;
}

int main() {
    char opcion;

    do {
        // Ejecutar el campeonato
        ejecutarVotaciones();

        // Preguntar si se desea reiniciar el campeonato
        cout << "¿Quieres reiniciar el campeonato? (S/N): ";
        cin >> opcion;

    } while (opcion == 'S' || opcion == 's');

    cout << "Gracias por participar!" << endl;

    return 0;
}

