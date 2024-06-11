#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include <iomanip>
int main() {
  cout << "Lectura de archivo\n";
  
  archivo.open("numeros.txt");
  if (archivo.is_open()){ // Existe el archivo en la ubicacición
    archivo >> codigo;
    while (codigo != "X"){
      archivo >> cantidad;
      archivo >> precio;
      getline(archivo, producto);
      cout << codigo << " " << cantidad << " " << precio << " " << producto << endl;
      archivo >> codigo;
    }
  }

}