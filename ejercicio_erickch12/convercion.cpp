#include <iostream>
#include <iomanip>

using namespace std;

// Factores de conversión como constantes
const double PULGADAS_A_CM = 2.54;
const double MILLAS_A_METROS = 1609.34;
const double FAHRENHEIT_A_CELSIUS = 5.0 / 9.0;
const double GALONES_A_LITROS = 3.78541;
const double ONZAS_A_GRAMOS = 28.3495;
const double LIBRAS_A_KILOGRAMOS = 0.453592;

int main() {
    double valor;
    char unidad;
    double resultado;
    string nuevaUnidad;

    // Solicitar al usuario el valor y la unidad
    cout << "Ingrese el valor seguido de un espacio y la unidad (p, m, f, g, o, l): ";
    cin >> valor >> unidad;

    // Realizar la conversión basada en la unidad ingresada
    switch (unidad) {
        case 'p':
        case 'P':
            resultado = valor * PULGADAS_A_CM;
            nuevaUnidad = "cm";
            break;
        case 'm':
        case 'M':
            resultado = valor * MILLAS_A_METROS;
            nuevaUnidad = "m";
            break;
        case 'f':
        case 'F':
            resultado = (valor - 32) * FAHRENHEIT_A_CELSIUS;
            nuevaUnidad = "c";
            break;
        case 'g':
        case 'G':
            resultado = valor * GALONES_A_LITROS;
            nuevaUnidad = "l";
            break;
        case 'o':
        case 'O':
            resultado = valor * ONZAS_A_GRAMOS;
            nuevaUnidad = "gr";
            break;
        case 'l':
        case 'L':
            resultado = valor * LIBRAS_A_KILOGRAMOS;
            nuevaUnidad = "kg";
            break;
        default:
            cout << "Unidad no reconocida." << endl;
            return 1;
    }

    // Mostrar el resultado con 2 decimales
    cout << fixed << setprecision(2);
    cout << resultado << " " << nuevaUnidad << endl;

    return 0;
}
