#include <iostream>
#include <string>
using namespace std;

int main (){

cout << "Sumatoeio de numeros"<< endl;
int limite, suma=0, num=1;
cout << "desde el 1 hasta el numero:";
cin >> limite;
while (num <= limite)
{

suma = suma + num;
num++;

}
cout << "el resultado desde 1 a "<< limite << " es: "<< suma << endl; 




    return 0;
}