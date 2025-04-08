// INCLUSION DE LIBRERIAS
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

void ejecutarCampeonato() {
    // DEFINIMOS LAS MATRICEZ DE DATOS
    string Equipo[6];  // ALMACENAMOS LOS NOMBRES DE LOS EQUIPOS
    int golesContra[6] = {0};  // TOTAL DE GOLES EN CONTRA POR EQUIPO
    int golesFavor[6] = {0};   // TOTAL DE GOLES A FAVOR POR EQUIPO
    int partidosGanados[6] = {0};  // PARTIDOS GANADOS POR EQUIPO
    int partidosEmpatados[6] = {0};  // PARTIDOS EMPARTADOS POR EQUIPO
    int partidosPerdidos[6] = {0};  // PARTIDOS PERDIDOS
    int matriz[6][8]; // MATRIZ DE 6 FILAS Y 8 COLUMNAS
    int cantidadDePartidosJugados = 0;
    int puntos[6] = {0};  //ALMACENAR LOS PUNTOS POR EQUIPO


    // Inicializamos las estadisticas para cada equipo
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

    // Partidos
    srand(time(0)); // Inicializamos el generador de números aleatorios
    for  (int i = 0; i < 6; ++i) {
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

    // ASIGNAMOS LOS RESULTAODS EN LA MATRIZ PARA MOSTRALOS
    for (int i = 0; i < 6; ++i) {
        matriz[i][0] = i + 1;
        matriz[i][1] = partidosGanados[i] + partidosEmpatados[i] + partidosPerdidos[i];
        matriz[i][2] = partidosGanados[i];
        matriz[i][3] = partidosEmpatados[i];
        matriz[i][4] = partidosPerdidos[i];
        matriz[i][5] = golesFavor[i];
        matriz[i][6] = golesContra[i];
        matriz[i][7] = puntos[i];
    }

    //MOSTRAMOS LOS RESULTADOS Y LA MATRIZ

    cout << "Tabla de Resultados:" << endl;

    // Imprimir el encabezado de filas con separación
    cout << "+------------+----------+----------+----------+----------+----------+----------+----------+" << endl;
    cout << "| Equipo     | PJ       | PG       | PE       | PP       | GF       | GC       | PT       |" << endl;
    cout << "+------------+----------+----------+----------+----------+----------+----------+----------+" << endl;

    // Imprimir los equipos y sus estadísticas
    for (int i = 0; i < 6; ++i) {
        cout << "| " << setw(10) << Equipo[i] << " | ";
        for (int j = 1; j < 8; ++j) {
            cout << setw(8) << matriz[i][j] << " | ";
        }
        cout << endl;
        cout << "+------------+----------+----------+----------+----------+----------+----------+----------+" << endl;
    }

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

    cout << "El campeon del campeonato es: " << Equipo[equipoCampeon] << " con " << maxPuntos << " puntos." << endl;
    cout << "El equipo que baja de categoria es: " << Equipo[equipoUltimo] << " con " << minPuntos << " puntos." << endl;
}

int main() {
    char opcion;

    do {
        // Ejecutar el campeonato
        ejecutarCampeonato();

        // Preguntar si se desea reiniciar el campeonato
        cout << "¿Quieres reiniciar el campeonato? (S/N): ";
        cin >> opcion;

    } while (opcion == 'S' || opcion == 's');

    cout << "Gracias por participar!" << endl;

    return 0;
}
