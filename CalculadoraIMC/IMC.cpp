#include <iostream>
#include <cstdlib>

// Programa para calcular el IMC
//Febrero 2025 StevenVasquez

using namespace std;

int main ()
{
    //Variables
    float peso=0;
    float altura=0;
    int opcionSeleccionada;
    float resultado =0;
    char salidaMenu;

    do
    {
        system("cls");

        opcionSeleccionada=0;
        resultado=0;
        cout << "Calculadora IMC" << endl;
        //Menu de opciones en calculadora
        cout << "1. Calcular IMC en libras y pulgadas" << endl;
        cout << "2. calcular IMC en kilos y metros" << endl;
        cout << "   Opcion: ";
        cin >> opcionSeleccionada;
        // Estructuras condicionales

        if (opcionSeleccionada>=1 && opcionSeleccionada<=2)
        {
            cout << "Ingrese su peso" << endl;
            cin >> peso;
            cout << "Ingrese su altura" << endl;
            cin >> altura;
        }
        switch  (opcionSeleccionada)
        {
            case 1:
                resultado = (peso * 703) / (altura * altura);
                break;
            case 2:
                resultado = peso / (altura * altura) ;
                break;

            default:
                cout << "Error opcion seleccionada" << endl;
        }
        cout << "El resultado de su calculo es: " << resultado << endl;

        if (resultado < 18.5)
            cout << "Peso muy bajo." << endl;
        else if (resultado >= 18.5 && resultado <= 24.9)
            cout << "Peso normal." << endl;
        else if (resultado >= 25 && resultado <= 29.9)
            cout << "Sobrepeso." << endl;
        else if (resultado >= 30)
            cout << "Obeso." << endl;

        cout << "Desea realizar otra operacion Si=S o No=N" << endl;
        cin >> salidaMenu;
    } while (salidaMenu == 's' || salidaMenu == 'S');
    return 0;
}




