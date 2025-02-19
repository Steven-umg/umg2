#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>  // Para usar setw y manipular el formato de salida
using namespace std;

void ejecutarCampeonato() {
    // Definir las matrices para los datos de los equipos
    string Equipo[6];  // Matriz para almacenar los nombres de los equipos
    int golesContra[6] = {0};  // Goles en contra por equipo
    int golesFavor[6] = {0};   // Goles a favor por equipo
    int partidosGanados[6] = {0};  // Partidos ganados por equipo
    int partidosEmpatados[6] = {0};  // Partidos empatados por equipo
    int partidosPerdidos[6] = {0};  // Partidos perdidos por equipo
    int matriz[7][6]; // Matriz para mostrar los resultados: 7 filas (estadísticas) y 6 columnas (equipos)
    int cantidadDePartidosJugados = 0;
    int puntos[6] = {0};  // Para almacenar los puntos de cada equipo

    // Inicializamos las matrices para cada equipo
    for (int i = 0; i < 6; ++i) {
        golesFavor[i] = 0;
        golesContra[i] = 0;
        partidosGanados[i] = 0;
        partidosEmpatados[i] = 0;
        partidosPerdidos[i] = 0;
    }

    cout << "Mundial de futbol" << endl;
    cout << "Ingrese el nombre de los 6 equipos a participar" << endl;

    // Leer los nombres de los equipos y almacenarlos en la matriz Equipo
    for (int i = 0; i < 6; ++i) {
        cout << "Ingrese el nombre del equipo " << i + 1 << ": ";
        cin >> Equipo[i];  // Almacenamos el nombre del equipo
    }

    // Partidos todos contra todos
    srand(time(0)); // Inicializamos el generador de números aleatorios
    for (int i = 0; i < 6; ++i) {
        for (int k = 0; k < 6; ++k) {
            if (i != k) {
                // Generar goles aleatorios para el partido
                int golesFavorEquipoI = rand() % 11;  // Goles aleatorios entre 0 y 10
                int golesFavorEquipoK = rand() % 11;  // Goles aleatorios entre 0 y 10

                // Acumulamos los goles de cada equipo
                golesFavor[i] += golesFavorEquipoI;
                golesContra[i] += golesFavorEquipoK;
                golesFavor[k] += golesFavorEquipoK;
                golesContra[k] += golesFavorEquipoI;

                // Determinamos quién ganó, empató o perdió y calculamos los puntos
                if (golesFavorEquipoI > golesFavorEquipoK) {
                    partidosGanados[i]++;
                    partidosPerdidos[k]++;
                    puntos[i] += 3;  // 3 puntos para el ganador
                } else if (golesFavorEquipoI < golesFavorEquipoK) {
                    partidosGanados[k]++;
                    partidosPerdidos[i]++;
                    puntos[k] += 3;  // 3 puntos para el ganador
                } else {
                    partidosEmpatados[i]++;
                    partidosEmpatados[k]++;
                    puntos[i] += 1;  // 1 punto por empate
                    puntos[k] += 1;  // 1 punto por empate
                }
                cantidadDePartidosJugados++;
            }
        }
    }

    // Asignamos los resultados en la matriz para mostrar
    for (int i = 0; i < 6; ++i) {
        // Equipos en la primera fila
        matriz[0][i] = i + 1;

        // Partidos jugados (PJ) en la segunda fila
        matriz[1][i] = partidosGanados[i] + partidosEmpatados[i] + partidosPerdidos[i];

        // Partidos ganados (PG) en la tercera fila
        matriz[2][i] = partidosGanados[i];

        // Partidos empatados (PE) en la cuarta fila
        matriz[3][i] = partidosEmpatados[i];

        // Partidos perdidos (PP) en la quinta fila
        matriz[4][i] = partidosPerdidos[i];

        // Goles a favor (GF) en la sexta fila
        matriz[5][i] = golesFavor[i];

        // Goles en contra (GC) en la séptima fila
        matriz[6][i] = golesContra[i];
    }

    // Mostrar los resultados en la matriz con separación entre filas y columnas
    cout << "Tabla de Resultados:" << endl;

    // Imprimir el encabezado de columnas con separación
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;
    cout << "| Equipo           | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << Equipo[i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    // Imprimir las filas de estadísticas con separación
    cout << "| PJ               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[1][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    cout << "| PG               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[2][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    cout << "| PE               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[3][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    cout << "| PP               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[4][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    cout << "| GF               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[5][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    cout << "| GC               | ";
    for (int i = 0; i < 6; ++i) {
        cout << setw(16) << matriz[6][i] << " | ";
    }
    cout << endl;
    cout << "+------------------+------------------+------------------+------------------+------------------+------------------+------------------+" << endl;

    // Determinar el campeón y el último lugar
    int maxPuntos = -1, minPuntos = 9999;
    int equipoCampeon = -1, equipoUltimo = -1;

    for (int i = 0; i < 6; ++i) {
        if (puntos[i] > maxPuntos) {
            maxPuntos = puntos[i];
            equipoCampeon = i;
        }
        if (puntos[i] < minPuntos) {
            minPuntos = puntos[i];
            equipoUltimo = i;
        }
    }

    cout << "El campenn del campeonato es: " << Equipo[equipoCampeon] << " con " << maxPuntos << " puntos." << endl;
    cout << "El equipo que baja de categoria es: " << Equipo[equipoUltimo] << " con " << minPuntos << " puntos." << endl;
}

int main() {
    char opcion;

    do {
        // Ejecutar el campeonato
        ejecutarCampeonato();

        // Preguntar si se desea reiniciar el programa
        cout << "¿Quieres reiniciar el campeonato? (S/N): ";
        cin >> opcion;

    } while (opcion == 'S' || opcion == 's');

    cout << "Gracias por participar!" << endl;

    return 0;
}

