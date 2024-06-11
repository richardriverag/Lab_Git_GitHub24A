#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    // Solicitar los tres valores al usuario
    cout << "Ingrese tres valores distintos de cero: ";
    cin >> a >> b >> c;

    // Verificar que los valores sean distintos de cero
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Todos los valores deben ser distintos de cero." << endl;
        return 1;
    }

    // Verificar la desigualdad triangular
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Los valores pueden representar los lados de un triángulo." << endl;
    } else {
        cout << "Los valores NO pueden representar los lados de un triángulo." << endl;
    }

    return 0;
}
