#include <iostream>
using namespace std;
int main (){

float num1, num2, num3, promedio;

cout << "Ingrese 3 numeros reales para hacer el promedio" << endl;

cout << "primer numero: " << endl;
cin >> num1 ;

cout << "segundo numero: " << endl;
cin >> num2 ;
cout << "tercer numero: " << endl;
cin >> num3 ;

promedio = (num1 + num2 + num3) / 3;

cout << "el promedio es: " << promedio << endl;



return 0 ;
}