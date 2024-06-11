#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    ifstream archivo("datos.txt");
    if (!archivo) {
        cout << "No se pudo abrir el archivo datos.txt" << endl;
        
    }

    double numero;
    double suma = 0;
    double maximo = -9999999;
    double minimo = 9999999;
    int promedio = 0, contador = 1;

    while (archivo >> numero) {
        if (numero == 0) break;
        suma += numero;
        if (numero > maximo) maximo = numero;
        if (numero < minimo) minimo = numero;
        contador++;
    }

    archivo.close();

    if (contador == 0) {
        cout << "El archivo no contiene números válidos." << endl;
    } else {
        double promedio = suma / contador;
        
        cout << "El número mayor es: " << maximo << endl;
        cout << "El número menor es: " << minimo << endl;
        cout << "El promedio es: " << promedio << endl;
    }

    return 0;
}