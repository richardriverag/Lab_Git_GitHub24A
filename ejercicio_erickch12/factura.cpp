#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    double precio, total, totalConDescuento, iva, precioFinal;
    int unidades;
    char derechoDescuento;
    string nombreCliente, cedula, direccion, nombreProducto;
    const double DESCUENTO = 0.15;
    const double IVA = 0.12;

    // Solicitar datos al usuario
    cout << "Ingrese el precio del producto: ";
    cin >> precio;
    cout << "Ingrese las unidades adquiridas: ";
    cin >> unidades;
    cout << "¿Tiene derecho a descuento del 15% antes del I.V.A.? (S/N): ";
    cin >> derechoDescuento;
    cin.ignore(); // Limpiar el buffer de entrada para leer cadenas correctamente
    cout << "Ingrese el nombre completo del cliente: ";
    getline(cin, nombreCliente);
    cout << "Ingrese la cédula del cliente: ";
    getline(cin, cedula);
    cout << "Ingrese la dirección del cliente: ";
    getline(cin, direccion);
    cout << "Ingrese el nombre del producto: ";
    getline(cin, nombreProducto);

    // Calcular total
    total = precio * unidades;

    // Calcular descuento si aplica
    double descuentoAplicado = 0;
    if (derechoDescuento == 'S' || derechoDescuento == 's') {
        descuentoAplicado = total * DESCUENTO;
    }
    totalConDescuento = total - descuentoAplicado;

    // Calcular IVA
    iva = totalConDescuento * IVA;

    // Calcular precio final
    precioFinal = totalConDescuento + iva;

    // Imprimir la factura
    cout << fixed << setprecision(2);
    cout << setw(10) << "Cliente: " << nombreCliente << endl;
    cout << setw(10) << "Cédula: " << cedula << endl;
    cout << setw(10) << "Dirección: " << direccion << endl;
    cout << setw(10) << "Producto: " << nombreProducto << endl;
    cout << setw(10) << "Unidades: " << unidades << endl;
    cout << setw(10) << "Precio: " << precio << endl;
    cout << setw(10) << "Total: " << total << endl;
    cout << setw(10) << "Descuento: " << descuentoAplicado << endl;
    cout << setw(10) << "Total con Descuento: " << totalConDescuento << endl;
    cout << setw(10) << "IVA (12%): " << iva << endl;
    cout << setw(10) << "Precio Final: " << precioFinal << endl;

    return 0;
}