#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

// Función para contar las ocurrencias de una secuencia en un texto
int contarSecuencia(const std::string& texto, const std::string& secuencia) {
    int contador = 0;
    size_t posicion = texto.find(secuencia);
    while (posicion != std::string::npos) {
        contador++;
        posicion = texto.find(secuencia, posicion + 1);
    }
    return contador;
}

int main() {
    // Abrir el archivo de entrada
    std::ifstream archivo("versos.txt");
    if (!archivo.is_open()) {
        std::cerr << "No se pudo abrir el archivo versos.txt" << std::endl;
        return 1;
    }

    std::string linea;
    int totalConteo = 0;

    while (std::getline(archivo, linea)) {
        std::transform(linea.begin(), linea.end(), linea.begin(), ::tolower);  // Convertir la línea a minúsculas
        totalConteo += contarSecuencia(linea, "es");
    }

    archivo.close();

    std::cout << "La secuencia 'es' aparece " << totalConteo << " veces en el archivo versos.txt" << std::endl;

    return 0;
}
