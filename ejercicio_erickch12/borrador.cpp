#include <iostream>
#include <math.h> // Incluye la librería math.h

int main() {
    // Valores dados
    double x = 12;
    double sigma = 2.1836;
    double y = 3;
    double lambda = 1.11695;
    double alpha = 328.67;

    // Calcula paso a paso
    double numerator = x + sigma * y; // Calcula el numerador
    double denominator = pow(x, 2) - pow(y, 2); // Calcula el denominador
    double fraction = numerator / denominator; // Calcula la fracción

    double part1 = 3 * fraction; // Multiplica la fracción por 3
    
    double alphaDifference = alpha - 13.7; // Calcula la diferencia de alpha
    double part2 = lambda * alphaDifference; // Multiplica lambda por la diferencia
    
    double f = part1 - part2; // Resta la segunda parte de la primera

    // Imprime el resultado
    std::cout << "El valor de f es: " << f << std::endl;

    return 0;
}