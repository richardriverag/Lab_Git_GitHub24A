// // // // #include <iostream>
using namespace std;
// int main(){
    //Calculos en los programas
    cout << 5 << endl;
    cout << 5 + 5 << endl;
    cout << "5 + 5" << endl;
    cout << "125 + 125 = " << 125 +125 << endl;
    cout << "250 - 125 = " << 250 - 125 << endl;
    cout << "5 * 8 = " << 5 * 8 << endl;
    cout << "12.5 * 4.5 = " << 12.5 * 4.5 << endl;
    cout << "500 / 3 = " << 500 / 3 << endl; //Div. enteros
    cout << "500.0 / 3 = " << 500.0 / 3 << endl; //Div. real
    cout << "500 / 3.0 = " << 500 / 3.0 << endl; //Div. real
    cout << "500.0 / 3.0 = " << 500.0 / 3.0 << endl; //Div. real
    //Variables
    int cantidad, cantidad1, cantidad2; // declaración
    cantidad = 5; // Inicialización
    double precio=5, total=0;
    precio = 2.2;
    int edad = 20; // declaración e inicialización
    cout << "cantidad: " << cantidad << endl;
    cout << "precio: " << precio << endl;
    int tamanio;
    tamanio = 2'147'483'647; 
    cout << "tamaño: " << tamanio << endl;
    tamanio = tamanio +1;
    //tamanio = 2'147'483'648; 
    cout << "tamaño: " << tamanio << endl;
    long long int grande;
    grande = 2'147'483'648; 
    cout << "grande: " << grande << endl;
    unsigned int otro_grande;
    otro_grande = 4147483648; 
    cout << "otro grande: " << otro_grande << endl;
    precio = 8.5;
    total = cantidad * precio;
    cout << "total: " << total << endl;
    //Expresiones
    //operando operador operando... operador operando ....
    total = cantidad * precio * 1.15;
    cantidad1 = 12;
    cantidad2 = 6;
    total = cantidad1 + cantidad2 * precio;
    cout << "total: " << total << endl;
    total = (cantidad1 + cantidad2) * precio;
    cout << "total: " << total << endl;
    
    return 0;
}