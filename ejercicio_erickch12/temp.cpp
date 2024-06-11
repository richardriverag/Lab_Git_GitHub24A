#include <iostream>
using namespace std;
int main (){

float temperaturaF, temperaturaCelcius;

cout << "Ingrese la temperatura en grados Fahrenheit" << endl;
cin >> temperaturaF;

temperaturaCelcius = ((5*(temperaturaF-32))/9);



cout << "La temperatura en grados celcius es: " << temperaturaCelcius << endl;



return 0 ;
}