#include <iostream>
#include <string>
using namespace std;
int main(){

int entero1 = 15, entero2 = 4;
double real1 = 15.0 , real2 =4.0;
 cout << "operaciones entre los numeros 15 y 4 " << endl ;
 cout << "divicion entera (/): " << entero1 / entero2 << endl;
 //operador modulo 
 cout<< "resto de la divición (%): " << entero1 % entero2 << endl;
 cout << " divición real (/): " << real1 / real2 << endl;
 cout << "numero " << real1 << endl;
 real1 = -real1;
 cout << " cambio de signo: " << real1 << endl;
 cout << "cambio de signo:  " << -real2 << endl;
 cout << "numero: " << real2 << endl;
//incremento / decremento ++/--

int i = 10, j ;
cout << "i : " << i << endl;
i++;
cout << "i : " << i << endl;
i--;
cout << "i : " << i << endl;
j= i++;
cout << "i : " << i << "\t-\tj: " << j << endl; 






















    return 0;

}